
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_gpu {int freq_scale; scalar_t__ sec_mode; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*,char*,char*) ;
 int FUNC_3 (struct etnaviv_gpu*,int) ;
 int FUNC_4 (struct etnaviv_gpu*) ;
 int FUNC_5 (struct etnaviv_gpu*,int ) ;
 int FUNC_6 (struct etnaviv_gpu*,int ,int) ;
 unsigned long VAR_12 ;
 unsigned long FUNC_7 (int) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct etnaviv_gpu *VAR_13)
{
 u32 VAR_14, VAR_15;
 unsigned long VAR_16;
 bool VAR_17 = 1;


 VAR_16 = VAR_12 + FUNC_7(1000);

 while (FUNC_8(VAR_16)) {

  unsigned int VAR_18 = 1 << (6 - VAR_13->freq_scale);
  VAR_14 = FUNC_0(VAR_18);
  FUNC_3(VAR_13, VAR_14);


  VAR_14 |= VAR_6;
  FUNC_6(VAR_13, VAR_2, VAR_14);

  if (VAR_13->sec_mode == VAR_1) {
   FUNC_6(VAR_13, VAR_10,
             VAR_11);
  } else {

   VAR_14 |= VAR_7;
   FUNC_6(VAR_13, VAR_2, VAR_14);
  }


  FUNC_9(10, 20);


  VAR_14 &= ~VAR_7;
  FUNC_6(VAR_13, VAR_2, VAR_14);


  VAR_14 &= ~VAR_6;
  FUNC_6(VAR_13, VAR_2, VAR_14);


  VAR_15 = FUNC_5(VAR_13, VAR_8);


  if ((VAR_15 & VAR_9) == 0) {
   FUNC_1(VAR_13->dev, "FE is not idle\n");
   continue;
  }


  VAR_14 = FUNC_5(VAR_13, VAR_2);


  if (((VAR_14 & VAR_5) == 0) ||
      ((VAR_14 & VAR_4) == 0)) {
   FUNC_1(VAR_13->dev, "GPU is not idle\n");
   continue;
  }


  VAR_14 |= VAR_3;
  FUNC_6(VAR_13, VAR_2, VAR_14);

  VAR_17 = 0;
  break;
 }

 if (VAR_17) {
  VAR_15 = FUNC_5(VAR_13, VAR_8);
  VAR_14 = FUNC_5(VAR_13, VAR_2);

  FUNC_2(VAR_13->dev, "GPU failed to reset: FE %sidle, 3D %sidle, 2D %sidle\n",
   VAR_15 & VAR_9 ? "" : "not ",
   VAR_14 & VAR_5 ? "" : "not ",
   VAR_14 & VAR_4 ? "" : "not ");

  return -VAR_0;
 }


 FUNC_4(VAR_13);

 return 0;
}
