
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mxs_lradc_ts {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (struct mxs_lradc_ts*,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_5(struct mxs_lradc_ts *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 u32 VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_0(VAR_3) | FUNC_0(VAR_4);
 VAR_5 = FUNC_4(VAR_2->base + VAR_0) & VAR_6;

 while (VAR_5 != VAR_6) {
  VAR_5 = FUNC_4(VAR_2->base + VAR_0) & VAR_6;
  FUNC_1(VAR_2->dev, "One channel is still busy: %X\n", VAR_5);
 }

 VAR_8 = FUNC_3(VAR_2, VAR_3);
 VAR_9 = FUNC_3(VAR_2, VAR_4);

 if (VAR_9 == 0) {
  FUNC_2(VAR_2->dev, "Cannot calculate pressure\n");
  return 1 << (VAR_1 - 1);
 }


 VAR_7 = VAR_8;
 VAR_7 *= (1 << VAR_1);
 VAR_7 /= VAR_9;

 FUNC_1(VAR_2->dev, "Pressure = %u\n", VAR_7);
 return VAR_7;
}
