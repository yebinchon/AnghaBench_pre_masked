
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int url; } ;
struct TYPE_14__ {struct TYPE_14__* priv_data; scalar_t__ io_error; struct TYPE_14__* inner; TYPE_2__* prot; int logical_size; int logical_pos; int inner_flags; TYPE_1__ app_io_ctrl; int ijkio_app_ctx; int * inner_options; scalar_t__ test_fail_point; int test_fail_point_next; } ;
struct TYPE_13__ {int (* url_open2 ) (TYPE_3__*,int ,int ,int **) ;int (* url_seek ) (TYPE_3__*,int ,int ) ;int (* url_close ) (TYPE_3__*) ;} ;
typedef TYPE_3__ IjkURLContext ;
typedef int IjkAVDictionary ;
typedef TYPE_3__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_3__**,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int **) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(IjkURLContext *VAR_2, IjkAVDictionary *VAR_3)
{
    Context *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 0;
    IjkURLContext *VAR_6 = ((void*)0);
    IjkAVDictionary *VAR_7 = ((void*)0);

    VAR_4->test_fail_point_next += VAR_4->test_fail_point;

    FUNC_0(VAR_4->inner_options);
    FUNC_1(&VAR_7, VAR_4->inner_options, 0);
    if (VAR_3)
        FUNC_1(&VAR_7, VAR_3, 0);

    VAR_5 = FUNC_4(&VAR_6, VAR_4->app_io_ctrl.url);
    VAR_6->ijkio_app_ctx = VAR_4->ijkio_app_ctx;
    if (VAR_5)
        goto fail0;

    VAR_5 = VAR_6->prot->url_open2(VAR_6, VAR_4->app_io_ctrl.url, VAR_4->inner_flags, &VAR_7);
    if (VAR_5)
        goto fail1;

    if (VAR_4->inner) {
        VAR_4->inner->prot->url_close(VAR_4->inner);
        FUNC_3(&VAR_4->inner->priv_data);
        FUNC_3(&VAR_4->inner);
    }

    VAR_4->inner = VAR_6;
    VAR_4->logical_pos = VAR_4->inner->prot->url_seek(VAR_4->inner, 0, VAR_1);
    VAR_4->logical_size = VAR_4->inner->prot->url_seek(VAR_4->inner, 0, VAR_0);
    VAR_4->io_error = 0;
    if (VAR_7) {
        FUNC_2(&VAR_7);
    }
    return VAR_5;

fail1:
    FUNC_3(&VAR_6->priv_data);
    FUNC_3(&VAR_6);
fail0:
    if (VAR_7) {
        FUNC_2(&VAR_7);
    }
    return VAR_5;
}
