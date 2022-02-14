
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* run; } ;
struct TYPE_5__ {int addr; int mask; } ;
typedef TYPE_2__ psw_t ;
struct TYPE_4__ {int psw_addr; int psw_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1, psw_t VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_0(VAR_1))
  VAR_3 = -VAR_0;
 else {
  VAR_1->run->psw_mask = VAR_2.mask;
  VAR_1->run->psw_addr = VAR_2.addr;
 }
 return VAR_3;
}
