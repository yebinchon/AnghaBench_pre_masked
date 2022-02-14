
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct brcmstb_i2c_dev {scalar_t__ clk_freq_hz; int device; TYPE_1__* bsc_regmap; } ;
struct TYPE_5__ {scalar_t__ hz; int scl_mask; int div_mask; } ;
struct TYPE_4__ {int ctl_reg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_2 (struct brcmstb_i2c_dev*,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct brcmstb_i2c_dev *VAR_5)
{
 int VAR_6 = 0, VAR_7 = FUNC_0(VAR_3);
 u32 VAR_8 = VAR_5->clk_freq_hz;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_3[VAR_6].hz == VAR_8) {
   VAR_5->bsc_regmap->ctl_reg &= ~(VAR_1
      | VAR_0);
   VAR_5->bsc_regmap->ctl_reg |= (VAR_3[VAR_6].scl_mask |
           VAR_3[VAR_6].div_mask);
   FUNC_2(VAR_5, VAR_5->bsc_regmap->ctl_reg, VAR_4);
   break;
  }
 }


 if (VAR_6 == VAR_7) {
  VAR_6 = (FUNC_1(VAR_5, VAR_4) & VAR_1) >>
   VAR_2;
  FUNC_3(VAR_5->device, "leaving current clock-frequency @ %dHz\n",
   VAR_3[VAR_6].hz);
 }
}
