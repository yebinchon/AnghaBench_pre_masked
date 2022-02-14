
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gpa_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int,int,void const*) ;
 int FUNC_1 (struct kvm_vcpu*,int *,int,int,void const*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1, gpa_t VAR_2, int VAR_3,
      const void *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 do {
  VAR_6 = FUNC_3(VAR_3, 8);
  if (!(FUNC_2(VAR_1) &&
        !FUNC_1(VAR_1, &VAR_1->arch.apic->dev, VAR_2, VAR_6, VAR_4))
      && FUNC_0(VAR_1, VAR_0, VAR_2, VAR_6, VAR_4))
   break;
  VAR_5 += VAR_6;
  VAR_2 += VAR_6;
  VAR_3 -= VAR_6;
  VAR_4 += VAR_6;
 } while (VAR_3);

 return VAR_5;
}
