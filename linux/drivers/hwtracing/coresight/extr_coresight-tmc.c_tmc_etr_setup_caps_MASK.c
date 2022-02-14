
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmc_drvdata {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct tmc_drvdata* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int ) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct tmc_drvdata*) ;
 int FUNC_7 (struct tmc_drvdata*,int) ;
 int FUNC_8 (struct tmc_drvdata*,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_6, u32 VAR_7, void *VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 0;
 struct tmc_drvdata *VAR_11 = FUNC_2(VAR_6);

 if (!FUNC_6(VAR_11))
  return -VAR_0;


 FUNC_7(VAR_11, (u32)(unsigned long)VAR_8);

 if (!(VAR_7 & VAR_4) && FUNC_5(VAR_6))
  FUNC_8(VAR_11, VAR_5);


 if (VAR_7 & VAR_3)
  VAR_10 = ((VAR_7 >> VAR_2) &
    VAR_1);





 switch (VAR_10) {
 case 32:
 case 40:
 case 44:
 case 48:
 case 52:
  FUNC_3(VAR_6, "Detected dma mask %dbits\n", VAR_10);
  break;
 default:
  VAR_10 = 40;
 }

 VAR_9 = FUNC_4(VAR_6, FUNC_0(VAR_10));
 if (VAR_9)
  FUNC_1(VAR_6, "Failed to setup DMA mask: %d\n", VAR_9);
 return VAR_9;
}
