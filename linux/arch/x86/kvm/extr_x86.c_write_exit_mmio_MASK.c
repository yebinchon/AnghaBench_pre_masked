
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* run; struct kvm_mmio_fragment* mmio_fragments; } ;
struct kvm_mmio_fragment {int len; int data; } ;
typedef int gpa_t ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ mmio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1, gpa_t VAR_2,
      void *VAR_3, int VAR_4)
{
 struct kvm_mmio_fragment *VAR_5 = &VAR_1->mmio_fragments[0];

 FUNC_0(VAR_1->run->mmio.data, VAR_5->data, FUNC_1(8u, VAR_5->len));
 return VAR_0;
}
