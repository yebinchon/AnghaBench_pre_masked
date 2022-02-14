
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mic_dma_chan {int * desc_ring; int desc_ring_micpa; int tx_array; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct mic_dma_chan*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mic_dma_chan *VAR_3)
{
 u64 VAR_4 = VAR_2 * sizeof(*VAR_3->desc_ring);

 FUNC_4(VAR_3->tx_array);
 VAR_4 = FUNC_0(VAR_4, VAR_1);
 FUNC_1(&FUNC_3(VAR_3)->dev, VAR_3->desc_ring_micpa,
    VAR_4, VAR_0);
 FUNC_2(VAR_3->desc_ring);
 VAR_3->desc_ring = ((void*)0);
}
