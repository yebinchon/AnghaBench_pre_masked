
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmstb_i2c_dev {TYPE_1__* bsc_regmap; } ;
struct TYPE_2__ {int ctl_reg; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct brcmstb_i2c_dev *VAR_2,
        bool VAR_3)
{

 if (VAR_3)

  VAR_2->bsc_regmap->ctl_reg |= VAR_0;
 else

  VAR_2->bsc_regmap->ctl_reg &= ~VAR_0;

 FUNC_0();
 FUNC_1(VAR_2, VAR_2->bsc_regmap->ctl_reg, VAR_1);
}
