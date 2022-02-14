
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct arizona *VAR_1, int VAR_2,
       unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = VAR_0 - (VAR_2 / 2);

 if (!(VAR_2 % 2)) {
  VAR_5 = 0x3f00;
  VAR_3 <<= 8;
 } else {
  VAR_5 = 0x3f;
 }


 FUNC_0(VAR_1->regmap, VAR_4, VAR_5, VAR_3);
}
