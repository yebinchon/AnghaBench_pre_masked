
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct etm_drvdata {unsigned int base; TYPE_1__* csdev; scalar_t__ use_cp14; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int*) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct etm_drvdata *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 if (VAR_0->use_cp14) {
  if (FUNC_1(VAR_1, &VAR_2)) {
   FUNC_0(&VAR_0->csdev->dev,
    "invalid CP14 access to ETM reg: %#x", VAR_1);
  }
 } else {
  VAR_2 = FUNC_2(VAR_0->base + VAR_1);
 }

 return VAR_2;
}
