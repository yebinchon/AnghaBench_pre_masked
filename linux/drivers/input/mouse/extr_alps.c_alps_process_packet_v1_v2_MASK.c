
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_data {scalar_t__ proto_version; int flags; int prev_fin; struct input_dev* dev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct input_dev*,struct input_dev*,int,int,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_21)
{
 struct alps_data *VAR_22 = VAR_21->private;
 unsigned char *VAR_23 = VAR_21->packet;
 struct input_dev *VAR_24 = VAR_21->dev;
 struct input_dev *VAR_25 = VAR_22->dev2;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34 = 0, VAR_35 = 0;

 if (VAR_22->proto_version == VAR_7) {
  VAR_31 = VAR_23[2] & 0x10;
  VAR_32 = VAR_23[2] & 0x08;
  VAR_33 = 0;
  VAR_26 = VAR_23[1] | ((VAR_23[0] & 0x07) << 7);
  VAR_27 = VAR_23[4] | ((VAR_23[3] & 0x07) << 7);
  VAR_28 = VAR_23[5];
 } else {
  VAR_31 = VAR_23[3] & 1;
  VAR_32 = VAR_23[3] & 2;
  VAR_33 = VAR_23[3] & 4;
  VAR_26 = VAR_23[1] | ((VAR_23[2] & 0x78) << (7 - 3));
  VAR_27 = VAR_23[4] | ((VAR_23[3] & 0x70) << (7 - 4));
  VAR_28 = VAR_23[5];
 }

 if (VAR_22->flags & VAR_5) {
  VAR_34 = VAR_23[0] & 0x10;
  VAR_35 = VAR_23[2] & 4;
 }

 if (VAR_22->flags & VAR_6) {
  VAR_34 = VAR_23[3] & 4;
  VAR_35 = VAR_23[2] & 4;
  if ((VAR_33 = VAR_35 && VAR_34))
   VAR_35 = VAR_34 = 0;
 }

 VAR_29 = VAR_23[2] & 1;
 VAR_30 = VAR_23[2] & 2;

 if ((VAR_22->flags & VAR_3) && VAR_28 == 127) {
  FUNC_3(VAR_25, VAR_19, (VAR_26 > 383 ? (VAR_26 - 768) : VAR_26));
  FUNC_3(VAR_25, VAR_20, -(VAR_27 > 255 ? (VAR_27 - 512) : VAR_27));

  FUNC_0(VAR_25, VAR_24, VAR_31, VAR_32, VAR_33);

  FUNC_4(VAR_25);
  return;
 }


 if (VAR_22->flags & VAR_8) {
  VAR_31 |= VAR_23[0] & 1;
  VAR_32 |= VAR_23[0] & 2;
  VAR_33 |= VAR_23[0] & 4;
 }

 FUNC_0(VAR_24, VAR_25, VAR_31, VAR_32, VAR_33);


 if (VAR_29 && !VAR_30)
  VAR_28 = 40;






 if (VAR_29 && VAR_30 && !VAR_22->prev_fin) {
  FUNC_1(VAR_24, VAR_1, VAR_26);
  FUNC_1(VAR_24, VAR_2, VAR_27);
  FUNC_1(VAR_24, VAR_0, 0);
  FUNC_2(VAR_24, VAR_16, 0);
  FUNC_4(VAR_24);
 }
 VAR_22->prev_fin = VAR_30;

 if (VAR_28 > 30)
  FUNC_2(VAR_24, VAR_17, 1);
 if (VAR_28 < 25)
  FUNC_2(VAR_24, VAR_17, 0);

 if (VAR_28 > 0) {
  FUNC_1(VAR_24, VAR_1, VAR_26);
  FUNC_1(VAR_24, VAR_2, VAR_27);
 }

 FUNC_1(VAR_24, VAR_0, VAR_28);
 FUNC_2(VAR_24, VAR_16, VAR_28 > 0);

 if (VAR_22->flags & VAR_9)
  FUNC_3(VAR_24, VAR_18, ((VAR_23[2] << 1) & 0x08) - ((VAR_23[0] >> 4) & 0x07));

 if (VAR_22->flags & (VAR_5 | VAR_6)) {
  FUNC_2(VAR_24, VAR_15, VAR_35);
  FUNC_2(VAR_24, VAR_14, VAR_34);
 }

 if (VAR_22->flags & VAR_4) {
  FUNC_2(VAR_24, VAR_10, VAR_23[2] & 4);
  FUNC_2(VAR_24, VAR_11, VAR_23[0] & 0x10);
  FUNC_2(VAR_24, VAR_12, VAR_23[3] & 4);
  FUNC_2(VAR_24, VAR_13, VAR_23[0] & 0x20);
 }

 FUNC_4(VAR_24);
}
