
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_zone {scalar_t__ max_mem; int name; } ;
struct ttm_mem_global {int num_zones; TYPE_1__* zone_kernel; struct ttm_mem_zone** zones; scalar_t__ lower_mem_limit; int kobj; int work; int swap_queue; int lock; } ;
struct sysinfo {int dummy; } ;
struct TYPE_2__ {int max_mem; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,unsigned long long) ;
 int FUNC_5 (struct sysinfo*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ttm_mem_global*,int) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int FUNC_9 (struct ttm_mem_global*) ;
 int FUNC_10 (struct ttm_mem_global*,struct sysinfo*) ;
 int FUNC_11 (struct ttm_mem_global*,struct sysinfo*) ;
 int FUNC_12 (struct ttm_mem_global*,struct sysinfo*) ;
 int FUNC_13 (struct ttm_mem_global*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct ttm_mem_global *VAR_3)
{
 struct sysinfo VAR_4;
 int VAR_5;
 int VAR_6;
 struct ttm_mem_zone *VAR_7;

 FUNC_6(&VAR_3->lock);
 VAR_3->swap_queue = FUNC_1("ttm_swap");
 FUNC_0(&VAR_3->work, VAR_2);
 VAR_5 = FUNC_2(
  &VAR_3->kobj, &VAR_1, FUNC_8(), "memory_accounting");
 if (FUNC_14(VAR_5 != 0)) {
  FUNC_3(&VAR_3->kobj);
  return VAR_5;
 }

 FUNC_5(&VAR_4);


 VAR_3->lower_mem_limit = 0;

 VAR_5 = FUNC_12(VAR_3, &VAR_4);
 if (FUNC_14(VAR_5 != 0))
  goto out_no_zone;





 VAR_5 = FUNC_10(VAR_3, &VAR_4);
 if (FUNC_14(VAR_5 != 0))
  goto out_no_zone;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_zones; ++VAR_6) {
  VAR_7 = VAR_3->zones[VAR_6];
  FUNC_4("Zone %7s: Available graphics memory: %llu KiB\n",
   VAR_7->name, (unsigned long long)VAR_7->max_mem >> 10);
 }
 FUNC_13(VAR_3, VAR_3->zone_kernel->max_mem/(2*VAR_0));
 FUNC_7(VAR_3, VAR_3->zone_kernel->max_mem/(2*VAR_0));
 return 0;
out_no_zone:
 FUNC_9(VAR_3);
 return VAR_5;
}
