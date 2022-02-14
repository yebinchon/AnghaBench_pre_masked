
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_lptim_cnt {int regmap; int polarity; scalar_t__ quadrature_mode; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct stm32_lptim_cnt *VAR_5, int VAR_6)
{
 u32 VAR_7 = VAR_3 | VAR_2 |
     VAR_1 | VAR_4;
 u32 VAR_8;


 if (VAR_5->quadrature_mode)
  VAR_8 = VAR_6 ? VAR_3 : 0;
 else
  VAR_8 = VAR_6 ? VAR_2 : 0;
 VAR_8 |= FUNC_0(VAR_1, VAR_6 ? VAR_5->polarity : 0);

 return FUNC_1(VAR_5->regmap, VAR_0, VAR_7, VAR_8);
}
