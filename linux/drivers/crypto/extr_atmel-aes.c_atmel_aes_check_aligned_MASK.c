
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {size_t offset; size_t length; } ;
struct atmel_aes_dma {int nents; size_t remainder; } ;
struct atmel_aes_dev {TYPE_1__* ctx; } ;
struct TYPE_2__ {int block_size; } ;


 int FUNC_0 (size_t,int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static bool FUNC_2(struct atmel_aes_dev *VAR_0,
        struct scatterlist *VAR_1,
        size_t VAR_2,
        struct atmel_aes_dma *VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_2, VAR_0->ctx->block_size))
  return 0;

 for (VAR_4 = 0; VAR_1; VAR_1 = FUNC_1(VAR_1), ++VAR_4) {
  if (!FUNC_0(VAR_1->offset, sizeof(u32)))
   return 0;

  if (VAR_2 <= VAR_1->length) {
   if (!FUNC_0(VAR_2, VAR_0->ctx->block_size))
    return 0;

   VAR_3->nents = VAR_4+1;
   VAR_3->remainder = VAR_1->length - VAR_2;
   VAR_1->length = VAR_2;
   return 1;
  }

  if (!FUNC_0(VAR_1->length, VAR_0->ctx->block_size))
   return 0;

  VAR_2 -= VAR_1->length;
 }

 return 0;
}
