
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgd; } ;
struct TYPE_4__ {TYPE_1__ gpa_mm; } ;
struct kvm {TYPE_2__ arch; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

int FUNC_1(struct kvm *VAR_1, gfn_t VAR_2, gfn_t VAR_3)
{
 return FUNC_0(VAR_1->arch.gpa_mm.pgd,
        VAR_2 << VAR_0,
        VAR_3 << VAR_0);
}
