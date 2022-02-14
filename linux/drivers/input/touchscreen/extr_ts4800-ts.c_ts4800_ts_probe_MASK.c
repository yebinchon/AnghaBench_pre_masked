
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ts4800_ts {int phys; int * dev; struct input_polled_dev* poll_dev; int base; } ;
struct platform_device {int dev; } ;
struct input_polled_dev {TYPE_1__* input; int poll; int close; int open; int poll_interval; struct ts4800_ts* private; } ;
struct TYPE_3__ {char* name; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (int *) ;
 struct input_polled_dev* FUNC_4 (int *) ;
 struct ts4800_ts* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct input_polled_dev*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (int ,int,char*,char*) ;
 int FUNC_11 (struct platform_device*,struct ts4800_ts*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct input_polled_dev *VAR_12;
 struct ts4800_ts *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_5(&VAR_11->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_3;

 VAR_14 = FUNC_11(VAR_11, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_13->base = FUNC_6(VAR_11, 0);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_12 = FUNC_4(&VAR_11->dev);
 if (!VAR_12)
  return -VAR_3;

 FUNC_10(VAR_13->phys, sizeof(VAR_13->phys), "%s/input0", FUNC_3(&VAR_11->dev));
 VAR_13->poll_dev = VAR_12;
 VAR_13->dev = &VAR_11->dev;

 VAR_12->private = VAR_13;
 VAR_12->poll_interval = VAR_7;
 VAR_12->open = VAR_9;
 VAR_12->close = VAR_8;
 VAR_12->poll = VAR_10;

 VAR_12->input->name = "TS-4800 Touchscreen";
 VAR_12->input->phys = VAR_13->phys;

 FUNC_9(VAR_12->input, VAR_4, VAR_2);
 FUNC_8(VAR_12->input, VAR_0, 0, VAR_6, 0, 0);
 FUNC_8(VAR_12->input, VAR_1, 0, VAR_6, 0, 0);

 VAR_14 = FUNC_7(VAR_12);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev,
   "Unabled to register polled input device (%d)\n",
   VAR_14);
  return VAR_14;
 }

 return 0;
}
