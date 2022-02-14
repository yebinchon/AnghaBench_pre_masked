
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct kvm_s390_gisa {int next_alert; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_s390_gisa *VAR_0)
{
 return FUNC_0(VAR_0->next_alert) != (u32)(u64)VAR_0;
}
