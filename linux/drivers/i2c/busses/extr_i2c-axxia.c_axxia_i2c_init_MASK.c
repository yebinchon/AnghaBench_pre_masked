
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct axxia_i2c_dev {int bus_clk_rate; scalar_t__ base; int dev; int i2c_clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct axxia_i2c_dev*,int ) ;
 unsigned long VAR_12 ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct axxia_i2c_dev *VAR_13)
{
 u32 VAR_14 = FUNC_1(VAR_13->i2c_clk) / VAR_13->bus_clk_rate;
 u32 VAR_15 = FUNC_1(VAR_13->i2c_clk) / 1000000;
 u32 VAR_16;
 u32 VAR_17, VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 unsigned long VAR_21;

 FUNC_2(VAR_13->dev, "rate=%uHz per_clk=%uMHz -> ratio=1:%u\n",
  VAR_13->bus_clk_rate, VAR_15, VAR_14);


 FUNC_9(0x01, VAR_13->base + VAR_7);
 VAR_21 = VAR_12 + FUNC_5(100);
 while (FUNC_7(VAR_13->base + VAR_7) & 1) {
  if (FUNC_8(VAR_12, VAR_21)) {
   FUNC_3(VAR_13->dev, "Soft reset failed\n");
   break;
  }
 }


 FUNC_9(0x1, VAR_13->base + VAR_0);

 if (VAR_13->bus_clk_rate <= 100000) {

  VAR_17 = VAR_14 * 1 / 2;
  VAR_18 = VAR_14 * 1 / 2;
  VAR_16 = FUNC_6(250, VAR_15);
 } else {

  VAR_17 = VAR_14 * 1 / 3;
  VAR_18 = VAR_14 * 2 / 3;
  VAR_16 = FUNC_6(100, VAR_15);
 }


 FUNC_9(VAR_17, VAR_13->base + VAR_2);

 FUNC_9(VAR_18, VAR_13->base + VAR_3);

 FUNC_9(VAR_16, VAR_13->base + VAR_6);

 FUNC_9(FUNC_6(300, VAR_15), VAR_13->base + VAR_5);

 FUNC_9(FUNC_6(50, VAR_15), VAR_13->base + VAR_8);


 VAR_19 = FUNC_6(VAR_4, VAR_15);


 for (VAR_20 = 0; VAR_20 < 15; ++VAR_20) {
  if (VAR_19 <= 0x7fff)
   break;
  VAR_19 >>= 1;
 }
 if (VAR_19 > 0x7fff)
  VAR_19 = 0x7fff;


 FUNC_9(VAR_20, VAR_13->base + VAR_9);

 FUNC_9(VAR_11 | FUNC_0(VAR_19), VAR_13->base + VAR_10);


 FUNC_4(VAR_13, ~0);


 FUNC_9(0x01, VAR_13->base + VAR_1);

 return 0;
}
