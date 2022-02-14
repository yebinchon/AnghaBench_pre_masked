
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dw_dma_chan {size_t block_size; } ;



__attribute__((used)) static u32 FUNC_0(struct dw_dma_chan *VAR_0,
         size_t VAR_1, unsigned int VAR_2, size_t *VAR_3)
{
 u32 VAR_4;

 if ((VAR_1 >> VAR_2) > VAR_0->block_size) {
  VAR_4 = VAR_0->block_size;
  *VAR_3 = VAR_0->block_size << VAR_2;
 } else {
  VAR_4 = VAR_1 >> VAR_2;
  *VAR_3 = VAR_1;
 }

 return VAR_4;
}
