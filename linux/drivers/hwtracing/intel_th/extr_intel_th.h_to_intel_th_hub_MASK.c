
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_th_device {scalar_t__ type; } ;
struct TYPE_2__ {struct intel_th_device* hub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct intel_th_device*) ;
 struct intel_th_device* FUNC_1 (struct intel_th_device*) ;

__attribute__((used)) static inline struct intel_th_device *
FUNC_2(struct intel_th_device *VAR_2)
{
 if (VAR_2->type == VAR_1)
  return VAR_2;
 else if (VAR_2->type == VAR_0)
  return FUNC_1(VAR_2);

 return FUNC_0(VAR_2)->hub;
}
