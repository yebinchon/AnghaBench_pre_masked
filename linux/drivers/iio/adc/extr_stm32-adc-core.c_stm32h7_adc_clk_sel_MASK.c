
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned long rate; scalar_t__ base; } ;
struct stm32_adc_priv {TYPE_2__ common; TYPE_1__* cfg; scalar_t__ bclk; scalar_t__ aclk; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {int ckmode; int presc; int div; } ;
struct TYPE_5__ {unsigned long max_clk_rate_hz; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,char*,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_3__* VAR_7 ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_8,
          struct stm32_adc_priv *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;


 if (!VAR_9->bclk) {
  FUNC_3(&VAR_8->dev, "No 'bus' clock found\n");
  return -VAR_1;
 }






 if (VAR_9->aclk) {




  VAR_13 = FUNC_1(VAR_9->aclk);
  if (!VAR_13) {
   FUNC_3(&VAR_8->dev, "Invalid adc clock rate: 0\n");
   return -VAR_0;
  }

  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7); VAR_14++) {
   VAR_10 = VAR_7[VAR_14].ckmode;
   VAR_11 = VAR_7[VAR_14].presc;
   VAR_15 = VAR_7[VAR_14].div;

   if (VAR_10)
    continue;

   if ((VAR_13 / VAR_15) <= VAR_9->cfg->max_clk_rate_hz)
    goto out;
  }
 }


 VAR_13 = FUNC_1(VAR_9->bclk);
 if (!VAR_13) {
  FUNC_3(&VAR_8->dev, "Invalid bus clock rate: 0\n");
  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7); VAR_14++) {
  VAR_10 = VAR_7[VAR_14].ckmode;
  VAR_11 = VAR_7[VAR_14].presc;
  VAR_15 = VAR_7[VAR_14].div;

  if (!VAR_10)
   continue;

  if ((VAR_13 / VAR_15) <= VAR_9->cfg->max_clk_rate_hz)
   goto out;
 }

 FUNC_3(&VAR_8->dev, "adc clk selection failed\n");
 return -VAR_0;

out:

 VAR_9->common.rate = VAR_13 / VAR_15;


 VAR_12 = FUNC_4(VAR_9->common.base + VAR_2);
 VAR_12 &= ~(VAR_3 | VAR_5);
 VAR_12 |= VAR_10 << VAR_4;
 VAR_12 |= VAR_11 << VAR_6;
 FUNC_5(VAR_12, VAR_9->common.base + VAR_2);

 FUNC_2(&VAR_8->dev, "Using %s clock/%d source at %ld kHz\n",
  VAR_10 ? "bus" : "adc", VAR_15, VAR_9->common.rate / 1000);

 return 0;
}
