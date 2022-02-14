
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int (* on_body ) (TYPE_4__*,char const*) ;int (* on_head ) (TYPE_4__*,char const*,int,int ,int ,int *,int ,int ) ;} ;
struct TYPE_10__ {TYPE_3__ _cb; } ;
struct TYPE_7__ {int (* proceed_req ) (TYPE_4__*,int ,int ) ;} ;
struct TYPE_8__ {int res; } ;
struct st_h2o_http2client_stream_t {TYPE_4__ super; TYPE_1__ streaming; TYPE_2__ state; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*,char const*,int,int ,int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char const*) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http2client_stream_t *VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_2 != ((void*)0));
    switch (VAR_1->state.res) {
    case 128:
        VAR_1->super._cb.on_head(&VAR_1->super, VAR_2, 0x200, 0, FUNC_1(((void*)0), 0), ((void*)0), 0, 0);
        break;
    case 130:
        VAR_1->super._cb.on_body(&VAR_1->super, VAR_2);
        break;
    case 129:
        if (VAR_1->streaming.proceed_req != ((void*)0)) {
            VAR_1->streaming.proceed_req(&VAR_1->super, 0, VAR_0);
        }
        break;
    }
}
