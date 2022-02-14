
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {size_t head; int status_dest_micpa; int * desc_ring; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mic_dma_chan*,int) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (struct mic_dma_chan*) ;
 int FUNC_4 (struct mic_dma_chan*,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct mic_dma_chan *VAR_3, int VAR_4, dma_addr_t VAR_5,
     dma_addr_t VAR_6, size_t VAR_7)
{
 if (VAR_7 && -VAR_2 == FUNC_4(VAR_3, VAR_5, VAR_6, VAR_7)) {
  return -VAR_2;
 } else {

  int VAR_8 = FUNC_0(VAR_3, 3);

  if (VAR_8 < 0)
   return VAR_8;
 }


 if (VAR_4 & VAR_0) {
  FUNC_2(&VAR_3->desc_ring[VAR_3->head], 0,
      VAR_3->status_dest_micpa, 0);
  FUNC_1(VAR_3);
 }

 if (VAR_4 & VAR_1)
  FUNC_3(VAR_3);

 return 0;
}
