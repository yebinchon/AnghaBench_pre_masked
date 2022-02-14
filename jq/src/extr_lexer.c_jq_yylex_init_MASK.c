
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * yyscan_t ;
struct yyguts_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;

int FUNC_3(yyscan_t* VAR_3)
{
    if (VAR_3 == ((void*)0)){
        VAR_2 = VAR_0;
        return 1;
    }

    *VAR_3 = (yyscan_t) FUNC_2 ( sizeof( struct yyguts_t ), ((void*)0) );

    if (*VAR_3 == ((void*)0)){
        VAR_2 = VAR_1;
        return 1;
    }


    FUNC_0(*VAR_3,0x00,sizeof(struct yyguts_t));

    return FUNC_1 ( *VAR_3 );
}
