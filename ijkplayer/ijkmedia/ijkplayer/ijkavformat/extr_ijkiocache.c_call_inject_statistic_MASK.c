
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int logical_file_size; int cache_count_bytes; scalar_t__ cache_file_pos; scalar_t__ cache_file_forwards; int cache_physical_pos; int member_0; } ;
struct TYPE_7__ {scalar_t__ ijkio_app_ctx; int logical_size; int * cache_count_bytes; scalar_t__ file_logical_pos; scalar_t__ read_logical_pos; int cache_physical_pos; } ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ IjkURLContext ;
typedef TYPE_2__ IjkIOCacheContext ;
typedef TYPE_3__ IjkIOAppCacheStatistic ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(IjkURLContext *VAR_0)
{
    IjkIOCacheContext *VAR_1 = VAR_0->priv_data;

    if (VAR_1->ijkio_app_ctx) {
        IjkIOAppCacheStatistic VAR_2 = {0};
        VAR_2.cache_physical_pos = VAR_1->cache_physical_pos;
        VAR_2.cache_file_forwards = VAR_1->file_logical_pos - VAR_1->read_logical_pos;
        VAR_2.cache_file_pos = VAR_1->file_logical_pos;
        VAR_2.cache_count_bytes = *VAR_1->cache_count_bytes;
        VAR_2.logical_file_size = VAR_1->logical_size;
        FUNC_0(VAR_1->ijkio_app_ctx, &VAR_2);
    }
}
