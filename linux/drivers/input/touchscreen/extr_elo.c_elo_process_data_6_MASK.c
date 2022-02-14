
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct elo {unsigned char* data; size_t idx; int id; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct elo *VAR_4, unsigned char VAR_5)
{
 struct input_dev *VAR_6 = VAR_4->dev;

 VAR_4->data[VAR_4->idx] = VAR_5;

 switch (VAR_4->idx++) {

 case 0:
  if ((VAR_5 & 0xc0) != 0xc0)
   VAR_4->idx = 0;
  break;

 case 1:
  if ((VAR_5 & 0xc0) != 0x80)
   VAR_4->idx = 0;
  break;

 case 2:
  if ((VAR_5 & 0xc0) != 0x40)
   VAR_4->idx = 0;
  break;

 case 3:
  if (VAR_5 & 0xc0) {
   VAR_4->idx = 0;
   break;
  }

  FUNC_0(VAR_6, VAR_1, ((VAR_4->data[0] & 0x3f) << 6) | (VAR_4->data[1] & 0x3f));
  FUNC_0(VAR_6, VAR_2, ((VAR_4->data[2] & 0x3f) << 6) | (VAR_4->data[3] & 0x3f));

  if (VAR_4->id == 2) {
   FUNC_1(VAR_6, VAR_3, 1);
   FUNC_2(VAR_6);
   VAR_4->idx = 0;
  }

  break;

 case 4:
  if (VAR_5) {
   FUNC_2(VAR_6);
   VAR_4->idx = 0;
  }
  break;

 case 5:
  if ((VAR_5 & 0xf0) == 0) {
   FUNC_0(VAR_6, VAR_0, VAR_4->data[5]);
   FUNC_1(VAR_6, VAR_3, !!VAR_4->data[5]);
  }
  FUNC_2(VAR_6);
  VAR_4->idx = 0;
  break;
 }
}
