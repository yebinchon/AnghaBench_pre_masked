
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct interact {scalar_t__ length; int type; int bads; int gameport; int reads; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct interact* FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_6)
{
 struct interact *VAR_7 = FUNC_0(VAR_6);
 struct input_dev *VAR_8 = VAR_7->dev;
 u32 VAR_9[3];
 int VAR_10;

 VAR_7->reads++;

 if (FUNC_4(VAR_7->gameport, VAR_7->length, VAR_9) < VAR_7->length) {
  VAR_7->bads++;
 } else {

  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   VAR_9[VAR_10] <<= VAR_1 - VAR_7->length;

  switch (VAR_7->type) {

   case 129:

    for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
     FUNC_1(VAR_8, VAR_2[VAR_10], (VAR_9[VAR_10 & 1] >> ((VAR_10 >> 1) << 3)) & 0xff);

    for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
     FUNC_1(VAR_8, VAR_0 - VAR_10,
      ((VAR_9[1] >> ((VAR_10 << 1) + 17)) & 1) - ((VAR_9[1] >> ((VAR_10 << 1) + 16)) & 1));

    for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
     FUNC_2(VAR_8, VAR_4[VAR_10], (VAR_9[0] >> (VAR_10 + 16)) & 1);

    for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
     FUNC_2(VAR_8, VAR_4[VAR_10 + 8], (VAR_9[1] >> (VAR_10 + 20)) & 1);

    break;

   case 128:

    for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
     FUNC_1(VAR_8, VAR_3[VAR_10],
      ((VAR_9[0] >> ((VAR_10 << 1) + 20)) & 1) - ((VAR_9[0] >> ((VAR_10 << 1) + 21)) & 1));

    for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
     FUNC_2(VAR_8, VAR_5[VAR_10], (VAR_9[1] >> (VAR_10 + 16)) & 1);

    break;
  }
 }

 FUNC_3(VAR_8);
}
