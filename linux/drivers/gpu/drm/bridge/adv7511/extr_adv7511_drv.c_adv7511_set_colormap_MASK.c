
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct adv7511 {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int const) ;
 int FUNC_3 (int ,int ,int const) ;

__attribute__((used)) static void FUNC_4(struct adv7511 *VAR_1, bool VAR_2,
     const uint16_t *VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5;

 FUNC_2(VAR_1->regmap, FUNC_1(1),
      VAR_0, VAR_0);

 if (VAR_2) {
  for (VAR_5 = 0; VAR_5 < 12; ++VAR_5) {
   FUNC_2(VAR_1->regmap,
        FUNC_1(VAR_5),
        0x1f, VAR_3[VAR_5] >> 8);
   FUNC_3(VAR_1->regmap,
         FUNC_0(VAR_5),
         VAR_3[VAR_5] & 0xff);
  }
 }

 if (VAR_2)
  FUNC_2(VAR_1->regmap, FUNC_1(0),
       0xe0, 0x80 | (VAR_4 << 5));
 else
  FUNC_2(VAR_1->regmap, FUNC_1(0),
       0x80, 0x00);

 FUNC_2(VAR_1->regmap, FUNC_1(1),
      VAR_0, 0);
}
