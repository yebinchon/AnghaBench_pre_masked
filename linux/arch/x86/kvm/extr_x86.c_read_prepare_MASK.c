
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {scalar_t__ mmio_read_completed; TYPE_1__* mmio_fragments; } ;
struct TYPE_2__ {int gpa; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,void*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1, void *VAR_2, int VAR_3)
{
 if (VAR_1->mmio_read_completed) {
  FUNC_0(VAR_0, VAR_3,
          VAR_1->mmio_fragments[0].gpa, VAR_2);
  VAR_1->mmio_read_completed = 0;
  return 1;
 }

 return 0;
}
