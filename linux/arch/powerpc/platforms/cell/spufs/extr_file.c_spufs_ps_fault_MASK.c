
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; int address; TYPE_3__* vma; } ;
struct spu_context {scalar_t__ state; TYPE_4__* spu; int run_wq; } ;
struct TYPE_11__ {TYPE_2__* mm; } ;
struct TYPE_10__ {unsigned long problem_phys; } ;
struct TYPE_9__ {TYPE_1__* vm_file; } ;
struct TYPE_8__ {int mmap_sem; } ;
struct TYPE_7__ {struct spu_context* private_data; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;
 scalar_t__ FUNC_4 (struct spu_context*) ;
 int FUNC_5 (int ,struct spu_context*) ;
 int FUNC_6 (int ,struct spu_context*,TYPE_4__*) ;
 int FUNC_7 (struct spu_context*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int ,unsigned long) ;

__attribute__((used)) static vm_fault_t FUNC_11(struct vm_fault *VAR_10,
        unsigned long VAR_11,
        unsigned long VAR_12)
{
 struct spu_context *VAR_13 = VAR_10->vma->vm_file->private_data;
 unsigned long VAR_14, VAR_15 = VAR_10->pgoff << VAR_0;
 int VAR_16 = 0;
 vm_fault_t VAR_17 = VAR_3;

 FUNC_5(VAR_6, VAR_13);

 if (VAR_15 >= VAR_12)
  return VAR_4;

 if (FUNC_1(VAR_5))
  return VAR_4;






 FUNC_2(VAR_13);
 if (FUNC_4(VAR_13))
  goto refault;

 if (VAR_13->state == VAR_2) {
  FUNC_9(&VAR_5->mm->mmap_sem);
  FUNC_5(VAR_8, VAR_13);
  VAR_16 = FUNC_8(VAR_13->run_wq, VAR_13->state == VAR_1);
  FUNC_6(VAR_9, VAR_13, VAR_13->spu);
  FUNC_0(&VAR_5->mm->mmap_sem);
 } else {
  VAR_14 = VAR_13->spu->problem_phys + VAR_11;
  VAR_17 = FUNC_10(VAR_10->vma, VAR_10->address,
    (VAR_14 + VAR_15) >> VAR_0);
  FUNC_6(VAR_7, VAR_13, VAR_13->spu);
 }

 if (!VAR_16)
  FUNC_7(VAR_13);

refault:
 FUNC_3(VAR_13);
 return VAR_17;
}
