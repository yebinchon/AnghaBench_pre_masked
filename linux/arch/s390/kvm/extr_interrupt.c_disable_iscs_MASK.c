
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int* gcr; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm_vcpu *VAR_1,
       unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++)
  if (!(VAR_1->arch.sie_block->gcr[6] & FUNC_1(VAR_3)))
   VAR_2 &= ~(1UL << (FUNC_0(VAR_3)));

 return VAR_2;
}
