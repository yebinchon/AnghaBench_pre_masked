
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_2( void )
{

    while ( FUNC_1() > ( VAR_0 * 4 ) )
    {
 VAR_1++;
 VAR_2[ VAR_3 ] =
     (u_long)FUNC_0( VAR_0, "z2ram" );

 if ( VAR_2[ VAR_3 ] == 0 )
 {
     break;
 }

 VAR_3++;
    }

    return;
}
