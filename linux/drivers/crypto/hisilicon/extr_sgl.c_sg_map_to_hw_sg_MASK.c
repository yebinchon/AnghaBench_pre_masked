
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dma_length; int dma_address; } ;
struct acc_hw_sge {int len; int buf; } ;



__attribute__((used)) static void FUNC_0(struct scatterlist *VAR_0,
       struct acc_hw_sge *VAR_1)
{
 VAR_1->buf = VAR_0->dma_address;
 VAR_1->len = VAR_0->dma_length;
}
