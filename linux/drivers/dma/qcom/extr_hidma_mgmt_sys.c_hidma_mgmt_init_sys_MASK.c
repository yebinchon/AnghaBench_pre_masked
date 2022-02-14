
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct hidma_mgmt_dev {int dma_channels; void** chroots; TYPE_1__* pdev; } ;
typedef int name ;
struct TYPE_7__ {struct kobject kobj; } ;
struct TYPE_6__ {int mode; int name; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hidma_mgmt_dev*,int ,int ) ;
 int FUNC_2 (struct hidma_mgmt_dev*,char*,int,unsigned int,void*) ;
 void** FUNC_3 (TYPE_3__*,int,int ) ;
 TYPE_2__* VAR_4 ;
 void* FUNC_4 (char*,struct kobject*) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;

int FUNC_6(struct hidma_mgmt_dev *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 int VAR_8;
 struct kobject *VAR_9;

 VAR_8 = sizeof(*VAR_5->chroots) * VAR_5->dma_channels;
 VAR_5->chroots = FUNC_3(&VAR_5->pdev->dev, VAR_8, VAR_1);
 if (!VAR_5->chroots)
  return -VAR_0;

 VAR_9 = FUNC_4("chanops", &VAR_5->pdev->dev.kobj);
 if (!VAR_9)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_5->dma_channels; VAR_6++) {
  char VAR_10[20];

  FUNC_5(VAR_10, sizeof(VAR_10), "chan%d", VAR_6);
  VAR_5->chroots[VAR_6] = FUNC_4(VAR_10, VAR_9);
  if (!VAR_5->chroots[VAR_6])
   return -VAR_0;
 }


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  VAR_7 = FUNC_1(VAR_5, VAR_4[VAR_6].name,
     VAR_4[VAR_6].mode);
  if (VAR_7)
   return VAR_7;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5->dma_channels; VAR_6++) {
  VAR_7 = FUNC_2(VAR_5, "priority",
      (VAR_2 | VAR_3), VAR_6,
      VAR_5->chroots[VAR_6]);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_5, "weight",
      (VAR_2 | VAR_3), VAR_6,
      VAR_5->chroots[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
