
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinx_dma_chan {int err; int idle; scalar_t__ desc_submitcount; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct xilinx_dma_chan*,int ) ;
 int FUNC_2 (struct xilinx_dma_chan*,int ,int) ;
 int FUNC_3 (struct xilinx_dma_chan*,int ,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct xilinx_dma_chan *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_5, VAR_3, VAR_1);


 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_7,
          !(VAR_7 & VAR_1), 0,
          VAR_2);

 if (VAR_6) {
  FUNC_0(VAR_5->dev, "reset timeout, cr %x, sr %x\n",
   FUNC_1(VAR_5, VAR_3),
   FUNC_1(VAR_5, VAR_4));
  return -VAR_0;
 }

 VAR_5->err = 0;
 VAR_5->idle = 1;
 VAR_5->desc_submitcount = 0;

 return VAR_6;
}
