
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgd; } ;
struct TYPE_4__ {TYPE_1__ gpa_mm; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 () ;

int FUNC_1(struct kvm *VAR_2, unsigned long VAR_3)
{
 switch (VAR_3) {



 case 129:

  break;
 default:

  return -VAR_0;
 };


 VAR_2->arch.gpa_mm.pgd = FUNC_0();
 if (!VAR_2->arch.gpa_mm.pgd)
  return -VAR_1;

 return 0;
}
