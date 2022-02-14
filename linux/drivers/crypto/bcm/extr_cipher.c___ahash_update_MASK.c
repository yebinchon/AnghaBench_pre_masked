
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_reqctx_s {scalar_t__ src_sent; int total_todo; } ;
struct ahash_request {scalar_t__ nbytes; } ;


 int FUNC_0 (struct ahash_request*) ;
 struct iproc_reqctx_s* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct iproc_reqctx_s *VAR_1 = FUNC_1(VAR_0);

 FUNC_2("ahash_update() nbytes:%u\n", VAR_0->nbytes);

 if (!VAR_0->nbytes)
  return 0;
 VAR_1->total_todo += VAR_0->nbytes;
 VAR_1->src_sent = 0;

 return FUNC_0(VAR_0);
}
