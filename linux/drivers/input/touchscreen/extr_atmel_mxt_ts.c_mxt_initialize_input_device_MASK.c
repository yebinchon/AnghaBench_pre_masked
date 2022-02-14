
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mxt_data {int multitouch; unsigned int num_touchids; int max_x; int max_y; struct input_dev* input_dev; scalar_t__ t100_aux_vect; scalar_t__ t100_aux_ampl; scalar_t__ t100_aux_area; scalar_t__ t19_num_keys; int phys; scalar_t__ xy_switch; scalar_t__ T9_reportid_min; scalar_t__ T9_reportid_max; TYPE_1__* client; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_5__ {int bustype; } ;
struct input_dev {char* name; int close; int open; TYPE_3__ dev; TYPE_2__ id; int phys; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,unsigned int,unsigned int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int FUNC_9 (struct input_dev*,struct mxt_data*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (struct mxt_data*) ;
 int FUNC_11 (struct mxt_data*) ;
 int FUNC_12 (struct input_dev*,struct mxt_data*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct mxt_data *VAR_23)
{
 struct device *VAR_24 = &VAR_23->client->dev;
 struct input_dev *VAR_25;
 int VAR_26;
 unsigned int VAR_27;
 unsigned int VAR_28 = 0;

 switch (VAR_23->multitouch) {
 case 128:
  VAR_27 = VAR_23->T9_reportid_max - VAR_23->T9_reportid_min + 1;
  VAR_26 = FUNC_11(VAR_23);
  if (VAR_26)
   FUNC_2(VAR_24, "Failed to initialize T9 resolution\n");
  break;

 case 129:
  VAR_27 = VAR_23->num_touchids;
  VAR_26 = FUNC_10(VAR_23);
  if (VAR_26)
   FUNC_2(VAR_24, "Failed to read T100 config\n");
  break;

 default:
  FUNC_0(VAR_24, "Invalid multitouch object\n");
  return -VAR_12;
 }


 if (VAR_23->max_x == 0)
  VAR_23->max_x = 1023;

 if (VAR_23->max_y == 0)
  VAR_23->max_y = 1023;

 if (VAR_23->xy_switch)
  FUNC_13(VAR_23->max_x, VAR_23->max_y);

 FUNC_1(VAR_24, "Touchscreen size X%uY%u\n", VAR_23->max_x, VAR_23->max_y);


 VAR_25 = FUNC_3();
 if (!VAR_25)
  return -VAR_13;

 VAR_25->name = "Atmel maXTouch Touchscreen";
 VAR_25->phys = VAR_23->phys;
 VAR_25->id.bustype = VAR_11;
 VAR_25->dev.parent = VAR_24;
 VAR_25->open = VAR_22;
 VAR_25->close = VAR_21;

 FUNC_8(VAR_25, VAR_14, VAR_10);


 FUNC_7(VAR_25, VAR_8, 0, VAR_23->max_x, 0, 0);
 FUNC_7(VAR_25, VAR_9, 0, VAR_23->max_y, 0, 0);

 if (VAR_23->multitouch == 128 ||
     (VAR_23->multitouch == 129 &&
      VAR_23->t100_aux_ampl)) {
  FUNC_7(VAR_25, VAR_7, 0, 255, 0, 0);
 }


 if (VAR_23->t19_num_keys) {
  FUNC_12(VAR_25, VAR_23);
  VAR_28 |= VAR_16;
 } else {
  VAR_28 |= VAR_15;
 }


 VAR_26 = FUNC_5(VAR_25, VAR_27, VAR_28);
 if (VAR_26) {
  FUNC_0(VAR_24, "Error %d initialising slots\n", VAR_26);
  goto err_free_mem;
 }

 if (VAR_23->multitouch == 129) {
  FUNC_7(VAR_25, VAR_5,
         0, VAR_17, 0, 0);
  FUNC_7(VAR_25, VAR_0,
         VAR_18,
         VAR_19,
         0, 0);
 }

 FUNC_7(VAR_25, VAR_2,
        0, VAR_23->max_x, 0, 0);
 FUNC_7(VAR_25, VAR_3,
        0, VAR_23->max_y, 0, 0);

 if (VAR_23->multitouch == 128 ||
     (VAR_23->multitouch == 129 &&
      VAR_23->t100_aux_area)) {
  FUNC_7(VAR_25, VAR_6,
         0, VAR_20, 0, 0);
 }

 if (VAR_23->multitouch == 128 ||
     (VAR_23->multitouch == 129 &&
      VAR_23->t100_aux_ampl)) {
  FUNC_7(VAR_25, VAR_4,
         0, 255, 0, 0);
 }

 if (VAR_23->multitouch == 129 &&
     VAR_23->t100_aux_vect) {
  FUNC_7(VAR_25, VAR_1,
         0, 255, 0, 0);
 }

 if (VAR_23->multitouch == 129 &&
     VAR_23->t100_aux_vect) {
  FUNC_7(VAR_25, VAR_1,
         0, 255, 0, 0);
 }

 FUNC_9(VAR_25, VAR_23);

 VAR_26 = FUNC_6(VAR_25);
 if (VAR_26) {
  FUNC_0(VAR_24, "Error %d registering input device\n", VAR_26);
  goto err_free_mem;
 }

 VAR_23->input_dev = VAR_25;

 return 0;

err_free_mem:
 FUNC_4(VAR_25);
 return VAR_26;
}
