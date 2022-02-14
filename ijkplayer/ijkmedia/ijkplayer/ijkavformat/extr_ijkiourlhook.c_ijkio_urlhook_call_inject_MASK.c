
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int is_url_changed; int * url; scalar_t__ is_handled; } ;
struct TYPE_10__ {TYPE_4__ app_io_ctrl; scalar_t__ app_ctx; } ;
struct TYPE_9__ {TYPE_1__* prot; TYPE_3__* priv_data; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ Context ;
typedef TYPE_4__ AVAppIOControl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,TYPE_4__*) ;
 int FUNC_1 (int *,int ,char*,int ,int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int,char*,char*,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_7(IjkURLContext *VAR_4)
{
    Context *VAR_5 = VAR_4->priv_data;
    int VAR_6 = 0;

    if (FUNC_2(VAR_4)) {
        VAR_6 = VAR_3;
        goto fail;
    }

    if (VAR_5->app_ctx) {
        AVAppIOControl VAR_7 = VAR_5->app_io_ctrl;

        VAR_5->app_io_ctrl.is_handled = 0;
        VAR_5->app_io_ctrl.is_url_changed = 0;
        VAR_6 = FUNC_0(VAR_5->app_ctx, VAR_0, &VAR_5->app_io_ctrl);
        if (VAR_6 || !VAR_5->app_io_ctrl.url[0]) {
            VAR_6 = VAR_3;
            goto fail;
        }

        AVAppIOControl VAR_8 = VAR_5->app_io_ctrl;
        if (FUNC_6(VAR_5->app_io_ctrl.url, "ffio:", FUNC_5("ffio:"))) {
            FUNC_3(VAR_5->app_io_ctrl.url, sizeof(VAR_5->app_io_ctrl.url), "%s%s", "ffio:", VAR_8.url);
        }

        if (!VAR_5->app_io_ctrl.is_url_changed && FUNC_4(VAR_7.url, VAR_5->app_io_ctrl.url)) {

            VAR_5->app_io_ctrl.is_url_changed = 1;
        }

        FUNC_1(((void*)0), VAR_2, "%s %s (%s)\n", VAR_4->prot->name, VAR_5->app_io_ctrl.url, VAR_5->app_io_ctrl.is_url_changed ? "changed" : "remain");
    }

    if (FUNC_2(VAR_4)) {
        VAR_6 = VAR_3;
        FUNC_1(((void*)0), VAR_1, "%s %s (%s)\n", VAR_4->prot->name, VAR_5->app_io_ctrl.url, VAR_5->app_io_ctrl.is_url_changed ? "changed" : "remain");
        goto fail;
    }

fail:
    return VAR_6;
}
