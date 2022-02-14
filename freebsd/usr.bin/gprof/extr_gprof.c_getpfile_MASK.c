
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawarc {int raw_count; int raw_selfpc; int raw_frompc; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rawarc*,int,int,int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rawarc*) ;

void
FUNC_6(char *VAR_2)
{
    FILE *VAR_3;
    struct rawarc VAR_4;

    VAR_3 = FUNC_2(VAR_2);
    FUNC_4(VAR_3);




    while ( FUNC_1( &VAR_4 , sizeof VAR_4 , 1 , VAR_3 ) == 1 ) {
 FUNC_5( &VAR_4 );
    }
    FUNC_0(VAR_3);
}
