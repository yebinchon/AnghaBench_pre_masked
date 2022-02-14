
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hidma_mgmt_dev {TYPE_1__* pdev; } ;
struct TYPE_4__ {char* name; int mode; } ;
struct device_attribute {TYPE_2__ attr; int store; int show; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct device_attribute*) ;
 struct device_attribute* FUNC_1 (int *,int,int ) ;
 char* FUNC_2 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct hidma_mgmt_dev *VAR_4, char *VAR_5, int VAR_6)
{
 struct device_attribute *VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_1(&VAR_4->pdev->dev,
        sizeof(struct device_attribute), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(&VAR_4->pdev->dev, VAR_5, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->attr.name = VAR_8;
 VAR_7->attr.mode = VAR_6;
 VAR_7->show = VAR_3;
 VAR_7->store = VAR_2;
 FUNC_3(&VAR_7->attr);

 return FUNC_0(&VAR_4->pdev->dev, VAR_7);
}
