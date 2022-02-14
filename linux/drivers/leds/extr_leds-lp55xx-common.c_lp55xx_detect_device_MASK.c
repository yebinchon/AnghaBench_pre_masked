
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ val; } ;
struct lp55xx_device_config {TYPE_1__ enable; } ;
struct lp55xx_chip {struct lp55xx_device_config* cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct lp55xx_chip*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct lp55xx_chip*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct lp55xx_chip *VAR_1)
{
 struct lp55xx_device_config *VAR_2 = VAR_1->cfg;
 u8 VAR_3 = VAR_2->enable.addr;
 u8 VAR_4 = VAR_2->enable.val;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(1000, 2000);

 VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 != VAR_2->enable.val)
  return -VAR_0;

 return 0;
}
