
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct input_dev {char* phys; char* name; } ;
struct TYPE_3__ {int name; int handler; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,int) ;
 struct input_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int,int ,int ,int ,struct input_dev*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct input_dev *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_7);
 if (!VAR_8) {
  FUNC_1(VAR_7, "failed to allocate input device\n");
  return -VAR_0;
 }

 VAR_8->phys = "hisi_on/input0";
 VAR_8->name = "HISI 65xx PowerOn Key";

 FUNC_6(VAR_8, VAR_1, VAR_3);
 FUNC_6(VAR_8, VAR_1, VAR_4);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {

  VAR_9 = FUNC_7(VAR_6, VAR_5[VAR_10].name);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_11 = FUNC_4(VAR_7, VAR_9,
           VAR_5[VAR_10].handler,
           VAR_2,
           VAR_5[VAR_10].name,
           VAR_8);
  if (VAR_11 < 0) {
   FUNC_1(VAR_7, "couldn't request irq %s: %d\n",
    VAR_5[VAR_10].name, VAR_11);
   return VAR_11;
  }
 }

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11) {
  FUNC_1(VAR_7, "failed to register input device: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_2(VAR_7, 1);

 return 0;
}
