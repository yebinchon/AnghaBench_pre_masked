
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {scalar_t__ cur_ffmpeg_ctx; int ijk_ctx_map; } ;
struct TYPE_9__ {struct TYPE_9__* priv_data; TYPE_1__* prot; } ;
struct TYPE_8__ {int (* url_close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOManagerContext ;


 int FUNC_0 (TYPE_2__**) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(IjkIOManagerContext *VAR_0) {
    int VAR_1 = -1;
    if (!VAR_0)
        return VAR_1;

    IjkURLContext *VAR_2 = FUNC_1(VAR_0->ijk_ctx_map, (int64_t)(intptr_t)VAR_0->cur_ffmpeg_ctx);
    if (VAR_2) {
        if (VAR_2->prot && VAR_2->prot->url_close) {
            VAR_1 = VAR_2->prot->url_close(VAR_2);
        }
        FUNC_2(VAR_0->ijk_ctx_map, (int64_t)(intptr_t)VAR_0->cur_ffmpeg_ctx);
        FUNC_0(&VAR_2->priv_data);
        FUNC_0(&VAR_2);
    }

    return VAR_1;
}
