
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {scalar_t__ bufcnt; scalar_t__ buffer; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 scalar_t__ VAR_0 ;
 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int) ;
 int FUNC_2 (scalar_t__,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_1)
{
 struct s5p_hash_reqctx *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_1->nbytes)
  return 0;

 if (VAR_2->bufcnt + VAR_1->nbytes <= VAR_0) {
  FUNC_2(VAR_2->buffer + VAR_2->bufcnt, VAR_1->src,
      0, VAR_1->nbytes, 0);
  VAR_2->bufcnt += VAR_1->nbytes;
  return 0;
 }

 return FUNC_1(VAR_1, 1);
}
