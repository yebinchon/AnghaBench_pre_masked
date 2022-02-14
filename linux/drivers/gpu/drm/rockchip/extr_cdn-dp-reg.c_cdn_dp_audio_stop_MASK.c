
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int spdif_clk; scalar_t__ regs; int dev; } ;
struct audio_info {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct cdn_dp_device*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct cdn_dp_device *VAR_8, struct audio_info *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_1, 0);
 if (VAR_10) {
  FUNC_0(VAR_8->dev, "audio stop failed: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_3(0, VAR_8->regs + VAR_7);


 FUNC_3(0, VAR_8->regs + VAR_3);
 FUNC_3(0, VAR_8->regs + VAR_2);
 FUNC_3(VAR_4, VAR_8->regs + VAR_3);
 FUNC_3(0, VAR_8->regs + VAR_3);


 FUNC_3(0, VAR_8->regs + VAR_6);
 FUNC_3(VAR_4, VAR_8->regs + VAR_6);
 FUNC_3(0, VAR_8->regs + VAR_6);


 FUNC_3(VAR_4, VAR_8->regs + VAR_5);
 FUNC_3(0, VAR_8->regs + VAR_5);

 if (VAR_9->format == VAR_0)
  FUNC_2(VAR_8->spdif_clk);

 return 0;
}
