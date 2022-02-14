
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* on_body ) (TYPE_3__*,char const*) ;int (* on_head ) (TYPE_3__*,char const*,int ,int ,int ,int *,int ,int ) ;} ;
struct TYPE_8__ {TYPE_1__ _cb; } ;
struct TYPE_7__ {int res; } ;
struct st_h2o_http1client_t {TYPE_3__ super; int (* proceed_req ) (TYPE_3__*,int ,int ) ;TYPE_2__ state; scalar_t__ _do_keepalive; } ;


 int VAR_0 ;



 int FUNC_0 (struct st_h2o_http1client_t*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,char const*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_3__*,char const*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http1client_t *VAR_1, const char *VAR_2)
{
    VAR_1->_do_keepalive = 0;
    switch (VAR_1->state.res) {
    case 128:
        VAR_1->super._cb.on_head(&VAR_1->super, VAR_2, 0, 0, FUNC_1(((void*)0), 0), ((void*)0), 0, 0);
        break;
    case 130:
        VAR_1->super._cb.on_body(&VAR_1->super, VAR_2);
        break;
    case 129:
        if (VAR_1->proceed_req != ((void*)0)) {
            VAR_1->proceed_req(&VAR_1->super, 0, VAR_0);
        }
        break;
    }
    FUNC_0(VAR_1);
}
