
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pseudo_lock_region {int line_size; TYPE_2__* r; int cbm; TYPE_3__* d; int size; int cpu; } ;
struct cpu_cacheinfo {int num_leaves; TYPE_1__* info_list; } ;
struct TYPE_6__ {int cpu_mask; } ;
struct TYPE_5__ {scalar_t__ cache_level; } ;
struct TYPE_4__ {scalar_t__ level; int coherency_line_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct cpu_cacheinfo* FUNC_2 (int ) ;
 int FUNC_3 (struct pseudo_lock_region*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_7(struct pseudo_lock_region *VAR_1)
{
 struct cpu_cacheinfo *VAR_2;
 int VAR_3;
 int VAR_4;


 VAR_1->cpu = FUNC_1(&VAR_1->d->cpu_mask);

 if (!FUNC_0(VAR_1->cpu)) {
  FUNC_4("CPU %u associated with cache not online\n",
        VAR_1->cpu);
  VAR_3 = -VAR_0;
  goto out_region;
 }

 VAR_2 = FUNC_2(VAR_1->cpu);

 VAR_1->size = FUNC_6(VAR_1->r, VAR_1->d, VAR_1->cbm);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_leaves; VAR_4++) {
  if (VAR_2->info_list[VAR_4].level == VAR_1->r->cache_level) {
   VAR_1->line_size = VAR_2->info_list[VAR_4].coherency_line_size;
   return 0;
  }
 }

 VAR_3 = -1;
 FUNC_5("Unable to determine cache line size\n");
out_region:
 FUNC_3(VAR_1);
 return VAR_3;
}
