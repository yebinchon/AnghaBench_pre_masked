
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*,int) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (struct kvm_lapic*) ;

__attribute__((used)) static bool FUNC_4(struct kvm_lapic *VAR_0, u32 VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 if (FUNC_0(VAR_0))
  return VAR_1 == FUNC_2(VAR_0);







 if (FUNC_2(VAR_0) > 0xff && VAR_1 == FUNC_2(VAR_0))
  return 1;

 return VAR_1 == FUNC_3(VAR_0);
}
