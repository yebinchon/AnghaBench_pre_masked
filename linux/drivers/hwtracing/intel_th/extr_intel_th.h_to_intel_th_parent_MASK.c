
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct intel_th_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct intel_th_device* FUNC_0 (struct device*) ;

__attribute__((used)) static inline struct intel_th_device *
FUNC_1(struct intel_th_device *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev.parent;

 if (!VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_1);
}
