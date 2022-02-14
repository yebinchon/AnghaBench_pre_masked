
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned long rate; scalar_t__ base; } ;
struct stm32_adc_priv {TYPE_2__ common; TYPE_1__* cfg; int aclk; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {unsigned long max_clk_rate_hz; } ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__) ;
 unsigned long* VAR_5 ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6,
          struct stm32_adc_priv *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;
 int VAR_10;


 if (!VAR_7->aclk) {
  FUNC_3(&VAR_6->dev, "No 'adc' clock found\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_7->aclk);
 if (!VAR_8) {
  FUNC_3(&VAR_6->dev, "Invalid clock rate: 0\n");
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
  if ((VAR_8 / VAR_5[VAR_10]) <= VAR_7->cfg->max_clk_rate_hz)
   break;
 }
 if (VAR_10 >= FUNC_0(VAR_5)) {
  FUNC_3(&VAR_6->dev, "adc clk selection failed\n");
  return -VAR_0;
 }

 VAR_7->common.rate = VAR_8 / VAR_5[VAR_10];
 VAR_9 = FUNC_4(VAR_7->common.base + VAR_4);
 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_10 << VAR_3;
 FUNC_5(VAR_9, VAR_7->common.base + VAR_4);

 FUNC_2(&VAR_6->dev, "Using analog clock source at %ld kHz\n",
  VAR_7->common.rate / 1000);

 return 0;
}
