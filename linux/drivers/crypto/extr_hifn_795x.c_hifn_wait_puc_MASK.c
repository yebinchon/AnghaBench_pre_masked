
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hifn_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hifn_device*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hifn_device *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 for (VAR_3 = 10000; VAR_3 > 0; --VAR_3) {
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  if (!(VAR_4 & VAR_1))
   break;

  FUNC_2(1);
 }

 if (!VAR_3)
  FUNC_0(&VAR_2->pdev->dev, "Failed to reset PUC unit.\n");
}
