
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int abort_request; TYPE_1__* ijkio_interrupt_callback; } ;
struct TYPE_6__ {TYPE_3__* priv_data; } ;
struct TYPE_5__ {int opaque; scalar_t__ (* callback ) (int ) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(IjkURLContext *VAR_0)
{
    IjkIOCacheContext *VAR_1 = VAR_0->priv_data;
    if (!VAR_1)
        return 1;

    if (VAR_1->abort_request)
        return 1;

    if (VAR_1->ijkio_interrupt_callback && VAR_1->ijkio_interrupt_callback->callback &&
                    VAR_1->ijkio_interrupt_callback->callback(VAR_1->ijkio_interrupt_callback->opaque)) {
        VAR_1->abort_request = 1;
    }

    if (VAR_1->abort_request)
        return 1;

    return VAR_1->abort_request;
}
