
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {int regmap; int f_audio; int f_tmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int*,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct adv7511 *VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;

 FUNC_0(VAR_6->f_tmds, VAR_6->f_audio, &VAR_7, &VAR_8);

 FUNC_1(VAR_6->regmap, VAR_3, (VAR_8 >> 16) & 0xf);
 FUNC_1(VAR_6->regmap, VAR_4, (VAR_8 >> 8) & 0xff);
 FUNC_1(VAR_6->regmap, VAR_5, VAR_8 & 0xff);

 FUNC_1(VAR_6->regmap, VAR_0,
       (VAR_7 >> 16) & 0xf);
 FUNC_1(VAR_6->regmap, VAR_1,
       (VAR_7 >> 8) & 0xff);
 FUNC_1(VAR_6->regmap, VAR_2,
       VAR_7 & 0xff);

 return 0;
}
