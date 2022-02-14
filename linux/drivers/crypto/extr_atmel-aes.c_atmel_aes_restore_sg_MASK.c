
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct atmel_aes_dma {int nents; scalar_t__ remainder; struct scatterlist* sg; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_1(const struct atmel_aes_dma *VAR_0)
{
 struct scatterlist *VAR_1 = VAR_0->sg;
 int VAR_2 = VAR_0->nents;

 if (!VAR_0->remainder)
  return;

 while (--VAR_2 > 0 && VAR_1)
  VAR_1 = FUNC_0(VAR_1);

 if (!VAR_1)
  return;

 VAR_1->length += VAR_0->remainder;
}
