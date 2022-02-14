
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_flags; int * vm_ops; int vm_page_prot; } ;
struct rdtgroup {struct pseudo_lock_region* plr; } ;
struct pseudo_lock_region {unsigned long size; scalar_t__ kmem; TYPE_1__* d; } ;
struct file {struct rdtgroup* private_data; } ;
struct TYPE_4__ {int cpus_ptr; } ;
struct TYPE_3__ {int cpu_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (scalar_t__,int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 unsigned long VAR_11 = VAR_10->vm_end - VAR_10->vm_start;
 unsigned long VAR_12 = VAR_10->vm_pgoff << VAR_4;
 struct pseudo_lock_region *VAR_13;
 struct rdtgroup *VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;

 FUNC_4(&VAR_8);

 VAR_14 = VAR_9->private_data;
 FUNC_0(!VAR_14);
 if (!VAR_14) {
  FUNC_5(&VAR_8);
  return -VAR_2;
 }

 VAR_13 = VAR_14->plr;

 if (!VAR_13->d) {
  FUNC_5(&VAR_8);
  return -VAR_2;
 }







 if (!FUNC_2(VAR_6->cpus_ptr, &VAR_13->d->cpu_mask)) {
  FUNC_5(&VAR_8);
  return -VAR_1;
 }

 VAR_15 = FUNC_1(VAR_13->kmem) >> VAR_4;
 VAR_16 = VAR_13->size - VAR_12;

 if (VAR_12 > VAR_13->size) {
  FUNC_5(&VAR_8);
  return -VAR_3;
 }





 if (!(VAR_10->vm_flags & VAR_5)) {
  FUNC_5(&VAR_8);
  return -VAR_1;
 }

 if (VAR_11 > VAR_16) {
  FUNC_5(&VAR_8);
  return -VAR_3;
 }

 FUNC_3(VAR_13->kmem + VAR_12, 0, VAR_11);

 if (FUNC_6(VAR_10, VAR_10->vm_start, VAR_15 + VAR_10->vm_pgoff,
       VAR_11, VAR_10->vm_page_prot)) {
  FUNC_5(&VAR_8);
  return -VAR_0;
 }
 VAR_10->vm_ops = &VAR_7;
 FUNC_5(&VAR_8);
 return 0;
}
