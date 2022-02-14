
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_gpu {TYPE_1__* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;
 int FUNC_3 (struct msm_gpu*) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct msm_gpu *VAR_13)
{
 uint32_t VAR_14, VAR_15;

 VAR_14 = FUNC_1(VAR_13, VAR_5);

 if (VAR_14 & VAR_1) {
  VAR_15 = FUNC_1(VAR_13, VAR_7);

  FUNC_0(VAR_13->dev->dev, "MH_INT: %08X\n", VAR_15);
  FUNC_0(VAR_13->dev->dev, "MMU_PAGE_FAULT: %08X\n",
   FUNC_1(VAR_13, VAR_8));

  FUNC_2(VAR_13, VAR_6, VAR_15);
 }

 if (VAR_14 & VAR_0) {
  VAR_15 = FUNC_1(VAR_13, VAR_12);


  if (VAR_15 & ~VAR_3)
   FUNC_0(VAR_13->dev->dev, "CP_INT: %08X\n", VAR_15);

  FUNC_2(VAR_13, VAR_11, VAR_15);
 }

 if (VAR_14 & VAR_2) {
  VAR_15 = FUNC_1(VAR_13, VAR_10);

  FUNC_0(VAR_13->dev->dev, "RBBM_INT: %08X\n", VAR_15);

  FUNC_2(VAR_13, VAR_9, VAR_15);
 }

 FUNC_3(VAR_13);

 return VAR_4;
}
