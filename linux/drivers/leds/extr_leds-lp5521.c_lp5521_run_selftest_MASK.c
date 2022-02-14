
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_platform_data {scalar_t__ clock_mode; } ;
struct lp55xx_chip {struct lp55xx_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lp55xx_chip*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lp55xx_chip *VAR_4, char *VAR_5)
{
 struct lp55xx_platform_data *VAR_6 = VAR_4->pdata;
 int VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_0(VAR_4, VAR_2, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->clock_mode != VAR_3)
  return 0;


 if ((VAR_8 & VAR_1) == 0)
  return -VAR_0;

 return 0;
}
