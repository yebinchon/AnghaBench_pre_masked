
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmstb_i2c_dev {TYPE_1__* bsc_regmap; } ;
struct TYPE_2__ {int ctlhi_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmstb_i2c_dev*) ;
 int FUNC_1 (struct brcmstb_i2c_dev*) ;
 int FUNC_2 (struct brcmstb_i2c_dev*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct brcmstb_i2c_dev *VAR_2)
{
 if (FUNC_0(VAR_2) == sizeof(u32))

  VAR_2->bsc_regmap->ctlhi_reg = VAR_0;
 else
  VAR_2->bsc_regmap->ctlhi_reg &= ~VAR_0;

 FUNC_2(VAR_2, VAR_2->bsc_regmap->ctlhi_reg, VAR_1);

 FUNC_1(VAR_2);
}
