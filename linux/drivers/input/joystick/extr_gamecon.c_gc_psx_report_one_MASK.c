
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gc_pad {int type; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct gc_pad *VAR_10, unsigned char VAR_11,
         unsigned char *VAR_12)
{
 struct input_dev *VAR_13 = VAR_10->dev;
 int VAR_14;

 switch (VAR_11) {

 case 128:

  FUNC_1(VAR_13, VAR_4, ~VAR_12[0] & 0x04);
  FUNC_1(VAR_13, VAR_5, ~VAR_12[0] & 0x02);


 case 130:
 case 131:

  if (VAR_10->type == VAR_6) {
   for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
    FUNC_1(VAR_13, VAR_9[VAR_14],
       ~VAR_12[0] & (0x10 << VAR_14));
  } else {
   for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
    FUNC_0(VAR_13, VAR_7[VAR_14 + 2],
       VAR_12[VAR_14 + 2]);

   FUNC_0(VAR_13, VAR_0,
    !!(VAR_12[0] & 0x80) * 128 + !(VAR_12[0] & 0x20) * 127);
   FUNC_0(VAR_13, VAR_1,
    !!(VAR_12[0] & 0x10) * 128 + !(VAR_12[0] & 0x40) * 127);
  }

  for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
   FUNC_1(VAR_13, VAR_8[VAR_14], ~VAR_12[1] & (1 << VAR_14));

  FUNC_1(VAR_13, VAR_3, ~VAR_12[0] & 0x08);
  FUNC_1(VAR_13, VAR_2, ~VAR_12[0] & 0x01);

  FUNC_2(VAR_13);

  break;

 case 129:

  if (VAR_10->type == VAR_6) {
   for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
    FUNC_1(VAR_13, VAR_9[VAR_14],
       ~VAR_12[0] & (0x10 << VAR_14));
  } else {
   FUNC_0(VAR_13, VAR_0,
    !!(VAR_12[0] & 0x80) * 128 + !(VAR_12[0] & 0x20) * 127);
   FUNC_0(VAR_13, VAR_1,
    !!(VAR_12[0] & 0x10) * 128 + !(VAR_12[0] & 0x40) * 127);
  }

  for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
   FUNC_1(VAR_13, VAR_8[VAR_14], ~VAR_12[1] & (1 << VAR_14));

  FUNC_1(VAR_13, VAR_3, ~VAR_12[0] & 0x08);
  FUNC_1(VAR_13, VAR_2, ~VAR_12[0] & 0x01);

  FUNC_2(VAR_13);

  break;

 default:
  break;
 }
}
