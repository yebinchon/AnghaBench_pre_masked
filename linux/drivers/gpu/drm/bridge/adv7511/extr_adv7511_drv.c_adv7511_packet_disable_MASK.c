
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct adv7511 *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 & 0xff)
  FUNC_0(VAR_2->regmap, VAR_0,
       VAR_3, 0x00);

 if (VAR_3 & 0xff00) {
  VAR_3 >>= 8;
  FUNC_0(VAR_2->regmap, VAR_1,
       VAR_3, 0x00);
 }

 return 0;
}
