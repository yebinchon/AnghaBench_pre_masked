
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct npcm_adc {int adc_clk; int vref; scalar_t__ regs; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct npcm_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 struct iio_dev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_6(VAR_2);
 struct npcm_adc *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;

 FUNC_2(VAR_3);

 VAR_5 = FUNC_4(VAR_4->regs + VAR_0);
 FUNC_5(VAR_5 & ~VAR_1, VAR_4->regs + VAR_0);
 if (!FUNC_0(VAR_4->vref))
  FUNC_7(VAR_4->vref);
 FUNC_1(VAR_4->adc_clk);

 return 0;
}
