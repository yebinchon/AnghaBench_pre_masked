
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct alps_dev {int max_fingers; int input2; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 void* FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,short) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct alps_dev *VAR_9, u8 *VAR_10, int VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 short VAR_16, VAR_17;

 if (!VAR_10)
  return 0;
 switch (VAR_10[0]) {
 case 129:
  break;
 case 130:
  break;
 case 131:
  for (VAR_15 = 0; VAR_15 < VAR_9->max_fingers; VAR_15++) {
   u8 *VAR_18 = &VAR_10[VAR_15 * 5];

   VAR_12 = FUNC_0(VAR_18 + 3);
   VAR_13 = FUNC_0(VAR_18 + 5);
   VAR_14 = VAR_18[7] & 0x7F;

   FUNC_2(VAR_9->input, VAR_15);

   if (VAR_14 != 0) {
    FUNC_1(VAR_9->input,
     VAR_6, 1);
    FUNC_4(VAR_9->input,
     VAR_0, VAR_12);
    FUNC_4(VAR_9->input,
     VAR_1, VAR_13);
    FUNC_4(VAR_9->input,
     VAR_2, VAR_14);
   } else {
    FUNC_1(VAR_9->input,
     VAR_6, 0);
   }
  }

  FUNC_3(VAR_9->input);

  FUNC_5(VAR_9->input, VAR_3,
   VAR_10[1] & 0x1);
  FUNC_5(VAR_9->input, VAR_5,
   (VAR_10[1] & 0x2));
  FUNC_5(VAR_9->input, VAR_4,
   (VAR_10[1] & 0x4));

  FUNC_7(VAR_9->input);

  return 1;

 case 128:
  VAR_16 = FUNC_0(VAR_10+2);
  VAR_17 = FUNC_0(VAR_10+4);

  VAR_16 = VAR_16 / 8;
  VAR_17 = VAR_17 / 8;

  FUNC_6(VAR_9->input2, VAR_7, VAR_16);
  FUNC_6(VAR_9->input2, VAR_8, VAR_17);

  FUNC_5(VAR_9->input2, VAR_3,
   VAR_10[1] & 0x1);
  FUNC_5(VAR_9->input2, VAR_5,
   (VAR_10[1] & 0x2));
  FUNC_5(VAR_9->input2, VAR_4,
   (VAR_10[1] & 0x4));

  FUNC_7(VAR_9->input2);

  return 1;
 }

 return 0;
}
