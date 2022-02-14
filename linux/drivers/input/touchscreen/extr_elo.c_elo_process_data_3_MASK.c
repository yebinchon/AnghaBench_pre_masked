
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct elo {unsigned char* data; size_t idx; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct elo *VAR_3, unsigned char VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->dev;

 VAR_3->data[VAR_3->idx] = VAR_4;

 switch (VAR_3->idx++) {

 case 0:
  if ((VAR_4 & 0x7f) != 0x01)
   VAR_3->idx = 0;
  break;
 case 2:
  FUNC_1(VAR_5, VAR_2, !(VAR_3->data[1] & 0x80));
  FUNC_0(VAR_5, VAR_0, VAR_3->data[1]);
  FUNC_0(VAR_5, VAR_1, VAR_3->data[2]);
  FUNC_2(VAR_5);
  VAR_3->idx = 0;
  break;
 }
}
