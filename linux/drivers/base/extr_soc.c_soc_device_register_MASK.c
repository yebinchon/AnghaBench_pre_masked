
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_device_attribute {int dummy; } ;
struct TYPE_6__ {int release; int groups; TYPE_1__* bus; } ;
struct soc_device {int soc_dev_num; TYPE_2__ dev; struct soc_device_attribute* attr; } ;
struct TYPE_5__ {int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct soc_device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 struct soc_device_attribute* VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct soc_device*) ;
 struct soc_device* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct soc_device *FUNC_8(struct soc_device_attribute *VAR_8)
{
 struct soc_device *VAR_9;
 int VAR_10;

 if (!VAR_5.p) {
  if (VAR_3)
   return FUNC_0(-VAR_0);
  VAR_3 = VAR_8;
  return ((void*)0);
 }

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out1;
 }


 VAR_10 = FUNC_3(&VAR_6, 0, 0, VAR_2);
 if (VAR_10 < 0)
  goto out2;
 VAR_9->soc_dev_num = VAR_10;

 VAR_9->attr = VAR_8;
 VAR_9->dev.bus = &VAR_5;
 VAR_9->dev.groups = VAR_4;
 VAR_9->dev.release = VAR_7;

 FUNC_1(&VAR_9->dev, "soc%d", VAR_9->soc_dev_num);

 VAR_10 = FUNC_2(&VAR_9->dev);
 if (VAR_10)
  goto out3;

 return VAR_9;

out3:
 FUNC_4(&VAR_6, VAR_9->soc_dev_num);
 FUNC_7(&VAR_9->dev);
 VAR_9 = ((void*)0);
out2:
 FUNC_5(VAR_9);
out1:
 return FUNC_0(VAR_10);
}
