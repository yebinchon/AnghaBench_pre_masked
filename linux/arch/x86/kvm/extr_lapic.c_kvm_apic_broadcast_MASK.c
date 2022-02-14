
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_lapic {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_lapic *VAR_2, u32 VAR_3)
{
 return VAR_3 == (FUNC_0(VAR_2) ?
   VAR_1 : VAR_0);
}
