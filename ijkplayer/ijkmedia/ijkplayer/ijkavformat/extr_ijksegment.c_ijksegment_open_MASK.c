
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int io_control ;
struct TYPE_7__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int size; int segment_index; int * url; int member_0; } ;
struct TYPE_8__ {int app_ctx_intptr; int inner; } ;
typedef TYPE_2__ Context ;
typedef int AVDictionary ;
typedef int AVApplicationContext ;
typedef TYPE_3__ AVAppIOControl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_3__*) ;
 int FUNC_1 (int **,char*,int,int ) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (int *,int *,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *,char const*,int) ;
 scalar_t__ FUNC_5 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, const char *VAR_4, int VAR_5, AVDictionary **VAR_6)
{
    Context *VAR_7 = VAR_3->priv_data;
    AVAppIOControl VAR_8 = {0};
    AVApplicationContext *VAR_9 = (AVApplicationContext *)(intptr_t)VAR_7->app_ctx_intptr;
    int VAR_10 = -1;
    int VAR_11 = -1;

    FUNC_2(VAR_4, "ijksegment:", &VAR_4);

    if (!VAR_4 || !*VAR_4)
        return VAR_2;

    VAR_11 = (int)FUNC_5(VAR_4, ((void*)0), 0);
    VAR_8.size = sizeof(VAR_8);
    VAR_8.segment_index = VAR_11;
    FUNC_4(VAR_8.url, VAR_4, sizeof(VAR_8.url));

    if (VAR_9 && VAR_8.segment_index < 0) {
        VAR_10 = VAR_2;
        goto fail;
    }
    VAR_10 = FUNC_0(VAR_9, VAR_0, &VAR_8);
    if (VAR_10 || !VAR_8.url[0]) {
        VAR_10 = VAR_1;
        goto fail;
    }

    FUNC_1(VAR_6, "ijkapplication", VAR_7->app_ctx_intptr, 0);
    FUNC_1(VAR_6, "ijkinject-segment-index", VAR_11, 0);

    VAR_10 = FUNC_3(&VAR_7->inner,
                               VAR_8.url,
                               VAR_5,
                               &VAR_3->interrupt_callback,
                               VAR_6,
                               VAR_3->protocol_whitelist,
                               VAR_3->protocol_blacklist,
                               VAR_3);
    if (VAR_10)
        goto fail;

    return 0;
fail:
    return VAR_10;
}
