
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * url; scalar_t__ is_handled; } ;
struct TYPE_7__ {int interrupt_callback; TYPE_1__* priv_data; } ;
struct TYPE_6__ {TYPE_5__ io_control; scalar_t__ app_ctx; } ;
typedef TYPE_1__ Context ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    Context *VAR_4 = VAR_3->priv_data;
    int VAR_5 = 0;

    if (FUNC_2(&VAR_3->interrupt_callback)) {
        VAR_5 = VAR_1;
        goto fail;
    }

    if (VAR_4->app_ctx) {
        FUNC_1(VAR_3, VAR_2, "livehook %s\n", VAR_4->io_control.url);
        VAR_4->io_control.is_handled = 0;
        VAR_5 = FUNC_0(VAR_4->app_ctx, VAR_0, &VAR_4->io_control);
        if (VAR_5 || !VAR_4->io_control.url[0]) {
            VAR_5 = VAR_1;
            goto fail;
        }
    }

    if (FUNC_2(&VAR_3->interrupt_callback)) {
        VAR_5 = VAR_1;
        goto fail;
    }

fail:
    return VAR_5;
}
