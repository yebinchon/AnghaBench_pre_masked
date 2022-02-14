
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct retu_dev {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {TYPE_2__* parent; } ;
struct input_dev {char* name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct retu_dev* FUNC_0 (int ) ;
 struct input_dev* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int *,int ,int ,char*,struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*,struct retu_dev*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct retu_dev *VAR_6 = FUNC_0(VAR_5->dev.parent);
 struct input_dev *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(VAR_5, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(&VAR_5->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->name = "retu-pwrbutton";
 VAR_7->dev.parent = &VAR_5->dev;

 FUNC_4(VAR_7, VAR_1, VAR_3);
 FUNC_5(VAR_7, VAR_6);

 VAR_9 = FUNC_2(&VAR_5->dev, VAR_8,
       ((void*)0), VAR_4,
       VAR_2,
       "retu-pwrbutton", VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9)
  return VAR_9;

 return 0;
}
