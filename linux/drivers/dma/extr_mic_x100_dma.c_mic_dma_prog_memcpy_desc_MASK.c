
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_dma_chan {size_t head; int * desc_ring; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {size_t max_xfer_size; } ;


 int FUNC_0 (struct mic_dma_chan*,int) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 int FUNC_2 (int *,int ,int ,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 TYPE_1__* FUNC_4 (struct mic_dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct mic_dma_chan *VAR_0, dma_addr_t VAR_1,
        dma_addr_t VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 size_t VAR_5 = FUNC_4(VAR_0)->max_xfer_size;

 int VAR_6 = VAR_3 / VAR_5 + 3;
 int VAR_7;

 if (VAR_3 % VAR_5)
  VAR_6++;

 VAR_7 = FUNC_0(VAR_0, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 do {
  VAR_4 = FUNC_3(VAR_3, VAR_5);
  FUNC_2(&VAR_0->desc_ring[VAR_0->head],
        VAR_1, VAR_2, VAR_4);
  FUNC_1(VAR_0);
  VAR_3 -= VAR_4;
  VAR_2 = VAR_2 + VAR_4;
  VAR_1 = VAR_1 + VAR_4;
 } while (VAR_3 > 0);
 return 0;
}
