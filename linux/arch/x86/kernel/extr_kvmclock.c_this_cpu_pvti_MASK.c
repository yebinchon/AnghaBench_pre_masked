
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvclock_vcpu_time_info {int dummy; } ;
struct TYPE_2__ {struct pvclock_vcpu_time_info pvti; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline struct pvclock_vcpu_time_info *FUNC_1(void)
{
 return &FUNC_0(VAR_0)->pvti;
}
