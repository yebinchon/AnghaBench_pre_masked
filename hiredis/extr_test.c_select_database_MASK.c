
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ integer; } ;
typedef TYPE_1__ redisReply ;
typedef int redisContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int *,char*) ;

__attribute__((used)) static redisContext *FUNC_5(redisContext *VAR_1) {
    redisReply *VAR_2;


    VAR_2 = FUNC_4(VAR_1,"SELECT 9");
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_2(VAR_2);


    VAR_2 = FUNC_4(VAR_1,"DBSIZE");
    FUNC_0(VAR_2 != ((void*)0));
    if (VAR_2->type == VAR_0 && VAR_2->integer == 0) {

        FUNC_2(VAR_2);
    } else {
        FUNC_3("Database #9 is not empty, test can not continue\n");
        FUNC_1(1);
    }

    return VAR_1;
}
