
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {int absbit; } ;
struct iforce {TYPE_1__* core_effects; struct input_dev* dev; } ;
typedef int __s8 ;
typedef int __s16 ;
struct TYPE_2__ {int flags; } ;


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
 int FUNC_0 (int*) ;
 int FUNC_1 (struct iforce*,int*) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,int,int ) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct iforce*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(struct iforce *VAR_11,
      u8 VAR_12, u8 *VAR_13, size_t VAR_14)
{
 struct input_dev *VAR_15 = VAR_11->dev;
 int VAR_16, VAR_17;

 switch (VAR_12) {

 case 0x01:
  FUNC_2(VAR_15, VAR_5,
     (__s16) FUNC_0(VAR_13));
  FUNC_2(VAR_15, VAR_6,
     (__s16) FUNC_0(VAR_13 + 2));
  FUNC_2(VAR_15, VAR_3, 255 - VAR_13[4]);

  if (VAR_14 >= 8 && FUNC_9(VAR_2 ,VAR_15->absbit))
   FUNC_2(VAR_15, VAR_2, (__s8)VAR_13[7]);

  FUNC_1(VAR_11, VAR_13);

  FUNC_5(VAR_15);
  break;

 case 0x03:
  FUNC_2(VAR_15, VAR_4,
     (__s16) FUNC_0(VAR_13));
  FUNC_2(VAR_15, VAR_1, 255 - VAR_13[2]);
  FUNC_2(VAR_15, VAR_0, 255 - VAR_13[3]);

  FUNC_1(VAR_11, VAR_13);

  FUNC_5(VAR_15);
  break;

 case 0x02:
  FUNC_4(VAR_15, VAR_7, VAR_13[0] & 0x02);
  FUNC_5(VAR_15);


  VAR_16 = VAR_13[1] & 0x7f;
  if (VAR_13[1] & 0x80) {
   if (!FUNC_8(VAR_8, VAR_11->core_effects[VAR_16].flags)) {

    FUNC_3(VAR_15, VAR_16, VAR_9);
   }
  } else if (FUNC_7(VAR_8, VAR_11->core_effects[VAR_16].flags)) {

   FUNC_3(VAR_15, VAR_16, VAR_10);
  }

  for (VAR_17 = 3; VAR_17 < VAR_14; VAR_17 += 2)
   FUNC_6(VAR_11, FUNC_0(VAR_13 + VAR_17));

  break;
 }
}
