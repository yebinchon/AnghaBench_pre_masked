
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int url; scalar_t__ retry_counter; int segment_index; } ;
struct TYPE_7__ {int inner_flags; TYPE_1__ app_io_ctrl; int segment_index; int inner_options; int app_ctx_intptr; } ;
struct TYPE_6__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ IjkURLContext ;
typedef int IjkAVDictionary ;
typedef TYPE_3__ Context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int ,int,char*,char const*) ;

__attribute__((used)) static int FUNC_3(IjkURLContext *VAR_0, const char *VAR_1, int VAR_2, IjkAVDictionary **VAR_3)
{
    Context *VAR_4 = VAR_0->priv_data;
    int VAR_5 = 0;



    VAR_4->inner_flags = VAR_2;

    if (VAR_3)
        FUNC_0(&VAR_4->inner_options, *VAR_3, 0);

    FUNC_1(&VAR_4->inner_options, "ijkapplication", VAR_4->app_ctx_intptr, 0);
    FUNC_1(&VAR_4->inner_options, "ijkinject-segment-index", VAR_4->segment_index, 0);

    VAR_4->app_io_ctrl.size = sizeof(VAR_4->app_io_ctrl);
    VAR_4->app_io_ctrl.segment_index = VAR_4->segment_index;
    VAR_4->app_io_ctrl.retry_counter = 0;

    FUNC_2(VAR_4->app_io_ctrl.url, sizeof(VAR_4->app_io_ctrl.url), "%s", VAR_1);

    return VAR_5;
}
