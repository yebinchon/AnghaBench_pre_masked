
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int nr_hw_bp; TYPE_2__* hw_bp_info; } ;
struct TYPE_8__ {TYPE_3__ guestdbg; TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_6__ {unsigned long addr; unsigned long len; } ;
struct TYPE_5__ {int* gcr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 u64 *VAR_7 = &VAR_4->arch.sie_block->gcr[9];
 u64 *VAR_8 = &VAR_4->arch.sie_block->gcr[10];
 u64 *VAR_9 = &VAR_4->arch.sie_block->gcr[11];
 int VAR_10;

 if (VAR_4->arch.guestdbg.nr_hw_bp <= 0 ||
     VAR_4->arch.guestdbg.hw_bp_info == ((void*)0))
  return;





 if (!(*VAR_7 & VAR_2))
  *VAR_7 |= VAR_1;
 *VAR_7 |= VAR_3 | VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_4->arch.guestdbg.nr_hw_bp; VAR_10++) {
  VAR_5 = VAR_4->arch.guestdbg.hw_bp_info[VAR_10].addr;
  VAR_6 = VAR_4->arch.guestdbg.hw_bp_info[VAR_10].len;





  if (VAR_5 < VAR_0) {
   VAR_6 += VAR_5;
   VAR_5 = 0;
  } else {
   VAR_5 -= VAR_0;
   VAR_6 += VAR_0;
  }

  FUNC_0(VAR_8, VAR_9, VAR_5, VAR_6);
 }
}
