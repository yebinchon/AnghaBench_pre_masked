
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etb_drvdata {scalar_t__ base; TYPE_1__* csdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct etb_drvdata *VAR_7)
{
 u32 VAR_8;
 struct device *VAR_9 = &VAR_7->csdev->dev;

 FUNC_1(VAR_7->base);

 VAR_8 = FUNC_4(VAR_7->base + VAR_1);

 VAR_8 |= VAR_4;
 FUNC_5(VAR_8, VAR_7->base + VAR_1);

 VAR_8 |= VAR_3;
 FUNC_5(VAR_8, VAR_7->base + VAR_1);

 if (FUNC_2(VAR_7->base, VAR_1, VAR_2, 0)) {
  FUNC_3(VAR_9,
  "timeout while waiting for completion of Manual Flush\n");
 }


 FUNC_5(0x0, VAR_7->base + VAR_0);

 if (FUNC_2(VAR_7->base, VAR_5, VAR_6, 1)) {
  FUNC_3(VAR_9,
   "timeout while waiting for Formatter to Stop\n");
 }

 FUNC_0(VAR_7->base);
}
