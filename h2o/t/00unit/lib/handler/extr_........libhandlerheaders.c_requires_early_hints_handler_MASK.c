
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_headers_filter_t {TYPE_1__* cmds; } ;
struct TYPE_2__ {scalar_t__ cmd; scalar_t__ when; } ;
typedef TYPE_1__ h2o_headers_command_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct st_headers_filter_t *VAR_3)
{
    h2o_headers_command_t *VAR_4;
    for (VAR_4 = VAR_3->cmds; VAR_4->cmd != VAR_0; ++VAR_4) {
        if (VAR_4->cmd != VAR_1 && VAR_4->when != VAR_2)
            return 1;
    }
    return 0;
}
