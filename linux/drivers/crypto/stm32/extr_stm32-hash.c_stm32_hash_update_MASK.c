
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_request_ctx {int flags; scalar_t__ total; scalar_t__ bufcnt; scalar_t__ buflen; scalar_t__ offset; int sg; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct stm32_hash_request_ctx*) ;
 int FUNC_2 (struct ahash_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_2)
{
 struct stm32_hash_request_ctx *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_2->nbytes || !(VAR_3->flags & VAR_0))
  return 0;

 VAR_3->total = VAR_2->nbytes;
 VAR_3->sg = VAR_2->src;
 VAR_3->offset = 0;

 if ((VAR_3->bufcnt + VAR_3->total < VAR_3->buflen)) {
  FUNC_1(VAR_3);
  return 0;
 }

 return FUNC_2(VAR_2, VAR_1);
}
