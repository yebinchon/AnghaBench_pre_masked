
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_hash_state {scalar_t__ buflen_1; scalar_t__ buflen_0; scalar_t__ buf_dma; scalar_t__ current_buf; scalar_t__ ctx_dma_len; scalar_t__ ctx_dma; int final; int finup; int update; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ahash_request *VAR_3)
{
 struct caam_hash_state *VAR_4 = FUNC_0(VAR_3);

 VAR_4->update = VAR_2;
 VAR_4->finup = VAR_1;
 VAR_4->final = VAR_0;

 VAR_4->ctx_dma = 0;
 VAR_4->ctx_dma_len = 0;
 VAR_4->current_buf = 0;
 VAR_4->buf_dma = 0;
 VAR_4->buflen_0 = 0;
 VAR_4->buflen_1 = 0;

 return 0;
}
