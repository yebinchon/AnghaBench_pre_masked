
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {size_t head; int status_dest_micpa; int * desc_ring; } ;


 int FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mic_dma_chan *VAR_0)
{
 FUNC_1(&VAR_0->desc_ring[VAR_0->head], 0,
     VAR_0->status_dest_micpa, 0);
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->desc_ring[VAR_0->head], 0,
     VAR_0->status_dest_micpa, 1);
 FUNC_0(VAR_0);
}
