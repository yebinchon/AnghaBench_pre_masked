
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct fsp_data* private; struct input_dev* dev; } ;
struct input_dev {int propbit; int keybit; int evbit; int relbit; } ;
struct fsp_data {scalar_t__ ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_16)
{
 struct input_dev *VAR_17 = VAR_16->dev;
 struct fsp_data *VAR_18 = VAR_16->private;

 if (VAR_18->ver < VAR_12) {
  FUNC_1(VAR_6, VAR_17->keybit);
  FUNC_1(VAR_4, VAR_17->keybit);
  FUNC_1(VAR_5, VAR_17->keybit);
  FUNC_1(VAR_15, VAR_17->relbit);
  FUNC_1(VAR_14, VAR_17->relbit);
 } else {
  int VAR_19 = 967, VAR_20 = 711;

  FUNC_1(VAR_10, VAR_17->evbit);
  FUNC_0(VAR_11, VAR_17->evbit);
  FUNC_1(VAR_9, VAR_17->keybit);
  FUNC_1(VAR_8, VAR_17->keybit);
  FUNC_1(VAR_7, VAR_17->keybit);
  FUNC_1(VAR_13, VAR_17->propbit);

  FUNC_3(VAR_17, VAR_2, 0, VAR_19, 0, 0);
  FUNC_3(VAR_17, VAR_3, 0, VAR_20, 0, 0);
  FUNC_2(VAR_17, 2, 0);
  FUNC_3(VAR_17, VAR_0, 0, VAR_19, 0, 0);
  FUNC_3(VAR_17, VAR_1, 0, VAR_20, 0, 0);
 }

 return 0;
}
