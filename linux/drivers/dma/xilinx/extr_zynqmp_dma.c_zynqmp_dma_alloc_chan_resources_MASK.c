
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_submit; } ;
struct zynqmp_dma_desc_sw {scalar_t__ src_p; scalar_t__ dst_p; struct zynqmp_dma_desc_ll* src_v; struct zynqmp_dma_desc_ll* dst_v; int node; TYPE_1__ async_tx; } ;
struct zynqmp_dma_desc_ll {int dummy; } ;
struct zynqmp_dma_chan {int idle; int desc_free_cnt; int desc_size; scalar_t__ desc_pool_p; scalar_t__ desc_pool_v; struct zynqmp_dma_desc_sw* sw_desc_pool; int dev; int free_list; int common; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zynqmp_dma_chan*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 struct zynqmp_dma_desc_sw* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 struct zynqmp_dma_chan* FUNC_7 (struct dma_chan*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_4)
{
 struct zynqmp_dma_chan *VAR_5 = FUNC_7(VAR_4);
 struct zynqmp_dma_desc_sw *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_6(VAR_5->dev);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->sw_desc_pool = FUNC_4(VAR_2, sizeof(*VAR_6),
         VAR_1);
 if (!VAR_5->sw_desc_pool)
  return -VAR_0;

 VAR_5->idle = 1;
 VAR_5->desc_free_cnt = VAR_2;

 FUNC_0(&VAR_5->free_list);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->sw_desc_pool + VAR_7;
  FUNC_3(&VAR_6->async_tx, &VAR_5->common);
  VAR_6->async_tx.tx_submit = VAR_3;
  FUNC_5(&VAR_6->node, &VAR_5->free_list);
 }

 VAR_5->desc_pool_v = FUNC_2(VAR_5->dev,
            (2 * VAR_5->desc_size * VAR_2),
            &VAR_5->desc_pool_p, VAR_1);
 if (!VAR_5->desc_pool_v)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->sw_desc_pool + VAR_7;
  VAR_6->src_v = (struct zynqmp_dma_desc_ll *) (VAR_5->desc_pool_v +
     (VAR_7 * FUNC_1(VAR_5) * 2));
  VAR_6->dst_v = (struct zynqmp_dma_desc_ll *) (VAR_6->src_v + 1);
  VAR_6->src_p = VAR_5->desc_pool_p +
    (VAR_7 * FUNC_1(VAR_5) * 2);
  VAR_6->dst_p = VAR_6->src_p + FUNC_1(VAR_5);
 }

 return VAR_2;
}
