
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdn_dp_device {int fw_version; int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int (*) (scalar_t__),scalar_t__,int,int,int,int ) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct cdn_dp_device *VAR_13, const u32 *VAR_14,
    u32 VAR_15, const u32 *VAR_16, u32 VAR_17)
{
 u32 VAR_18;
 int VAR_19, VAR_20;


 FUNC_4(VAR_4 | VAR_3 | VAR_5,
        VAR_13->regs + VAR_2);

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19 += 4)
  FUNC_4(*VAR_14++, VAR_13->regs + VAR_1 + VAR_19);

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19 += 4)
  FUNC_4(*VAR_16++, VAR_13->regs + VAR_0 + VAR_19);


 FUNC_4(0, VAR_13->regs + VAR_2);


 VAR_20 = FUNC_3(FUNC_2, VAR_13->regs + VAR_8,
     VAR_18, VAR_18, 2000, VAR_7);
 if (VAR_20 < 0) {
  FUNC_1(VAR_13->dev, "failed to loaded the FW reg = %x\n",
         VAR_18);
  return -VAR_6;
 }

 VAR_18 = FUNC_2(VAR_13->regs + VAR_10) & 0xff;
 VAR_13->fw_version = VAR_18;
 VAR_18 = FUNC_2(VAR_13->regs + VAR_9) & 0xff;
 VAR_13->fw_version |= VAR_18 << 8;
 VAR_18 = FUNC_2(VAR_13->regs + VAR_12) & 0xff;
 VAR_13->fw_version |= VAR_18 << 16;
 VAR_18 = FUNC_2(VAR_13->regs + VAR_11) & 0xff;
 VAR_13->fw_version |= VAR_18 << 24;

 FUNC_0(VAR_13->dev, "firmware version: %x\n", VAR_13->fw_version);

 return 0;
}
