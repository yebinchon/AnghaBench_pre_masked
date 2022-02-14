
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xics {int dummy; } ;
struct kvm_device {scalar_t__ private; } ;


 int FUNC_0 (struct kvmppc_xics*) ;

__attribute__((used)) static void FUNC_1(struct kvm_device *VAR_0)
{
 struct kvmppc_xics *VAR_1 = (struct kvmppc_xics *)VAR_0->private;

 FUNC_0(VAR_1);
}
