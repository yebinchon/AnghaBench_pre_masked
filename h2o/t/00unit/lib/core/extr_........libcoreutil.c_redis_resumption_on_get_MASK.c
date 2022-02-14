
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sock; } ;
struct st_h2o_redis_resumption_accept_data_t {TYPE_1__ super; int * get_command; } ;
struct TYPE_9__ {scalar_t__ type; int len; int str; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_10__ {int * base; } ;
typedef TYPE_3__ h2o_iovec_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__ FUNC_1 (int *,int ,int ) ;
 TYPE_3__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,TYPE_3__) ;

__attribute__((used)) static void FUNC_4(redisReply *VAR_1, void *VAR_2, const char *VAR_3)
{
    struct st_h2o_redis_resumption_accept_data_t *VAR_4 = VAR_2;
    VAR_4->get_command = ((void*)0);

    h2o_iovec_t VAR_5;
    if (VAR_1 != ((void*)0) && VAR_1->type == VAR_0) {
        VAR_5 = FUNC_1(((void*)0), VAR_1->str, VAR_1->len);
    } else {
        VAR_5 = FUNC_2(((void*)0), 0);
    }

    FUNC_3(VAR_4->super.sock, VAR_5);

    if (VAR_5.base != ((void*)0))
        FUNC_0(VAR_5.base);
}
