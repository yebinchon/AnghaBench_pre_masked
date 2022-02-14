
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct kvm_s390_sie_block {int ecd; int epdx; scalar_t__ epoch; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_s390_sie_block *VAR_1, u64 VAR_2)
{
 u8 VAR_3 = 0;





 VAR_2 = -VAR_2;


 if ((s64)VAR_2 < 0)
  VAR_3 = -1;

 VAR_1->epoch += VAR_2;
 if (VAR_1->ecd & VAR_0) {
  VAR_1->epdx += VAR_3;
  if (VAR_1->epoch < VAR_2)
   VAR_1->epdx += 1;
 }
}
