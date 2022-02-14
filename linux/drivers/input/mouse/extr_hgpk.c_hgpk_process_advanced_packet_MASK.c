
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; struct hgpk_data* private; } ;
struct input_dev {int dummy; } ;
struct hgpk_data {scalar_t__ mode; int abs_x; int abs_y; scalar_t__ dupe_count; int recalib_wq; int spew_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct psmouse*,int,int) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*,int,int,int,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct psmouse*,char*,...) ;
 int FUNC_8 (struct psmouse*,int *,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_9(struct psmouse *VAR_12)
{
 struct hgpk_data *VAR_13 = VAR_12->private;
 struct input_dev *VAR_14 = VAR_12->dev;
 unsigned char *VAR_15 = VAR_12->packet;
 int VAR_16 = !!(VAR_15[2] & 2);
 int VAR_17 = !!(VAR_15[3] & 1);
 int VAR_18 = !!(VAR_15[3] & 2);
 int VAR_19 = VAR_15[1] | ((VAR_15[2] & 0x78) << 4);
 int VAR_20 = VAR_15[4] | ((VAR_15[3] & 0x70) << 3);

 if (VAR_13->mode == VAR_6) {
  int VAR_21 = !!(VAR_15[2] & 1);
  int VAR_22 = !!(VAR_15[2] & 2);
  int VAR_23 = VAR_15[5];

  FUNC_3(VAR_14, VAR_0, VAR_23);
  if (VAR_11)
   FUNC_7(VAR_12, "pd=%d fd=%d z=%d",
        VAR_21, VAR_22, VAR_23);
 } else {




  if (VAR_11)
   FUNC_7(VAR_12, "pd=%d ", VAR_16);
 }

 if (VAR_11)
  FUNC_7(VAR_12, "l=%d r=%d x=%d y=%d\n",
       VAR_17, VAR_18, VAR_19, VAR_20);

 FUNC_4(VAR_14, VAR_5, VAR_16);
 FUNC_4(VAR_14, VAR_3, VAR_17);
 FUNC_4(VAR_14, VAR_4, VAR_18);





 if (!VAR_16) {
  FUNC_1(VAR_12);
  goto done;
 }





 if (VAR_19 == VAR_13->abs_x && VAR_20 == VAR_13->abs_y) {
  if (++VAR_13->dupe_count > VAR_9) {
   if (VAR_11)
    FUNC_7(VAR_12, "hard spew detected\n");
   VAR_13->spew_flag = VAR_8;
   FUNC_8(VAR_12, &VAR_13->recalib_wq,
        FUNC_6(VAR_10));
  }
  goto done;
 }


 VAR_13->dupe_count = 0;


 if (VAR_13->mode != VAR_7 && VAR_13->abs_x != -1) {
  int VAR_24 = VAR_13->abs_x - VAR_19;
  int VAR_25 = VAR_13->abs_y - VAR_20;
  if (FUNC_0(VAR_12, VAR_24, VAR_25)) {
   if (VAR_11)
    FUNC_7(VAR_12, "discarding\n");
   goto done;
  }
  FUNC_2(VAR_12, VAR_17, VAR_18, VAR_24, VAR_25);
 }

 FUNC_3(VAR_14, VAR_1, VAR_19);
 FUNC_3(VAR_14, VAR_2, VAR_20);
 VAR_13->abs_x = VAR_19;
 VAR_13->abs_y = VAR_20;

done:
 FUNC_5(VAR_14);
}
