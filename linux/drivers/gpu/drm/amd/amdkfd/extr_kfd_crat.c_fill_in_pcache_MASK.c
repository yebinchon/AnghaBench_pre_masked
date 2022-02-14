
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct kfd_gpu_cache_info {int num_cu_shared; int cache_size; int cache_level; int flags; } ;
struct kfd_cu_info {int dummy; } ;
struct crat_subtype_cache {int length; unsigned int processor_id_low; void** sibling_map; int cache_size; int cache_level; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct crat_subtype_cache*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct crat_subtype_cache *VAR_2,
    struct kfd_gpu_cache_info *VAR_3,
    struct kfd_cu_info *VAR_4,
    int VAR_5,
    int VAR_6,
    int VAR_7, unsigned int VAR_8,
    int VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;


 if (sizeof(struct crat_subtype_cache) > VAR_5)
  return -VAR_1;

 VAR_10 = VAR_6;
 VAR_10 >>= VAR_9;
 VAR_10 &=
  ((1 << VAR_3[VAR_7].num_cu_shared) - 1);
 VAR_11 = FUNC_0(VAR_10);





 if (VAR_11) {
  FUNC_1(VAR_2, 0, sizeof(struct crat_subtype_cache));
  VAR_2->type = VAR_0;
  VAR_2->length = sizeof(struct crat_subtype_cache);
  VAR_2->flags = VAR_3[VAR_7].flags;
  VAR_2->processor_id_low = VAR_8
      + (VAR_11 - 1);
  VAR_2->cache_level = VAR_3[VAR_7].cache_level;
  VAR_2->cache_size = VAR_3[VAR_7].cache_size;




  VAR_10 =
   VAR_10 >> (VAR_11 - 1);

  VAR_2->sibling_map[0] = (uint8_t)(VAR_10 & 0xFF);
  VAR_2->sibling_map[1] =
    (uint8_t)((VAR_10 >> 8) & 0xFF);
  VAR_2->sibling_map[2] =
    (uint8_t)((VAR_10 >> 16) & 0xFF);
  VAR_2->sibling_map[3] =
    (uint8_t)((VAR_10 >> 24) & 0xFF);
  return 0;
 }
 return 1;
}
