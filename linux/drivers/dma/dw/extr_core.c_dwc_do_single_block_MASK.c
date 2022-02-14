
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int device; } ;
struct dw_dma_chan {TYPE_1__* tx_node_active; int mask; TYPE_2__ chan; } ;
struct dw_dma {int dummy; } ;
struct dw_desc {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dw_dma*,int ,int ) ;
 int FUNC_1 (struct dw_dma_chan*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct dw_desc*,int) ;
 int VAR_8 ;
 struct dw_dma* FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct dw_dma_chan *VAR_9,
           struct dw_desc *VAR_10)
{
 struct dw_dma *VAR_11 = FUNC_3(VAR_9->chan.device);
 u32 VAR_12;





 VAR_12 = FUNC_2(VAR_10, VAR_12) | VAR_4;

 FUNC_1(VAR_9, VAR_5, FUNC_2(VAR_10, VAR_8));
 FUNC_1(VAR_9, VAR_3, FUNC_2(VAR_10, VAR_7));
 FUNC_1(VAR_9, VAR_2, VAR_12);
 FUNC_1(VAR_9, VAR_1, FUNC_2(VAR_10, VAR_6));
 FUNC_0(VAR_11, VAR_0, VAR_9->mask);


 VAR_9->tx_node_active = VAR_9->tx_node_active->next;
}
