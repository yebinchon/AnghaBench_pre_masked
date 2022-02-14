
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmstb_i2c_dev {TYPE_1__* bsc_regmap; } ;
struct TYPE_2__ {int iic_enable; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct brcmstb_i2c_dev *VAR_1,
           u32 VAR_2)
{
 u32 VAR_3 = VAR_1->bsc_regmap->iic_enable;

 VAR_1->bsc_regmap->iic_enable = (VAR_3 & ~VAR_0) | VAR_2;
}
