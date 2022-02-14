
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int nr_hw_wp; TYPE_2__* hw_wp_info; } ;
struct TYPE_8__ {TYPE_3__ guestdbg; TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_6__ {unsigned long addr; unsigned long len; } ;
struct TYPE_5__ {int* gcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 u64 *VAR_5 = &VAR_2->arch.sie_block->gcr[9];
 u64 *VAR_6 = &VAR_2->arch.sie_block->gcr[10];
 u64 *VAR_7 = &VAR_2->arch.sie_block->gcr[11];
 int VAR_8;

 if (VAR_2->arch.guestdbg.nr_hw_wp <= 0 ||
     VAR_2->arch.guestdbg.hw_wp_info == ((void*)0))
  return;



 if (*VAR_5 & VAR_1 && *VAR_5 & VAR_0) {
  *VAR_5 &= ~VAR_0;
  *VAR_6 = 0;
  *VAR_7 = -1UL;
 } else {
  *VAR_5 &= ~VAR_0;
  *VAR_5 |= VAR_1;

  for (VAR_8 = 0; VAR_8 < VAR_2->arch.guestdbg.nr_hw_wp; VAR_8++) {
   VAR_3 = VAR_2->arch.guestdbg.hw_wp_info[VAR_8].addr;
   VAR_4 = VAR_2->arch.guestdbg.hw_wp_info[VAR_8].len;

   FUNC_0(VAR_6, VAR_7, VAR_3, VAR_4);
  }
 }
}
