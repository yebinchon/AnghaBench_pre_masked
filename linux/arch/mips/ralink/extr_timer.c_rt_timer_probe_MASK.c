
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_timer {scalar_t__ irq; int timer_freq; int * dev; struct clk* membase; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_4 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 struct clk* FUNC_5 (int *,int *) ;
 struct clk* FUNC_6 (int *,struct resource*) ;
 struct rt_timer* FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct rt_timer*) ;
 int FUNC_11 (struct rt_timer*,int) ;
 int FUNC_12 (struct rt_timer*) ;
 int FUNC_13 (struct rt_timer*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct resource *VAR_6 = FUNC_9(VAR_5, VAR_3, 0);
 struct rt_timer *VAR_7;
 struct clk *VAR_8;

 VAR_7 = FUNC_7(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_3(&VAR_5->dev, "failed to allocate memory\n");
  return -VAR_1;
 }

 VAR_7->irq = FUNC_8(VAR_5, 0);
 if (VAR_7->irq < 0)
  return VAR_7->irq;

 VAR_7->membase = FUNC_6(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->membase))
  return FUNC_1(VAR_7->membase);

 VAR_8 = FUNC_5(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_8)) {
  FUNC_3(&VAR_5->dev, "failed get clock rate\n");
  return FUNC_1(VAR_8);
 }

 VAR_7->timer_freq = FUNC_2(VAR_8) / VAR_4;
 if (!VAR_7->timer_freq)
  return -VAR_0;

 VAR_7->dev = &VAR_5->dev;
 FUNC_10(VAR_5, VAR_7);

 FUNC_13(VAR_7);
 FUNC_11(VAR_7, 2);
 FUNC_12(VAR_7);

 FUNC_4(&VAR_5->dev, "maximum frequency is %luHz\n", VAR_7->timer_freq);

 return 0;
}
