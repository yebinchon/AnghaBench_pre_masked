
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_async_request {int flags; } ;
struct artpec6_crypto_req_common {void (* complete ) (struct crypto_async_request*) ;struct crypto_async_request* req; int dma; int gfp_flags; } ;
struct artpec6_crypto {int dma_cache; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct artpec6_crypto* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct artpec6_crypto_req_common *VAR_5,
  struct crypto_async_request *VAR_6,
  void (*VAR_7)(struct crypto_async_request *VAR_8),
  struct scatterlist *VAR_9, unsigned int VAR_10)
{
 gfp_t VAR_11;
 struct artpec6_crypto *VAR_12 = FUNC_0(VAR_4);

 VAR_11 = (VAR_6->flags & VAR_0) ?
   VAR_3 : VAR_2;

 VAR_5->gfp_flags = VAR_11;
 VAR_5->dma = FUNC_1(VAR_12->dma_cache, VAR_11);
 if (!VAR_5->dma)
  return -VAR_1;

 VAR_5->req = VAR_6;
 VAR_5->complete = VAR_7;
 return 0;
}
