
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_irq_level {int level; int irq; int status; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*,int ,int ,int ,int) ;

int FUNC_2(struct kvm *VAR_2, struct kvm_irq_level *VAR_3,
     bool VAR_4)
{
 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_3->status = FUNC_1(VAR_2, VAR_1,
     VAR_3->irq, VAR_3->level,
     VAR_4);
 return 0;
}
