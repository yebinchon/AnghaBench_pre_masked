
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct stm32_dma_sg_req {size_t len; } ;
struct stm32_dma_desc {int num_sgs; TYPE_2__* sg_req; } ;
struct stm32_dma_chan {size_t next_sg; size_t mem_burst; size_t mem_width; TYPE_1__* desc; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {size_t num_sgs; int cyclic; struct stm32_dma_sg_req* sg_req; } ;


 size_t FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (struct stm32_dma_chan*) ;

__attribute__((used)) static size_t FUNC_2(struct stm32_dma_chan *VAR_0,
         struct stm32_dma_desc *VAR_1,
         u32 VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5;
 u32 VAR_6 = VAR_2;
 struct stm32_dma_sg_req *VAR_7 = &VAR_0->desc->sg_req[VAR_0->next_sg];
 int VAR_8;
 VAR_5 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_0)) {
  VAR_6++;
  if (VAR_6 == VAR_0->desc->num_sgs)
   VAR_6 = 0;
  VAR_5 = VAR_7->len;
 }
 if (!VAR_0->desc->cyclic || VAR_6 != 0)
  for (VAR_8 = VAR_6; VAR_8 < VAR_1->num_sgs; VAR_8++)
   VAR_5 += VAR_1->sg_req[VAR_8].len;

 if (!VAR_0->mem_burst)
  return VAR_5;

 VAR_4 = VAR_0->mem_burst * VAR_0->mem_width;
 VAR_3 = VAR_5 % VAR_4;
 if (VAR_3)
  VAR_5 = VAR_5 - VAR_3 + VAR_4;

 return VAR_5;
}
