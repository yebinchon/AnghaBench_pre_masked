
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int flags; } ;
struct bsc_regs {int ctlhi_reg; int ctl_reg; } ;
struct brcmstb_i2c_dev {int device; struct bsc_regs* bsc_regmap; } ;
typedef enum bsc_xfer_cmd { ____Placeholder_bsc_xfer_cmd } bsc_xfer_cmd ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct brcmstb_i2c_dev*) ;
 int FUNC_2 (struct brcmstb_i2c_dev*,int) ;
 int FUNC_3 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_4 (struct brcmstb_i2c_dev*,int,int ) ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct brcmstb_i2c_dev *VAR_17,
         u8 *VAR_18, unsigned int VAR_19,
         struct i2c_msg *VAR_20)
{
 int VAR_21, VAR_22, VAR_23, VAR_24;
 enum bsc_xfer_cmd VAR_25;
 u32 VAR_26;
 struct bsc_regs *VAR_27 = VAR_17->bsc_regmap;
 int VAR_28 = VAR_20->flags & VAR_10;
 int VAR_29 = FUNC_1(VAR_17);


 if (VAR_28) {
  VAR_25 = (VAR_20->flags & VAR_11) ? VAR_5
   : VAR_7;
  VAR_27->ctlhi_reg |= VAR_2;
 } else {
  VAR_25 = (VAR_20->flags & VAR_11) ? VAR_4 : VAR_6;
  VAR_27->ctlhi_reg &= ~VAR_2;
 }
 FUNC_4(VAR_17, VAR_27->ctlhi_reg, VAR_14);


 VAR_26 = VAR_27->ctl_reg & ~VAR_3;
 if (VAR_25 == VAR_6 || VAR_25 == VAR_7)
  VAR_27->ctl_reg = VAR_26 | VAR_9;
 else
  VAR_27->ctl_reg = VAR_26 | VAR_8;


 FUNC_4(VAR_17, FUNC_0(VAR_29) &
     (VAR_19 << VAR_1), VAR_13);



 if (VAR_25 == VAR_6 || VAR_25 == VAR_7) {
  for (VAR_21 = 0, VAR_23 = 0; VAR_21 < VAR_19; VAR_21 += VAR_29, VAR_23++) {
   u32 VAR_30 = 0;

   for (VAR_22 = 0; VAR_22 < VAR_29; VAR_22++) {
    VAR_30 >>= VAR_0;
    if ((VAR_21 + VAR_22) < VAR_19)
     VAR_30 |= VAR_18[VAR_21 + VAR_22] <<
     (VAR_0 * (VAR_29 - 1));
   }
   FUNC_4(VAR_17, VAR_30, VAR_15[VAR_23]);
  }
 }


 VAR_24 = FUNC_2(VAR_17, VAR_25);

 if (VAR_24 != 0) {
  FUNC_5(VAR_17->device, "%s failure", VAR_12[VAR_25]);
  return VAR_24;
 }


 if (VAR_25 == VAR_4 || VAR_25 == VAR_5) {
  for (VAR_21 = 0, VAR_23 = 0; VAR_21 < VAR_19; VAR_21 += VAR_29, VAR_23++) {
   u32 VAR_31 = FUNC_3(VAR_17, VAR_16[VAR_23]);

   for (VAR_22 = 0; VAR_22 < VAR_29 &&
         (VAR_22 + VAR_21) < VAR_19; VAR_22++) {
    VAR_18[VAR_21 + VAR_22] = VAR_31 & 0xff;
    VAR_31 >>= VAR_0;
   }
  }
 }

 return 0;
}
