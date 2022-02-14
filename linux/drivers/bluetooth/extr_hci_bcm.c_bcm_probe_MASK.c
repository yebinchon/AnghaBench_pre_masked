
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct bcm_device {int list; int name; int irq; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bcm_device*) ;
 int FUNC_2 (struct bcm_device*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 struct bcm_device* FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct bcm_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct bcm_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;
 VAR_5->irq = FUNC_10(VAR_4, 0);

 if (FUNC_6(&VAR_4->dev)) {
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_11(VAR_4, VAR_5);

 FUNC_4(&VAR_4->dev, "%s device registered.\n", VAR_5->name);


 FUNC_8(&VAR_3);
 FUNC_7(&VAR_5->list, &VAR_2);
 FUNC_9(&VAR_3);

 VAR_6 = FUNC_2(VAR_5, 0);
 if (VAR_6)
  FUNC_3(&VAR_4->dev, "Failed to power down\n");

 return 0;
}
