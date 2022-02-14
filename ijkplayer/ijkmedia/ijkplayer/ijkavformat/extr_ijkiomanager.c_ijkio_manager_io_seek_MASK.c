
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {scalar_t__ cur_ffmpeg_ctx; int ijk_ctx_map; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_1__* prot; } ;
struct TYPE_8__ {scalar_t__ (* url_seek ) (TYPE_2__*,scalar_t__,int) ;scalar_t__ (* url_resume ) (TYPE_2__*) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOManagerContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int) ;

int64_t FUNC_3(IjkIOManagerContext *VAR_3, int64_t VAR_4, int VAR_5) {
    int64_t VAR_6 = -1;

    if (!VAR_3)
        return VAR_6;

    IjkURLContext *VAR_7 = FUNC_0(VAR_3->ijk_ctx_map, (int64_t)(intptr_t)VAR_3->cur_ffmpeg_ctx);
    if (VAR_7 && VAR_7->prot && VAR_7->prot->url_seek) {
        if (VAR_7->state == VAR_1) {
            if (VAR_7->prot->url_resume) {
                VAR_6 = (int64_t)VAR_7->prot->url_resume(VAR_7);
                if (VAR_6 < 0) {
                    return VAR_6;
                }
            }
            VAR_7->state = VAR_2;
        }
        VAR_6 = VAR_7->prot->url_seek(VAR_7, VAR_4, VAR_5 & ~VAR_0);
    }

    return VAR_6;
}
