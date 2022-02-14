
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int,int,void*) ;
 int FUNC_1 (struct kvm_vcpu*,int *,int,int,void*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int,void*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_2, gpa_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 do {
  VAR_7 = FUNC_3(VAR_4, 8);
  if (!(FUNC_2(VAR_2) &&
        !FUNC_1(VAR_2, &VAR_2->arch.apic->dev,
      VAR_3, VAR_7, VAR_5))
      && FUNC_0(VAR_2, VAR_0, VAR_3, VAR_7, VAR_5))
   break;
  FUNC_4(VAR_1, VAR_7, VAR_3, VAR_5);
  VAR_6 += VAR_7;
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
  VAR_5 += VAR_7;
 } while (VAR_4);

 return VAR_6;
}
