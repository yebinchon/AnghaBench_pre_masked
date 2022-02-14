
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_11)
{
 u32 VAR_12 = FUNC_1(VAR_11, VAR_7);

 if (VAR_12 & VAR_3) {
  u32 VAR_13;

  FUNC_2(VAR_11, VAR_8, 0);






  FUNC_1(VAR_11, VAR_9);
  VAR_13 = FUNC_1(VAR_11, VAR_9);

  FUNC_0(VAR_11->dev->dev, "CP | opcode error | possible opcode=0x%8.8X\n",
   VAR_13);
 }

 if (VAR_12 & VAR_2)
  FUNC_0(VAR_11->dev->dev, "CP | HW fault | status=0x%8.8X\n",
   FUNC_1(VAR_11, VAR_6));

 if (VAR_12 & VAR_1)
  FUNC_0(VAR_11->dev->dev, "CP | DMA error\n");

 if (VAR_12 & VAR_4) {
  u32 VAR_14 = FUNC_1(VAR_11, VAR_10);

  FUNC_0(VAR_11->dev->dev,
   "CP | protected mode error | %s | addr=0x%8.8X | status=0x%8.8X\n",
   VAR_14 & (1 << 24) ? "WRITE" : "READ",
   (VAR_14 & 0xFFFFF) >> 2, VAR_14);
 }

 if (VAR_12 & VAR_0) {
  u32 VAR_15 = FUNC_1(VAR_11, VAR_5);
  const char *VAR_16[16] = { "reserved", "reserved",
   "timestamp lo", "timestamp hi", "pfp read", "pfp write",
   "", "", "me read", "me write", "", "", "crashdump read",
   "crashdump write" };

  FUNC_0(VAR_11->dev->dev,
   "CP | AHB error | addr=%X access=%s error=%d | status=0x%8.8X\n",
   VAR_15 & 0xFFFFF, VAR_16[(VAR_15 >> 24) & 0xF],
   (VAR_15 & (1 << 31)), VAR_15);
 }
}
