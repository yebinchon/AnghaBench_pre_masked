
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct grip {int* mode; int bads; int gameport; int reads; struct input_dev** dev; } ;
struct gameport {int dummy; } ;


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
 int VAR_11 ;




 struct grip* FUNC_0 (struct gameport*) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,unsigned int*) ;
 int FUNC_3 (struct input_dev*,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*,int ,unsigned int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct gameport *VAR_16)
{
 struct grip *VAR_17 = FUNC_0(VAR_16);
 unsigned int VAR_18[VAR_11];
 struct input_dev *VAR_19;
 int VAR_20, VAR_21;

 for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {

  VAR_19 = VAR_17->dev[VAR_20];
  if (!VAR_19)
   continue;

  VAR_17->reads++;

  switch (VAR_17->mode[VAR_20]) {

   case 129:

    if (FUNC_1(VAR_17->gameport, (VAR_20 << 1) + 4, VAR_18)) {
     VAR_17->bads++;
     break;
    }

    FUNC_3(VAR_19, VAR_9, ((*VAR_18 >> 15) & 1) - ((*VAR_18 >> 16) & 1));
    FUNC_3(VAR_19, VAR_10, ((*VAR_18 >> 13) & 1) - ((*VAR_18 >> 12) & 1));

    for (VAR_21 = 0; VAR_21 < 12; VAR_21++)
     if (VAR_14[VAR_21])
      FUNC_4(VAR_19, VAR_14[VAR_21], (*VAR_18 >> VAR_21) & 1);

    break;

   case 131:

    if (FUNC_2(VAR_17->gameport, (VAR_20 << 1) + 4, VAR_18)) {
     VAR_17->bads++;
     break;
    }

    FUNC_3(VAR_19, VAR_9, (VAR_18[0] >> 2) & 0x3f);
    FUNC_3(VAR_19, VAR_10, 63 - ((VAR_18[0] >> 8) & 0x3f));
    FUNC_3(VAR_19, VAR_8, (VAR_18[2] >> 8) & 0x3f);

    FUNC_3(VAR_19, VAR_2, ((VAR_18[2] >> 1) & 1) - ( VAR_18[2] & 1));
    FUNC_3(VAR_19, VAR_3, ((VAR_18[2] >> 2) & 1) - ((VAR_18[2] >> 3) & 1));

    for (VAR_21 = 0; VAR_21 < 5; VAR_21++)
     FUNC_4(VAR_19, VAR_12[VAR_21], (VAR_18[3] >> (VAR_21 + 4)) & 1);

    break;

   case 128:

    if (FUNC_2(VAR_17->gameport, (VAR_20 << 1) + 4, VAR_18)) {
     VAR_17->bads++;
     break;
    }

    FUNC_3(VAR_19, VAR_9, (VAR_18[0] >> 2) & 0x3f);
    FUNC_3(VAR_19, VAR_10, 63 - ((VAR_18[0] >> 8) & 0x3f));
    FUNC_3(VAR_19, VAR_0, (VAR_18[1] >> 2) & 0x3f);
    FUNC_3(VAR_19, VAR_1, (VAR_18[1] >> 8) & 0x3f);
    FUNC_3(VAR_19, VAR_8, (VAR_18[2] >> 8) & 0x3f);

    FUNC_3(VAR_19, VAR_2, ((VAR_18[2] >> 1) & 1) - ( VAR_18[2] & 1));
    FUNC_3(VAR_19, VAR_3, ((VAR_18[2] >> 2) & 1) - ((VAR_18[2] >> 3) & 1));
    FUNC_3(VAR_19, VAR_4, ((VAR_18[2] >> 5) & 1) - ((VAR_18[2] >> 4) & 1));
    FUNC_3(VAR_19, VAR_5, ((VAR_18[2] >> 6) & 1) - ((VAR_18[2] >> 7) & 1));

    for (VAR_21 = 0; VAR_21 < 11; VAR_21++)
     FUNC_4(VAR_19, VAR_15[VAR_21], (VAR_18[3] >> (VAR_21 + 3)) & 1);
    break;

   case 130:

    if (FUNC_2(VAR_17->gameport, (VAR_20 << 1) + 4, VAR_18)) {
     VAR_17->bads++;
     break;
    }

    FUNC_3(VAR_19, VAR_9, (VAR_18[0] >> 2) & 0x3f);
    FUNC_3(VAR_19, VAR_10, (VAR_18[0] >> 8) & 0x3f);
    FUNC_3(VAR_19, VAR_6, (VAR_18[1] >> 2) & 0x3f);
    FUNC_3(VAR_19, VAR_7, (VAR_18[1] >> 8) & 0x3f);
    FUNC_3(VAR_19, VAR_8, (VAR_18[2] >> 8) & 0x3f);

    FUNC_3(VAR_19, VAR_2, ((VAR_18[2] >> 1) & 1) - ( VAR_18[2] & 1));
    FUNC_3(VAR_19, VAR_3, ((VAR_18[2] >> 2) & 1) - ((VAR_18[2] >> 3) & 1));

    for (VAR_21 = 0; VAR_21 < 9; VAR_21++)
     FUNC_4(VAR_19, VAR_13[VAR_21], (VAR_18[3] >> (VAR_21 + 3)) & 1);
    break;


  }

  FUNC_5(VAR_19);
 }
}
