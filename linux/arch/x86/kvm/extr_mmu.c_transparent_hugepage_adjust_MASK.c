
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef unsigned long kvm_pfn_t ;
typedef unsigned long gfn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (struct kvm_vcpu*,unsigned long,int) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static void FUNC_10(struct kvm_vcpu *VAR_2,
     gfn_t VAR_3, kvm_pfn_t *VAR_4,
     int *VAR_5)
{
 kvm_pfn_t VAR_6 = *VAR_4;
 int VAR_7 = *VAR_5;







 if (!FUNC_3(VAR_6) && !FUNC_5(VAR_6) &&
     !FUNC_6(VAR_6) && VAR_7 == VAR_1 &&
     FUNC_1(FUNC_9(VAR_6)) &&
     !FUNC_8(VAR_2, VAR_3, VAR_0)) {
  unsigned long VAR_8;
  *VAR_5 = VAR_7 = VAR_0;
  VAR_8 = FUNC_0(VAR_7) - 1;
  FUNC_2((VAR_3 & VAR_8) != (VAR_6 & VAR_8));
  if (VAR_6 & VAR_8) {
   FUNC_7(VAR_6);
   VAR_6 &= ~VAR_8;
   FUNC_4(VAR_6);
   *VAR_4 = VAR_6;
  }
 }
}
