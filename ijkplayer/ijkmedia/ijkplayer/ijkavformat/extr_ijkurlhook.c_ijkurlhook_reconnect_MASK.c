
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_9__ {int url; } ;
struct TYPE_11__ {int logical_size; scalar_t__ io_error; TYPE_2__* inner; void* logical_pos; int inner_flags; TYPE_1__ app_io_ctrl; int * inner_options; scalar_t__ test_fail_point; int test_fail_point_next; } ;
typedef TYPE_3__ Context ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_2__**,int ,int ,int *,int **,int ,int ,TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2, AVDictionary *VAR_3)
{
    Context *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 0;
    URLContext *VAR_6 = ((void*)0);
    AVDictionary *VAR_7 = ((void*)0);

    VAR_4->test_fail_point_next += VAR_4->test_fail_point;

    FUNC_0(VAR_4->inner_options);
    FUNC_1(&VAR_7, VAR_4->inner_options, 0);
    if (VAR_3)
        FUNC_1(&VAR_7, VAR_3, 0);

    VAR_5 = FUNC_4(&VAR_6,
                               VAR_4->app_io_ctrl.url,
                               VAR_4->inner_flags,
                               &VAR_2->interrupt_callback,
                               &VAR_7,
                               VAR_2->protocol_whitelist,
                               VAR_2->protocol_blacklist,
                               VAR_2);
    if (VAR_5)
        goto fail;

    FUNC_3(&VAR_4->inner);

    VAR_4->inner = VAR_6;
    VAR_2->is_streamed = VAR_4->inner->is_streamed;
    VAR_4->logical_pos = FUNC_5(VAR_4->inner, 0, VAR_1);
    if (VAR_4->inner->is_streamed)
        VAR_4->logical_size = -1;
    else
        VAR_4->logical_size = FUNC_5(VAR_4->inner, 0, VAR_0);

    VAR_4->io_error = 0;
fail:
    FUNC_2(&VAR_7);
    return VAR_5;
}
