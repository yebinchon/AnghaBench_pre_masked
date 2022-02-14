
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int dummy; } ;
struct r5dev {int dummy; } ;
struct r5conf {char** cache_name; int level; size_t active_name; int pool_size; struct kmem_cache* slab_cache; TYPE_1__* mddev; int previous_raid_disks; int raid_disks; } ;
struct kmem_cache {int dummy; } ;
struct TYPE_2__ {scalar_t__ gendisk; } ;


 int VAR_0 ;
 int FUNC_0 (struct r5conf*,int ) ;
 struct kmem_cache* FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_5(struct r5conf *VAR_1, int VAR_2)
{
 struct kmem_cache *VAR_3;
 size_t VAR_4 = sizeof(VAR_1->cache_name[0]);
 int VAR_5 = FUNC_2(VAR_1->raid_disks, VAR_1->previous_raid_disks);

 if (VAR_1->mddev->gendisk)
  FUNC_4(VAR_1->cache_name[0], VAR_4,
   "raid%d-%s", VAR_1->level, FUNC_3(VAR_1->mddev));
 else
  FUNC_4(VAR_1->cache_name[0], VAR_4,
   "raid%d-%p", VAR_1->level, VAR_1->mddev);
 FUNC_4(VAR_1->cache_name[1], VAR_4, "%.27s-alt", VAR_1->cache_name[0]);

 VAR_1->active_name = 0;
 VAR_3 = FUNC_1(VAR_1->cache_name[VAR_1->active_name],
          sizeof(struct stripe_head)+(VAR_5-1)*sizeof(struct r5dev),
          0, 0, ((void*)0));
 if (!VAR_3)
  return 1;
 VAR_1->slab_cache = VAR_3;
 VAR_1->pool_size = VAR_5;
 while (VAR_2--)
  if (!FUNC_0(VAR_1, VAR_0))
   return 1;

 return 0;
}
