
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct yyguts_t* yyscan_t ;
struct yyguts_t {int dummy; } ;
typedef int YY_EXTRA_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct yyguts_t*,int,int) ;
 int FUNC_1 (struct yyguts_t*) ;
 scalar_t__ FUNC_2 (int,struct yyguts_t*) ;
 int FUNC_3 (int ,struct yyguts_t*) ;

int FUNC_4( YY_EXTRA_TYPE VAR_3, yyscan_t* VAR_4 )
{
    struct yyguts_t VAR_5;

    FUNC_3 (VAR_3, &VAR_5);

    if (VAR_4 == ((void*)0)){
        VAR_2 = VAR_0;
        return 1;
    }

    *VAR_4 = (yyscan_t) FUNC_2 ( sizeof( struct yyguts_t ), &VAR_5 );

    if (*VAR_4 == ((void*)0)){
        VAR_2 = VAR_1;
        return 1;
    }



    FUNC_0(*VAR_4,0x00,sizeof(struct yyguts_t));

    FUNC_3 (VAR_3, *VAR_4);

    return FUNC_1 ( *VAR_4 );
}
