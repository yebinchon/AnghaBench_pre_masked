
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int logical_file_size; int cache_count_bytes; int cache_file_pos; int cache_file_forwards; int cache_physical_pos; } ;
struct TYPE_9__ {TYPE_1__ stat; int ijkio_inject_opaque; } ;
struct TYPE_8__ {int logical_file_size; int cache_count_bytes; int cache_file_pos; int cache_file_forwards; int cache_physical_pos; } ;
struct TYPE_7__ {scalar_t__ opaque; } ;
typedef TYPE_2__ IjkIOApplicationContext ;
typedef TYPE_3__ IjkIOAppCacheStatistic ;
typedef TYPE_4__ FFPlayer ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(IjkIOApplicationContext *VAR_1, int VAR_2 ,void *VAR_3, size_t VAR_4)
{
    if (!VAR_1 || !VAR_1->opaque || !VAR_3)
        return 0;

    FFPlayer *VAR_5 = (FFPlayer *)VAR_1->opaque;
    if (!VAR_5->ijkio_inject_opaque)
        return 0;

    if (VAR_2 == VAR_0 && sizeof(IjkIOAppCacheStatistic) == VAR_4) {
        IjkIOAppCacheStatistic *VAR_6 = (IjkIOAppCacheStatistic *) (intptr_t)VAR_3;
        VAR_5->stat.cache_physical_pos = VAR_6->cache_physical_pos;
        VAR_5->stat.cache_file_forwards = VAR_6->cache_file_forwards;
        VAR_5->stat.cache_file_pos = VAR_6->cache_file_pos;
        VAR_5->stat.cache_count_bytes = VAR_6->cache_count_bytes;
        VAR_5->stat.logical_file_size = VAR_6->logical_file_size;
    }

    return 0;
}
