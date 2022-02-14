
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mtk_uart_apdmadev {scalar_t__ support_33bits; } ;
struct mtk_uart_apdma_desc {unsigned int addr; scalar_t__ avail_len; } ;
struct TYPE_6__ {TYPE_4__* device; } ;
struct TYPE_7__ {TYPE_2__ chan; } ;
struct TYPE_5__ {unsigned int dst_port_window_size; } ;
struct mtk_chan {struct mtk_uart_apdma_desc* desc; TYPE_3__ vc; TYPE_1__ cfg; } ;
struct TYPE_8__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_16 ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (struct mtk_chan*,int ) ;
 int FUNC_3 (struct mtk_chan*,int ,unsigned int) ;
 struct mtk_uart_apdmadev* FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct mtk_chan *VAR_17)
{
 struct mtk_uart_apdmadev *VAR_18 =
    FUNC_4(VAR_17->vc.chan.device);
 struct mtk_uart_apdma_desc *VAR_19 = VAR_17->desc;
 unsigned int VAR_20, VAR_21;

 VAR_21 = VAR_17->cfg.dst_port_window_size;
 if (!FUNC_2(VAR_17, VAR_10)) {
  FUNC_3(VAR_17, VAR_2, VAR_19->addr);
  FUNC_3(VAR_17, VAR_10, VAR_21);
  FUNC_3(VAR_17, VAR_13, FUNC_0(VAR_21));
  FUNC_3(VAR_17, VAR_16, 0);
  FUNC_3(VAR_17, VAR_8, VAR_14);

  if (VAR_18->support_33bits)
   FUNC_3(VAR_17, VAR_1, VAR_0);
 }

 FUNC_3(VAR_17, VAR_3, VAR_4);
 if (FUNC_2(VAR_17, VAR_3) != VAR_4)
  FUNC_1(VAR_17->vc.chan.device->dev, "Enable TX fail\n");

 if (!FUNC_2(VAR_17, VAR_9)) {
  FUNC_3(VAR_17, VAR_7, VAR_15);
  return;
 }

 VAR_20 = FUNC_2(VAR_17, VAR_16);

 VAR_20 += VAR_17->desc->avail_len;
 if ((VAR_20 & VAR_11) == VAR_21)
  VAR_20 = (VAR_20 & VAR_12) ^ VAR_12;


 FUNC_3(VAR_17, VAR_16, VAR_20);


 FUNC_3(VAR_17, VAR_7, VAR_15);
 if (!FUNC_2(VAR_17, VAR_5))
  FUNC_3(VAR_17, VAR_5, VAR_6);
}
