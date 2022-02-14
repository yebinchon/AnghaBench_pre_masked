
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gmap; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gpa_t ;


 int VAR_0 ;
 long FUNC_0 (int ,int ,int ) ;

long FUNC_1(struct kvm_vcpu *VAR_1, gpa_t VAR_2, int VAR_3)
{
 return FUNC_0(VAR_1->arch.gmap, VAR_2,
     VAR_3 ? VAR_0 : 0);
}
