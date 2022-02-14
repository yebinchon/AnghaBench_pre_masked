
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_submit; } ;
struct msgdma_sw_desc {int node; TYPE_1__ async_tx; } ;
struct msgdma_device {int idle; int desc_free_cnt; int free_list; int dmachan; struct msgdma_sw_desc* sw_desq; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 struct msgdma_sw_desc* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 struct msgdma_device* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_4)
{
 struct msgdma_device *VAR_5 = FUNC_4(VAR_4);
 struct msgdma_sw_desc *VAR_6;
 int VAR_7;

 VAR_5->sw_desq = FUNC_2(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_5->sw_desq)
  return -VAR_0;

 VAR_5->idle = 1;
 VAR_5->desc_free_cnt = VAR_2;

 FUNC_0(&VAR_5->free_list);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->sw_desq + VAR_7;
  FUNC_1(&VAR_6->async_tx, &VAR_5->dmachan);
  VAR_6->async_tx.tx_submit = VAR_3;
  FUNC_3(&VAR_6->node, &VAR_5->free_list);
 }

 return VAR_2;
}
