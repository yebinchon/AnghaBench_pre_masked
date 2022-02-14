
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ttm_mem_zone {scalar_t__ emer_mem; scalar_t__ max_mem; scalar_t__ used_mem; } ;
struct ttm_mem_global {unsigned int num_zones; int lock; struct ttm_mem_zone** zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_mem_global*) ;

__attribute__((used)) static int FUNC_4(struct ttm_mem_global *VAR_2,
      struct ttm_mem_zone *VAR_3,
      uint64_t VAR_4, bool VAR_5)
{
 uint64_t VAR_6;
 int VAR_7 = -VAR_1;
 unsigned int VAR_8;
 struct ttm_mem_zone *VAR_9;

 FUNC_1(&VAR_2->lock);
 for (VAR_8 = 0; VAR_8 < VAR_2->num_zones; ++VAR_8) {
  VAR_9 = VAR_2->zones[VAR_8];
  if (VAR_3 && VAR_9 != VAR_3)
   continue;

  VAR_6 = (FUNC_0(VAR_0)) ?
   VAR_9->emer_mem : VAR_9->max_mem;

  if (VAR_9->used_mem > VAR_6)
   goto out_unlock;
 }

 if (VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_2->num_zones; ++VAR_8) {
   VAR_9 = VAR_2->zones[VAR_8];
   if (VAR_3 && VAR_9 != VAR_3)
    continue;
   VAR_9->used_mem += VAR_4;
  }
 }

 VAR_7 = 0;
out_unlock:
 FUNC_2(&VAR_2->lock);
 FUNC_3(VAR_2);

 return VAR_7;
}
