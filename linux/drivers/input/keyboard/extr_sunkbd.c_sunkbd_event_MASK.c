
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd {int serio; } ;
struct input_dev {int led; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sunkbd* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_7,
   unsigned int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct sunkbd *VAR_11 = FUNC_0(VAR_7);

 switch (VAR_8) {

 case 131:

  FUNC_1(VAR_11->serio, VAR_6);
  FUNC_1(VAR_11->serio,
   (!!FUNC_2(VAR_0, VAR_7->led) << 3) |
   (!!FUNC_2(VAR_3, VAR_7->led) << 2) |
   (!!FUNC_2(VAR_1, VAR_7->led) << 1) |
    !!FUNC_2(VAR_2, VAR_7->led));
  return 0;

 case 130:

  switch (VAR_9) {

  case 128:
   FUNC_1(VAR_11->serio, VAR_5 - VAR_10);
   return 0;

  case 129:
   FUNC_1(VAR_11->serio, VAR_4 - VAR_10);
   return 0;
  }

  break;
 }

 return -1;
}
