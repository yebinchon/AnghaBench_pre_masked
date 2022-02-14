
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsc_regs {int iic_enable; } ;
struct brcmstb_i2c_dev {scalar_t__ irq; int device; int done; struct bsc_regs* bsc_regmap; } ;
typedef enum bsc_xfer_cmd { ____Placeholder_bsc_xfer_cmd } bsc_xfer_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_1 (struct brcmstb_i2c_dev*) ;
 int FUNC_2 (struct brcmstb_i2c_dev*) ;
 int FUNC_3 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_4 (struct brcmstb_i2c_dev*,int ,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct brcmstb_i2c_dev *VAR_9,
    enum bsc_xfer_cmd VAR_10)
{
 int VAR_11 = 0;
 struct bsc_regs *VAR_12 = VAR_9->bsc_regmap;


 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;


 if (VAR_9->irq >= 0)
  FUNC_6(&VAR_9->done);


 FUNC_0(VAR_9, VAR_5);


 VAR_12->iic_enable |= VAR_0;
 FUNC_4(VAR_9, VAR_12->iic_enable, VAR_8);


 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11) {
  FUNC_5(VAR_9->device, "intr timeout for cmd %s\n",
   VAR_6[VAR_10]);
  goto cmd_out;
 }

 if ((VAR_2 || VAR_3) &&
     FUNC_3(VAR_9, VAR_8) & VAR_1) {
  VAR_11 = -VAR_4;
  FUNC_5(VAR_9->device, "controller received NOACK intr for %s\n",
   VAR_6[VAR_10]);
 }

cmd_out:
 FUNC_4(VAR_9, 0, VAR_7);
 FUNC_4(VAR_9, 0, VAR_8);

 return VAR_11;
}
