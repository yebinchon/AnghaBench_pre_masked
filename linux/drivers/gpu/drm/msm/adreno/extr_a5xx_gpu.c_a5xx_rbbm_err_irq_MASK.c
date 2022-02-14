
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_gpu {TYPE_1__* dev; } ;
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_13, u32 VAR_14)
{
 if (VAR_14 & VAR_0) {
  u32 VAR_15 = FUNC_1(VAR_13, VAR_8);

  FUNC_0(VAR_13->dev->dev,
   "RBBM | AHB bus error | %s | addr=0x%X | ports=0x%X:0x%X\n",
   VAR_15 & (1 << 28) ? "WRITE" : "READ",
   (VAR_15 & 0xFFFFF) >> 2, (VAR_15 >> 20) & 0x3,
   (VAR_15 >> 24) & 0xF);


  FUNC_2(VAR_13, VAR_7, (1 << 4));


  FUNC_2(VAR_13, VAR_12,
   VAR_0);
 }

 if (VAR_14 & VAR_6)
  FUNC_0(VAR_13->dev->dev, "RBBM | AHB transfer timeout\n");

 if (VAR_14 & VAR_4)
  FUNC_0(VAR_13->dev->dev, "RBBM | ME master split | status=0x%X\n",
   FUNC_1(VAR_13, VAR_10));

 if (VAR_14 & VAR_5)
  FUNC_0(VAR_13->dev->dev, "RBBM | PFP master split | status=0x%X\n",
   FUNC_1(VAR_13, VAR_11));

 if (VAR_14 & VAR_3)
  FUNC_0(VAR_13->dev->dev, "RBBM | ETS master split | status=0x%X\n",
   FUNC_1(VAR_13, VAR_9));

 if (VAR_14 & VAR_1)
  FUNC_0(VAR_13->dev->dev, "RBBM | ATB ASYNC overflow\n");

 if (VAR_14 & VAR_2)
  FUNC_0(VAR_13->dev->dev, "RBBM | ATB bus overflow\n");
}
