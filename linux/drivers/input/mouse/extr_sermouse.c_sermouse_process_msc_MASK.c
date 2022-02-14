
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sermouse {char* buf; int count; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,char) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct sermouse *VAR_5, signed char VAR_6)
{
 struct input_dev *VAR_7 = VAR_5->dev;
 signed char *VAR_8 = VAR_5->buf;

 switch (VAR_5->count) {

  case 0:
   if ((VAR_6 & 0xf8) != 0x80)
    return;
   FUNC_0(VAR_7, VAR_0, !(VAR_6 & 4));
   FUNC_0(VAR_7, VAR_2, !(VAR_6 & 1));
   FUNC_0(VAR_7, VAR_1, !(VAR_6 & 2));
   break;

  case 1:
  case 3:
   FUNC_1(VAR_7, VAR_3, VAR_6 / 2);
   FUNC_1(VAR_7, VAR_4, -VAR_8[1]);
   VAR_8[0] = VAR_6 - VAR_6 / 2;
   break;

  case 2:
  case 4:
   FUNC_1(VAR_7, VAR_3, VAR_8[0]);
   FUNC_1(VAR_7, VAR_4, VAR_8[1] - VAR_6);
   VAR_8[1] = VAR_6 / 2;
   break;
 }

 FUNC_2(VAR_7);

 if (++VAR_5->count == 5)
  VAR_5->count = 0;
}
