
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_dma_desc {unsigned int count; int type; int desc; int desc_phys; } ;
struct jz4780_dma_chan {int desc_pool; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct jz4780_dma_desc*) ;
 struct jz4780_dma_desc* FUNC_2 (int,int ) ;

__attribute__((used)) static struct jz4780_dma_desc *FUNC_3(
 struct jz4780_dma_chan *VAR_2, unsigned int VAR_3,
 enum dma_transaction_type VAR_4)
{
 struct jz4780_dma_desc *VAR_5;

 if (VAR_3 > VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->desc = FUNC_0(VAR_2->desc_pool, VAR_0,
        &VAR_5->desc_phys);
 if (!VAR_5->desc) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_5->count = VAR_3;
 VAR_5->type = VAR_4;
 return VAR_5;
}
