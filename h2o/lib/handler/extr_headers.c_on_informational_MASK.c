
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_headers_filter_t {TYPE_3__* cmds; } ;
struct TYPE_6__ {int status; int headers; } ;
struct TYPE_7__ {TYPE_1__ res; int pool; } ;
typedef TYPE_2__ h2o_req_t ;
struct TYPE_8__ {scalar_t__ cmd; scalar_t__ when; } ;
typedef TYPE_3__ h2o_headers_command_t ;
typedef int h2o_filter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(h2o_filter_t *VAR_2, h2o_req_t *VAR_3)
{
    struct st_headers_filter_t *VAR_4 = (void *)VAR_2;
    h2o_headers_command_t *VAR_5;

    if (VAR_3->res.status != 103)
        return;

    for (VAR_5 = VAR_4->cmds; VAR_5->cmd != VAR_0; ++VAR_5) {
        if (VAR_5->when != VAR_1)
            FUNC_0(&VAR_3->pool, &VAR_3->res.headers, VAR_5);
    }
}
