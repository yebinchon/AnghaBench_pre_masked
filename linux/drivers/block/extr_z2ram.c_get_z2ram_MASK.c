
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_4 ;
 unsigned long* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3( void )
{
    int VAR_8;

    for ( VAR_8 = 0; VAR_8 < VAR_2 / VAR_1; VAR_8++ )
    {
 if ( FUNC_2( VAR_8, VAR_7 ) )
 {
     VAR_4++;
     VAR_5[VAR_6++] = (unsigned long)FUNC_0(VAR_3) +
          (VAR_8 << VAR_0);
     FUNC_1( VAR_8, VAR_7 );
 }
    }

    return;
}
