
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77843_muic_info {struct max77693_dev* max77843; } ;
struct max77693_dev {int regmap_chg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct max77843_muic_info *VAR_6,
   bool VAR_7)
{
 struct max77693_dev *VAR_8 = VAR_6->max77843;
 unsigned int VAR_9;

 if (VAR_7)
  VAR_9 = VAR_4 | VAR_0;
 else
  VAR_9 = VAR_2 | VAR_1;

 FUNC_0(VAR_8->regmap_chg, VAR_5,
      VAR_3, VAR_9);
}
