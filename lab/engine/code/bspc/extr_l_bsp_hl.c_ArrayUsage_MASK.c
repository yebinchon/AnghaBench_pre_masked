
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

unsigned FUNC_1( char *VAR_0, int VAR_1, int VAR_2, int VAR_3 )
{
 float VAR_4 = VAR_2 ? VAR_1 * 100.0 / VAR_2 : 0.0;

   FUNC_0("%-12s  %7i/%-7i  %7i/%-7i  (%4.1f%%)",
    VAR_0, VAR_1, VAR_2, VAR_1 * VAR_3, VAR_2 * VAR_3, VAR_4 );
 if ( VAR_4 > 80.0 )
  FUNC_0( "VERY FULL!\n" );
 else if ( VAR_4 > 95.0 )
  FUNC_0( "SIZE DANGER!\n" );
 else if ( VAR_4 > 99.9 )
  FUNC_0( "SIZE OVERFLOW!!!\n" );
 else
  FUNC_0( "\n" );
 return VAR_1 * VAR_3;
}
