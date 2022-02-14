
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int pgd; } ;


 long VAR_0 ;
 long VAR_1 ;
 TYPE_2__* VAR_2 ;
 long FUNC_0 (struct kvm*,unsigned long,long,unsigned long,unsigned long,int ,int,unsigned long*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static long FUNC_4(struct kvm *VAR_3, unsigned long VAR_4,
    long VAR_5, unsigned long VAR_6,
    unsigned long VAR_7, unsigned long *VAR_8)
{
 long VAR_9;


 FUNC_2();
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_2->mm->pgd, 0, VAR_8);
 FUNC_3();
 if (VAR_9 == VAR_1) {

  FUNC_1("KVM: Oops, kvmppc_h_enter returned too hard!\n");
  VAR_9 = VAR_0;
 }
 return VAR_9;

}
