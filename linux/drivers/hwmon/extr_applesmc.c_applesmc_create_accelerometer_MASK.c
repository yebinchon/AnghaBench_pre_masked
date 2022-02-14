
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * parent; } ;
struct TYPE_9__ {int bustype; } ;
struct input_dev {char* name; int * evbit; TYPE_2__ dev; TYPE_1__ id; } ;
struct TYPE_13__ {struct input_dev* input; int poll_interval; int poll; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int has_accelerometer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_9 ;
 int VAR_10 ;
 TYPE_5__* FUNC_4 () ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct input_dev*,int ,int,int,int ,int ) ;
 TYPE_4__* VAR_11 ;
 int FUNC_8 (char*,int) ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static int FUNC_9(void)
{
 struct input_dev *VAR_13;
 int VAR_14;

 if (!VAR_12.has_accelerometer)
  return 0;

 VAR_14 = FUNC_2(VAR_8, 1);
 if (VAR_14)
  goto out;

 VAR_9 = FUNC_4();
 if (!VAR_9) {
  VAR_14 = -VAR_6;
  goto out_sysfs;
 }

 VAR_9->poll = VAR_10;
 VAR_9->poll_interval = VAR_4;


 FUNC_1();


 VAR_13 = VAR_9->input;
 VAR_13->name = "applesmc";
 VAR_13->id.bustype = VAR_5;
 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->evbit[0] = FUNC_0(VAR_7);
 FUNC_7(VAR_13, VAR_0,
   -256, 256, VAR_3, VAR_2);
 FUNC_7(VAR_13, VAR_1,
   -256, 256, VAR_3, VAR_2);

 VAR_14 = FUNC_6(VAR_9);
 if (VAR_14)
  goto out_idev;

 return 0;

out_idev:
 FUNC_5(VAR_9);

out_sysfs:
 FUNC_3(VAR_8);

out:
 FUNC_8("driver init failed (ret=%d)!\n", VAR_14);
 return VAR_14;
}
