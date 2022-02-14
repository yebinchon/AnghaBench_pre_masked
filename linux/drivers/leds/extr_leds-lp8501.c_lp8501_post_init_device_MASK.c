
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lp55xx_chip {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ clock_mode; int pwr_sel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lp55xx_chip*,int ,int ,int ) ;
 int FUNC_1 (struct lp55xx_chip*,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct lp55xx_chip *VAR_8)
{
 int VAR_9;
 u8 VAR_10 = VAR_1;

 VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_2);
 if (VAR_9)
  return VAR_9;


 FUNC_2(1000, 2000);

 if (VAR_8->pdata->clock_mode != VAR_0)
  VAR_10 |= VAR_3;

 VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_10);
 if (VAR_9)
  return VAR_9;


 return FUNC_0(VAR_8, VAR_7,
    VAR_4, VAR_8->pdata->pwr_sel);
}
