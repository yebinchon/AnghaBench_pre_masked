
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct skd_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct skd_device*,int ) ;
 int FUNC_1 (struct skd_device*,scalar_t__,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct skd_device *VAR_6)
{
 u32 VAR_7;


 VAR_7 = VAR_4 +
       VAR_3 + VAR_5;



 FUNC_1(VAR_6, ~VAR_7, VAR_2);
 FUNC_2(&VAR_6->pdev->dev, "interrupt mask=0x%x\n", ~VAR_7);

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 VAR_7 |= VAR_1;
 FUNC_2(&VAR_6->pdev->dev, "control=0x%x\n", VAR_7);
 FUNC_1(VAR_6, VAR_7, VAR_0);
}
