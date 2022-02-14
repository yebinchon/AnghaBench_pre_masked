
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tc_data {int regmap; int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct tc_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct tc_data *VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11 = 1;
 int VAR_12, VAR_13 = 1;
 int VAR_14, VAR_15 = 1;
 int VAR_16, VAR_17 = 1;
 int VAR_18, VAR_19;
 int VAR_20[] = {1, 2, 3, 5, 7};
 int VAR_21 = 0;
 int VAR_22 = 0;
 u32 VAR_23;

 FUNC_2(VAR_6->dev, "PLL: requested %d pixelclock, ref %d\n", VAR_8,
  VAR_7);
 VAR_19 = VAR_8;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_20); VAR_10++) {




  if (VAR_7 / VAR_20[VAR_10] < 1000000)
   continue;
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_20); VAR_12++) {
   for (VAR_14 = 1; VAR_14 <= 16; VAR_14++) {
    u32 VAR_24;
    u64 VAR_25;

    VAR_25 = VAR_8 * VAR_20[VAR_10] *
          VAR_20[VAR_12] * VAR_14;
    FUNC_4(VAR_25, VAR_7);
    VAR_16 = VAR_25;


    if ((VAR_16 < 1) || (VAR_16 > 128))
     continue;

    VAR_24 = (VAR_7 / VAR_20[VAR_10] / VAR_14) * VAR_16;




    if ((VAR_24 > 650000000) || (VAR_24 < 150000000))
     continue;

    VAR_24 = VAR_24 / VAR_20[VAR_12];
    VAR_18 = VAR_24 - VAR_8;

    if (FUNC_1(VAR_18) < FUNC_1(VAR_19)) {
     VAR_11 = VAR_10;
     VAR_13 = VAR_12;
     VAR_15 = VAR_14;
     VAR_17 = VAR_16;
     VAR_19 = VAR_18;
     VAR_21 = VAR_24;
    }
   }
  }
 }
 if (VAR_21 == 0) {
  FUNC_3(VAR_6->dev, "Failed to calc clock for %d pixelclock\n",
   VAR_8);
  return -VAR_0;
 }

 FUNC_2(VAR_6->dev, "PLL: got %d, delta %d\n", VAR_21,
  VAR_19);
 FUNC_2(VAR_6->dev, "PLL: %d / %d / %d * %d / %d\n", VAR_7,
  VAR_20[VAR_11], VAR_15, VAR_17, VAR_20[VAR_13]);


 if (VAR_7 / VAR_20[VAR_11] / VAR_15 * VAR_17 >= 300000000)
  VAR_22 = 1;

 if (VAR_15 == 16)
  VAR_15 = 0;
 if (VAR_17 == 128)
  VAR_17 = 0;


 VAR_9 = FUNC_5(VAR_6->regmap, VAR_4, VAR_2 | VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_23 = VAR_22 << 24;
 VAR_23 |= VAR_20[VAR_11] << 20;
 VAR_23 |= VAR_20[VAR_13] << 16;
 VAR_23 |= VAR_1;
 VAR_23 |= VAR_15 << 8;
 VAR_23 |= VAR_17;

 VAR_9 = FUNC_5(VAR_6->regmap, VAR_5, VAR_23);
 if (VAR_9)
  return VAR_9;


 return FUNC_6(VAR_6, VAR_4);
}
