
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_info {TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct dma_channel {int chan; struct device dev; } ;
typedef int name ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(struct dma_channel *VAR_5, struct dma_info *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 char VAR_8[16];

 FUNC_0(VAR_7, &VAR_2);
 FUNC_0(VAR_7, &VAR_1);
 FUNC_0(VAR_7, &VAR_4);
 FUNC_0(VAR_7, &VAR_3);
 FUNC_0(VAR_7, &VAR_0);

 FUNC_2(VAR_8, sizeof(VAR_8), "dma%d", VAR_5->chan);
 FUNC_3(&VAR_6->pdev->dev.kobj, VAR_8);

 FUNC_1(VAR_7);
}
