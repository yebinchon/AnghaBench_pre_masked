
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kvm*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct kvm *VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_4 & VAR_1);

 VAR_4 &= VAR_2;
 VAR_4 &= ~((u64)VAR_0 - 1);





 if (FUNC_3(VAR_4 == 0)) {
  FUNC_1("kvm: zapping shadow pages for mmio generation wraparound\n");
  FUNC_2(VAR_3);
 }
}
