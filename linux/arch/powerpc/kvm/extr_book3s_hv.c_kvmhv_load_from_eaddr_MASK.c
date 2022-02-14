
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {scalar_t__ nested; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ,void*,int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, ulong *VAR_3, void *VAR_4,
     int VAR_5)
{
 int VAR_6 = -VAR_1;

 if (FUNC_1(VAR_2)) {
  VAR_6 = FUNC_0(VAR_2, *VAR_3, VAR_4, VAR_5);

  if (VAR_6 > 0)
   VAR_6 = -VAR_1;
 }


 if (VAR_6 && VAR_2->arch.nested)
  VAR_6 = -VAR_0;

 return VAR_6;
}
