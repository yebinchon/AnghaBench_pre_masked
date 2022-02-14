
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct task_struct {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int * ops; } ;
struct pasid_state {int pasid; int invalid; TYPE_1__ mn; struct mm_struct* mm; struct device_state* device_state; int lock; int wq; int count; } ;
struct mm_struct {int pgd; } ;
struct device_state {int max_pasids; int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct device_state*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pasid_state*) ;
 struct device_state* FUNC_7 (int ) ;
 struct mm_struct* FUNC_8 (struct task_struct*) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 struct pasid_state* FUNC_10 (int,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct mm_struct*) ;
 int FUNC_13 (TYPE_1__*,struct mm_struct*) ;
 int FUNC_14 (TYPE_1__*,struct mm_struct*) ;
 int FUNC_15 (struct device_state*) ;
 int FUNC_16 (struct device_state*,struct pasid_state*,int) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct pci_dev *VAR_5, int VAR_6,
    struct task_struct *VAR_7)
{
 struct pasid_state *VAR_8;
 struct device_state *VAR_9;
 struct mm_struct *VAR_10;
 u16 VAR_11;
 int VAR_12;

 FUNC_11();

 if (!FUNC_2())
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_5);
 VAR_9 = FUNC_7(VAR_11);

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_12 = -VAR_0;
 if (VAR_6 < 0 || VAR_6 >= VAR_9->max_pasids)
  goto out;

 VAR_12 = -VAR_2;
 VAR_8 = FUNC_10(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0))
  goto out;


 FUNC_3(&VAR_8->count, 1);
 FUNC_9(&VAR_8->wq);
 FUNC_17(&VAR_8->lock);

 VAR_10 = FUNC_8(VAR_7);
 VAR_8->mm = VAR_10;
 VAR_8->device_state = VAR_9;
 VAR_8->pasid = VAR_6;
 VAR_8->invalid = 1;

 VAR_8->mn.ops = &VAR_4;

 if (VAR_8->mm == ((void*)0))
  goto out_free;

 FUNC_13(&VAR_8->mn, VAR_10);

 VAR_12 = FUNC_16(VAR_9, VAR_8, VAR_6);
 if (VAR_12)
  goto out_unregister;

 VAR_12 = FUNC_1(VAR_9->domain, VAR_6,
     FUNC_0(VAR_8->mm->pgd));
 if (VAR_12)
  goto out_clear_state;


 VAR_8->invalid = 0;






 FUNC_12(VAR_10);

 return 0;

out_clear_state:
 FUNC_4(VAR_9, VAR_6);

out_unregister:
 FUNC_14(&VAR_8->mn, VAR_10);
 FUNC_12(VAR_10);

out_free:
 FUNC_6(VAR_8);

out:
 FUNC_15(VAR_9);

 return VAR_12;
}
