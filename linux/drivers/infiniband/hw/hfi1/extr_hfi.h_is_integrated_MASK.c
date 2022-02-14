
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct hfi1_devdata *VAR_1)
{
 return VAR_1->pcidev->device == VAR_0;
}
