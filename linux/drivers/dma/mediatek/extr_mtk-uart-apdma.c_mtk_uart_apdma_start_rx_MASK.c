
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mtk_uart_apdmadev {scalar_t__ support_33bits; } ;
struct mtk_uart_apdma_desc {unsigned int addr; } ;
struct TYPE_6__ {TYPE_4__* device; } ;
struct TYPE_7__ {TYPE_2__ chan; } ;
struct TYPE_5__ {unsigned int src_port_window_size; } ;
struct mtk_chan {TYPE_3__ vc; TYPE_1__ cfg; struct mtk_uart_apdma_desc* desc; } ;
struct TYPE_8__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (struct mtk_chan*,int ) ;
 int FUNC_3 (struct mtk_chan*,int ,unsigned int) ;
 struct mtk_uart_apdmadev* FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct mtk_chan *VAR_12)
{
 struct mtk_uart_apdmadev *VAR_13 =
    FUNC_4(VAR_12->vc.chan.device);
 struct mtk_uart_apdma_desc *VAR_14 = VAR_12->desc;
 unsigned int VAR_15;

 VAR_15 = VAR_12->cfg.src_port_window_size;
 if (!FUNC_2(VAR_12, VAR_7)) {
  FUNC_3(VAR_12, VAR_2, VAR_14->addr);
  FUNC_3(VAR_12, VAR_7, VAR_15);
  FUNC_3(VAR_12, VAR_11, FUNC_0(VAR_15));
  FUNC_3(VAR_12, VAR_8, 0);
  FUNC_3(VAR_12, VAR_6, VAR_9);

  if (VAR_13->support_33bits)
   FUNC_3(VAR_12, VAR_1, VAR_0);
 }

 FUNC_3(VAR_12, VAR_5, VAR_10);
 FUNC_3(VAR_12, VAR_3, VAR_4);
 if (FUNC_2(VAR_12, VAR_3) != VAR_4)
  FUNC_1(VAR_12->vc.chan.device->dev, "Enable RX fail\n");
}
