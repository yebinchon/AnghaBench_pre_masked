
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_gpu {TYPE_1__* pdev; } ;
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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_12)
{
 u32 VAR_13 = FUNC_1(VAR_12, VAR_8);

 if (VAR_13 & VAR_3) {
  u32 VAR_14;

  FUNC_2(VAR_12, VAR_10, 1);
  VAR_14 = FUNC_1(VAR_12, VAR_11);
  FUNC_0(&VAR_12->pdev->dev,
   "CP | opcode error | possible opcode=0x%8.8X\n",
   VAR_14);
 }

 if (VAR_13 & VAR_5)
  FUNC_0(&VAR_12->pdev->dev,
   "CP ucode error interrupt\n");

 if (VAR_13 & VAR_1)
  FUNC_0(&VAR_12->pdev->dev, "CP | HW fault | status=0x%8.8X\n",
   FUNC_1(VAR_12, VAR_7));

 if (VAR_13 & VAR_4) {
  u32 VAR_15 = FUNC_1(VAR_12, VAR_9);

  FUNC_0(&VAR_12->pdev->dev,
   "CP | protected mode error | %s | addr=0x%8.8X | status=0x%8.8X\n",
   VAR_15 & (1 << 20) ? "READ" : "WRITE",
   (VAR_15 & 0x3ffff), VAR_15);
 }

 if (VAR_13 & VAR_0)
  FUNC_0(&VAR_12->pdev->dev, "CP AHB error interrupt\n");

 if (VAR_13 & VAR_6)
  FUNC_0(&VAR_12->pdev->dev, "CP VSD decoder parity error\n");

 if (VAR_13 & VAR_2)
  FUNC_0(&VAR_12->pdev->dev, "CP illegal instruction error\n");

}
