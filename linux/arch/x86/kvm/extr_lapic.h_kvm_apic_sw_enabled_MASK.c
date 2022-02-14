
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_lapic {int sw_enabled; } ;
struct TYPE_2__ {int key; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_lapic *VAR_1)
{
 if (FUNC_0(&VAR_0.key))
  return VAR_1->sw_enabled;
 return 1;
}
