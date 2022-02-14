
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 scalar_t__ FUNC_2 (struct kvm_lapic*,int) ;
 int FUNC_3 (struct kvm_lapic*,int ) ;

__attribute__((used)) static bool FUNC_4(struct kvm_lapic *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (FUNC_2(VAR_2, VAR_3))
  return 1;

 VAR_4 = FUNC_3(VAR_2, VAR_1);

 if (FUNC_1(VAR_2))
  return ((VAR_4 >> 16) == (VAR_3 >> 16))
         && (VAR_4 & VAR_3 & 0xffff) != 0;

 VAR_4 = FUNC_0(VAR_4);

 switch (FUNC_3(VAR_2, VAR_0)) {
 case 128:
  return (VAR_4 & VAR_3) != 0;
 case 129:
  return ((VAR_4 >> 4) == (VAR_3 >> 4))
         && (VAR_4 & VAR_3 & 0xf) != 0;
 default:
  return 0;
 }
}
