
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * timings; int * funcs; int of_node; struct thc63_dev* driver_private; } ;
struct thc63_dev {TYPE_1__ bridge; int timings; int vcc; TYPE_2__* dev; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 struct thc63_dev* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct platform_device*,struct thc63_dev*) ;
 int VAR_3 ;
 int FUNC_7 (struct thc63_dev*) ;
 int FUNC_8 (struct thc63_dev*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct thc63_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;
 FUNC_6(VAR_4, VAR_5);

 VAR_5->vcc = FUNC_4(VAR_5->dev, "vcc");
 if (FUNC_0(VAR_5->vcc)) {
  if (FUNC_1(VAR_5->vcc) == -VAR_1)
   return -VAR_1;

  FUNC_2(VAR_5->dev, "Unable to get \"vcc\" supply: %ld\n",
   FUNC_1(VAR_5->vcc));
  return FUNC_1(VAR_5->vcc);
 }

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->bridge.driver_private = VAR_5;
 VAR_5->bridge.of_node = VAR_4->dev.of_node;
 VAR_5->bridge.funcs = &VAR_3;
 VAR_5->bridge.timings = &VAR_5->timings;

 FUNC_5(&VAR_5->bridge);

 return 0;
}
