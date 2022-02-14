
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int node; } ;
struct mtk_uart_apdma_desc {TYPE_2__ vd; scalar_t__ avail_len; } ;
struct TYPE_3__ {unsigned int src_port_window_size; } ;
struct mtk_chan {scalar_t__ rx_status; TYPE_1__ cfg; struct mtk_uart_apdma_desc* desc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct mtk_chan*,int ) ;
 int FUNC_2 (struct mtk_chan*,int ,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct mtk_chan *VAR_11)
{
 struct mtk_uart_apdma_desc *VAR_12 = VAR_11->desc;
 unsigned int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 FUNC_2(VAR_11, VAR_4, VAR_8);

 if (!FUNC_1(VAR_11, VAR_9))
  return;

 FUNC_2(VAR_11, VAR_0, VAR_1);
 FUNC_2(VAR_11, VAR_2, VAR_3);

 VAR_13 = VAR_11->cfg.src_port_window_size;
 VAR_15 = FUNC_1(VAR_11, VAR_7);
 VAR_14 = FUNC_1(VAR_11, VAR_10);
 VAR_16 = (VAR_14 & VAR_5) - (VAR_15 & VAR_5);





 if ((VAR_15 ^ VAR_14) & VAR_6)
  VAR_16 += VAR_13;

 VAR_11->rx_status = VAR_12->avail_len - VAR_16;
 FUNC_2(VAR_11, VAR_7, VAR_14);

 FUNC_0(&VAR_12->vd.node);
 FUNC_3(&VAR_12->vd);
}
