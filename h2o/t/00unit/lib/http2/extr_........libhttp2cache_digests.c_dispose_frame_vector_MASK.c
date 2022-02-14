
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_3__* entries; } ;
typedef TYPE_2__ h2o_cache_digests_frame_vector_t ;
struct TYPE_5__ {TYPE_3__* entries; } ;
struct TYPE_7__ {TYPE_1__ keys; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(h2o_cache_digests_frame_vector_t *VAR_0)
{
    size_t VAR_1;
    for (VAR_1 = 0; VAR_1 != VAR_0->size; ++VAR_1)
        FUNC_0(VAR_0->entries[VAR_1].keys.entries);
    FUNC_0(VAR_0->entries);
}
