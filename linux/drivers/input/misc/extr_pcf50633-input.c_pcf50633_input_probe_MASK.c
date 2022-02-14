
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcf50633_input {int pcf; struct input_dev* input_dev; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {char* name; int* evbit; int keybit; TYPE_2__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct pcf50633_input*) ;
 struct pcf50633_input* FUNC_6 (int,int ) ;
 int VAR_8 ;
 int FUNC_7 (int ,int ,int ,struct pcf50633_input*) ;
 int FUNC_8 (struct platform_device*,struct pcf50633_input*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct pcf50633_input *VAR_10;
 struct input_dev *VAR_11;
 int VAR_12;


 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_2();
 if (!VAR_11) {
  FUNC_5(VAR_10);
  return -VAR_1;
 }

 FUNC_8(VAR_9, VAR_10);
 VAR_10->pcf = FUNC_1(VAR_9->dev.parent);
 VAR_10->input_dev = VAR_11;

 VAR_11->name = "PCF50633 PMU events";
 VAR_11->id.bustype = VAR_0;
 VAR_11->evbit[0] = FUNC_0(VAR_2) | FUNC_0(VAR_3);
 FUNC_9(VAR_5, VAR_11->keybit);

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_11);
  FUNC_5(VAR_10);
  return VAR_12;
 }
 FUNC_7(VAR_10->pcf, VAR_7,
    VAR_8, VAR_10);
 FUNC_7(VAR_10->pcf, VAR_6,
    VAR_8, VAR_10);

 return 0;
}
