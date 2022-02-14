
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct etm_drvdata {scalar_t__ base; TYPE_1__* csdev; scalar_t__ use_cp14; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct etm_drvdata *VAR_0,
         u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->use_cp14) {
  if (FUNC_1(VAR_2, VAR_1)) {
   FUNC_0(&VAR_0->csdev->dev,
    "invalid CP14 access to ETM reg: %#x", VAR_2);
  }
 } else {
  FUNC_2(VAR_1, VAR_0->base + VAR_2);
 }
}
