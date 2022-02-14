
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rmid; } ;
struct rdtgroup {TYPE_1__ mon; int cpu_mask; } ;
struct TYPE_4__ {scalar_t__ alloc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct rdtgroup*) ;
 int FUNC_4 (char*) ;
 TYPE_2__* VAR_5 ;
 struct rdtgroup VAR_6 ;
 int FUNC_5 (struct rdtgroup*) ;
 scalar_t__ FUNC_6 (struct rdtgroup*) ;
 scalar_t__ FUNC_7 (struct rdtgroup*) ;
 scalar_t__ FUNC_8 (struct rdtgroup*) ;

int FUNC_9(struct rdtgroup *VAR_7)
{
 int VAR_8;





 if (VAR_7 == &VAR_6) {
  FUNC_4("Cannot pseudo-lock default group\n");
  return -VAR_0;
 }
 if (VAR_5[VAR_3].alloc_enabled ||
     VAR_5[VAR_2].alloc_enabled) {
  FUNC_4("CDP enabled\n");
  return -VAR_0;
 }





 VAR_4 = FUNC_2();
 if (VAR_4 == 0) {
  FUNC_4("Pseudo-locking not supported\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_7)) {
  FUNC_4("Monitoring in progress\n");
  return -VAR_0;
 }

 if (FUNC_8(VAR_7)) {
  FUNC_4("Tasks assigned to resource group\n");
  return -VAR_0;
 }

 if (!FUNC_0(&VAR_7->cpu_mask)) {
  FUNC_4("CPUs assigned to resource group\n");
  return -VAR_0;
 }

 if (FUNC_6(VAR_7)) {
  FUNC_4("Unable to modify resctrl permissions\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8) {
  FUNC_4("Unable to init pseudo-lock region\n");
  goto out_release;
 }







 FUNC_1(VAR_7->mon.rmid);

 VAR_8 = 0;
 goto out;

out_release:
 FUNC_5(VAR_7);
out:
 return VAR_8;
}
