
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xive {int dummy; } ;
struct kvm_device {scalar_t__ private; } ;


 int FUNC_0 (struct kvmppc_xive*) ;

__attribute__((used)) static void FUNC_1(struct kvm_device *VAR_0)
{
 struct kvmppc_xive *VAR_1 = (struct kvmppc_xive *)VAR_0->private;


 FUNC_0(VAR_1);
}
