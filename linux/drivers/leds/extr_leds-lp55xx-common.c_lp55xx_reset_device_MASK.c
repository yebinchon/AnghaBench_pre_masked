
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int val; int addr; } ;
struct lp55xx_device_config {TYPE_1__ reset; } ;
struct lp55xx_chip {struct lp55xx_device_config* cfg; } ;


 int FUNC_0 (struct lp55xx_chip*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct lp55xx_chip *VAR_0)
{
 struct lp55xx_device_config *VAR_1 = VAR_0->cfg;
 u8 VAR_2 = VAR_1->reset.addr;
 u8 VAR_3 = VAR_1->reset.val;


 FUNC_0(VAR_0, VAR_2, VAR_3);
}
