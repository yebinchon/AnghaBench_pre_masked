
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {int evbit; int keybit; int relbit; TYPE_1__ dev; int id; int phys; int name; } ;
typedef enum hgpk_mode { ____Placeholder_hgpk_mode } hgpk_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_12,
        struct input_dev *VAR_13,
        enum hgpk_mode VAR_14)
{
 if (VAR_13) {
  VAR_12->name = VAR_13->name;
  VAR_12->phys = VAR_13->phys;
  VAR_12->id = VAR_13->id;
  VAR_12->dev.parent = VAR_13->dev.parent;
 }

 FUNC_4(VAR_12->evbit, 0, sizeof(VAR_12->evbit));
 FUNC_4(VAR_12->relbit, 0, sizeof(VAR_12->relbit));
 FUNC_4(VAR_12->keybit, 0, sizeof(VAR_12->keybit));


 FUNC_1(VAR_8, VAR_12->evbit);
 FUNC_1(VAR_3, VAR_12->keybit);
 FUNC_1(VAR_4, VAR_12->keybit);

 switch (VAR_14) {
 case 129:
  FUNC_1(VAR_9, VAR_12->evbit);
  FUNC_1(VAR_10, VAR_12->relbit);
  FUNC_1(VAR_11, VAR_12->relbit);
  break;

 case 130:
  FUNC_1(VAR_6, VAR_12->keybit);
  FUNC_1(VAR_5, VAR_12->keybit);

  FUNC_1(VAR_7, VAR_12->evbit);


  FUNC_3(VAR_12, VAR_0, 0, 15, 0, 0);


  FUNC_3(VAR_12, VAR_1, 0, 399, 0, 0);
  FUNC_3(VAR_12, VAR_2, 0, 290, 0, 0);


  FUNC_2(VAR_12, VAR_1, 8);
  FUNC_2(VAR_12, VAR_2, 8);
  break;

 case 128:
  FUNC_1(VAR_6, VAR_12->keybit);
  FUNC_1(VAR_5, VAR_12->keybit);

  FUNC_1(VAR_7, VAR_12->evbit);


  FUNC_3(VAR_12, VAR_1, 0, 999, 0, 0);
  FUNC_3(VAR_12, VAR_2, 5, 239, 0, 0);


  FUNC_2(VAR_12, VAR_1, 6);
  FUNC_2(VAR_12, VAR_2, 8);
  break;

 default:
  FUNC_0();
 }
}
