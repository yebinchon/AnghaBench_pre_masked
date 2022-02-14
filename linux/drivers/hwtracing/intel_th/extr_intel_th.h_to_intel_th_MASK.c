
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct intel_th_device {scalar_t__ type; TYPE_1__ dev; } ;
struct intel_th {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct intel_th* FUNC_1 (int ) ;
 struct intel_th_device* FUNC_2 (struct intel_th_device*) ;

__attribute__((used)) static inline struct intel_th *FUNC_3(struct intel_th_device *VAR_1)
{
 if (VAR_1->type == VAR_0)
  VAR_1 = FUNC_2(VAR_1);

 if (FUNC_0(!VAR_1 || VAR_1->type == VAR_0))
  return ((void*)0);

 return FUNC_1(VAR_1->dev.parent);
}
