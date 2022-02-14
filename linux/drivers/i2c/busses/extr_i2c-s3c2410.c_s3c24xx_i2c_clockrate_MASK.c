
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct s3c24xx_i2c {unsigned long clkrate; int quirks; scalar_t__ regs; int dev; int clk; struct s3c2410_platform_i2c* pdata; } ;
struct s3c2410_platform_i2c {unsigned long frequency; int sda_delay; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (int ,char*,unsigned long,int) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned long,unsigned long,unsigned int*,unsigned int*) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct s3c24xx_i2c *VAR_8, unsigned int *VAR_9)
{
 struct s3c2410_platform_i2c *VAR_10 = VAR_8->pdata;
 unsigned long VAR_11 = FUNC_2(VAR_8->clk);
 unsigned int VAR_12, VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_8->clkrate = VAR_11;
 VAR_11 /= 1000;

 FUNC_3(VAR_8->dev, "pdata desired frequency %lu\n", VAR_10->frequency);

 VAR_14 = VAR_10->frequency ? VAR_10->frequency : 100000;

 VAR_14 /= 1000;

 VAR_16 = FUNC_6(VAR_11, VAR_14, &VAR_13, &VAR_12);

 if (VAR_16 > VAR_14) {
  FUNC_4(VAR_8->dev,
   "Unable to achieve desired frequency %luKHz." " Lowest achievable %dKHz\n", VAR_14, VAR_16);

  return -VAR_0;
 }

 *VAR_9 = VAR_16;

 VAR_15 = FUNC_5(VAR_8->regs + VAR_3);
 VAR_15 &= ~(VAR_4 | VAR_5);
 VAR_15 |= (VAR_12-1);

 if (VAR_13 == 512)
  VAR_15 |= VAR_5;

 if (VAR_8->quirks & VAR_1)
  VAR_15 |= FUNC_1(2);

 FUNC_7(VAR_15, VAR_8->regs + VAR_3);

 if (VAR_8->quirks & VAR_2) {
  unsigned long VAR_17;

  if (VAR_10->sda_delay) {
   VAR_17 = VAR_11 * VAR_10->sda_delay;
   VAR_17 = FUNC_0(VAR_17, 1000000);
   VAR_17 = FUNC_0(VAR_17, 5);
   if (VAR_17 > 3)
    VAR_17 = 3;
   VAR_17 |= VAR_6;
  } else
   VAR_17 = 0;

  FUNC_3(VAR_8->dev, "IICLC=%08lx\n", VAR_17);
  FUNC_7(VAR_17, VAR_8->regs + VAR_7);
 }

 return 0;
}
