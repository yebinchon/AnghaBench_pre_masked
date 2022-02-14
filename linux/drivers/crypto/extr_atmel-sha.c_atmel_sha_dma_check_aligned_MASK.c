
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {size_t offset; size_t length; } ;
struct atmel_sha_reqctx {size_t block_size; } ;
struct atmel_sha_dma {int nents; size_t last_sg_length; } ;
struct atmel_sha_dev {struct ahash_request* req; struct atmel_sha_dma dma_lch_in; } ;
struct ahash_request {int dummy; } ;


 size_t FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,size_t) ;
 struct atmel_sha_reqctx* FUNC_2 (struct ahash_request*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static bool FUNC_4(struct atmel_sha_dev *VAR_0,
     struct scatterlist *VAR_1,
     size_t VAR_2)
{
 struct atmel_sha_dma *VAR_3 = &VAR_0->dma_lch_in;
 struct ahash_request *VAR_4 = VAR_0->req;
 struct atmel_sha_reqctx *VAR_5 = FUNC_2(VAR_4);
 size_t VAR_6 = VAR_5->block_size;
 int VAR_7;

 for (VAR_7 = 0; VAR_1; VAR_1 = FUNC_3(VAR_1), ++VAR_7) {
  if (!FUNC_1(VAR_1->offset, sizeof(u32)))
   return 0;





  if (VAR_2 <= VAR_1->length) {
   VAR_3->nents = VAR_7 + 1;
   VAR_3->last_sg_length = VAR_1->length;
   VAR_1->length = FUNC_0(VAR_2, sizeof(u32));
   return 1;
  }


  if (!FUNC_1(VAR_1->length, VAR_6))
   return 0;

  VAR_2 -= VAR_1->length;
 }

 return 0;
}
