
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skd_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skd_device*,int ) ;
 int FUNC_1 (struct skd_device*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct skd_device *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 |= (VAR_1);
 FUNC_2(&VAR_2->pdev->dev, "control=0x%x\n", VAR_3);
 FUNC_1(VAR_2, VAR_3, VAR_0);
}
