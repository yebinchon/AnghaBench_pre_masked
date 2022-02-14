
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ size; TYPE_3__* entries; } ;
typedef TYPE_2__ h2o_cache_digests_frame_vector_t ;
struct TYPE_5__ {int size; int * entries; } ;
struct TYPE_7__ {int capacity_bits; TYPE_1__ keys; } ;
typedef TYPE_3__ h2o_cache_digests_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int*,int *,int ,int,int ) ;
 int FUNC_1 (char const*,size_t,char const*,size_t) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(h2o_cache_digests_frame_vector_t *VAR_5, const char *VAR_6, size_t VAR_7, const char *VAR_8, size_t VAR_9,
                  int VAR_10, int VAR_11)
{
    if (VAR_5->size != 0) {
        uint64_t VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
        size_t VAR_13 = 0;
        do {
            h2o_cache_digests_frame_t *VAR_14 = VAR_5->entries + VAR_13;
            uint64_t VAR_15 = VAR_12 >> (64 - VAR_14->capacity_bits);
            if (VAR_14->keys.entries != ((void*)0) &&
                FUNC_0(&VAR_15, VAR_14->keys.entries, VAR_14->keys.size, sizeof(VAR_14->keys.entries[0]), VAR_4) != ((void*)0))
                return VAR_10 ? VAR_0 : VAR_2;
        } while (++VAR_13 != VAR_5->size);
    }

    return VAR_11 ? VAR_1 : VAR_3;
}
