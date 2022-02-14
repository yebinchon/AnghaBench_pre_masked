
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; unsigned char distance_max; } ;
struct wacom_wac {unsigned char* data; int* serial; unsigned char* id; TYPE_1__* shared; scalar_t__* tool; TYPE_2__ features; struct input_dev* pen_input; } ;
struct input_dev {int dummy; } ;
typedef int int16_t ;
struct TYPE_3__ {int stylus_in_proximity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 unsigned char FUNC_0 (unsigned char*) ;
 void* FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*,scalar_t__,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct wacom_wac*) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned char FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct wacom_wac *VAR_18)
{
 int VAR_19, VAR_20;

 struct input_dev *VAR_21 = VAR_18->pen_input;
 unsigned char *VAR_22 = VAR_18->data;
 int VAR_23;

 if (VAR_18->features.type == VAR_16 ||
     VAR_18->features.type == VAR_15) {
  VAR_18->serial[0] = FUNC_1(&VAR_22[99]);
  VAR_18->id[0] = FUNC_0(&VAR_22[107]);
  VAR_19 = 14;
  VAR_20 = 7;
 } else {
  VAR_18->serial[0] = FUNC_1(&VAR_22[33]);
  VAR_18->id[0] = FUNC_0(&VAR_22[41]);
  VAR_19 = 8;
  VAR_20 = 4;
 }

 if (VAR_18->serial[0] >> 52 == 1) {

  VAR_18->id[0] |= (VAR_18->serial[0] >> 32) & 0xFFFFF;
 }

 for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++) {
  unsigned char *VAR_24 = &VAR_22[VAR_23*VAR_19 + 1];
  bool VAR_25 = VAR_24[0] & 0x80;
  bool VAR_26 = VAR_24[0] & 0x40;
  bool VAR_27 = VAR_24[0] & 0x20;
  bool VAR_28 = VAR_24[0] & 0x10;

  if (!VAR_25)
   continue;

  if (!VAR_26) {
   VAR_18->shared->stylus_in_proximity = 0;
   FUNC_6(VAR_18);
   FUNC_5(VAR_21);

   VAR_18->tool[0] = 0;
   VAR_18->id[0] = 0;
   VAR_18->serial[0] = 0;
   return;
  }

  if (VAR_27) {
   if (!VAR_18->tool[0]) {

    if (VAR_28)
     VAR_18->tool[0] = VAR_12;
    else if (VAR_18->id[0])
     VAR_18->tool[0] = FUNC_7(VAR_18->id[0]);
    else
     VAR_18->tool[0] = VAR_11;
   }

   FUNC_3(VAR_21, VAR_6, FUNC_0(&VAR_24[1]));
   FUNC_3(VAR_21, VAR_7, FUNC_0(&VAR_24[3]));

   if (VAR_18->features.type == VAR_16 ||
       VAR_18->features.type == VAR_15) {

    int16_t VAR_29 =
     (int16_t)FUNC_0(&VAR_24[9]);
    VAR_29 += 1800/4;

    if (VAR_29 > 899)
     VAR_29 -= 1800;

    FUNC_3(VAR_21, VAR_3,
       (char)VAR_24[7]);
    FUNC_3(VAR_21, VAR_4,
       (char)VAR_24[8]);
    FUNC_3(VAR_21, VAR_8, VAR_29);
    FUNC_3(VAR_21, VAR_5,
       FUNC_0(&VAR_24[11]));
   }
  }
  if (VAR_18->tool[0]) {
   FUNC_3(VAR_21, VAR_2, FUNC_0(&VAR_24[5]));
   if (VAR_18->features.type == VAR_16 ||
       VAR_18->features.type == VAR_15) {
    FUNC_3(VAR_21, VAR_0,
       VAR_27 ? VAR_24[13] : VAR_18->features.distance_max);
   } else {
    FUNC_3(VAR_21, VAR_0,
       VAR_27 ? VAR_24[7] : VAR_18->features.distance_max);
   }

   FUNC_4(VAR_21, VAR_13, VAR_24[0] & 0x09);
   FUNC_4(VAR_21, VAR_9, VAR_24[0] & 0x02);
   FUNC_4(VAR_21, VAR_10, VAR_24[0] & 0x04);

   FUNC_4(VAR_21, VAR_18->tool[0], VAR_26);
   FUNC_2(VAR_21, VAR_14, VAR_17, VAR_18->serial[0]);
   FUNC_3(VAR_21, VAR_1,
      FUNC_8(VAR_18->id[0]));
  }

  VAR_18->shared->stylus_in_proximity = VAR_26;

  FUNC_5(VAR_21);
 }
}
