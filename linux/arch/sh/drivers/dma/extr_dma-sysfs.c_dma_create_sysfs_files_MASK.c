
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_info {TYPE_1__* pdev; } ;
struct device {int kobj; int * bus; int id; } ;
struct dma_channel {int chan; int vchan; struct device dev; } ;
typedef int name ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*) ;
 int VAR_5 ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,int *,char*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct dma_channel *VAR_6, struct dma_info *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 char VAR_9[16];
 int VAR_10;

 VAR_8->id = VAR_6->vchan;
 VAR_8->bus = &VAR_5;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 |= FUNC_1(VAR_8, &VAR_2);
 VAR_10 |= FUNC_1(VAR_8, &VAR_1);
 VAR_10 |= FUNC_1(VAR_8, &VAR_4);
 VAR_10 |= FUNC_1(VAR_8, &VAR_3);
 VAR_10 |= FUNC_1(VAR_8, &VAR_0);

 if (FUNC_5(VAR_10)) {
  FUNC_0(&VAR_7->pdev->dev, "Failed creating attrs\n");
  return VAR_10;
 }

 FUNC_3(VAR_9, sizeof(VAR_9), "dma%d", VAR_6->chan);
 return FUNC_4(&VAR_7->pdev->dev.kobj, &VAR_8->kobj, VAR_9);
}
