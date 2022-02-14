
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int dummy; } ;






 unsigned int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (struct kvm_lapic*,unsigned int) ;
 int FUNC_4 (struct kvm_lapic*,int) ;

__attribute__((used)) static u32 FUNC_5(struct kvm_lapic *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = 0;

 if (VAR_2 >= VAR_0)
  return 0;

 switch (VAR_2) {
 case 131:
  break;

 case 128:
  if (FUNC_1(VAR_1))
   return 0;

  VAR_3 = FUNC_0(VAR_1);
  break;
 case 130:
  FUNC_2(VAR_1);
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_4(VAR_1, 0);

 default:
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;
 }

 return VAR_3;
}
