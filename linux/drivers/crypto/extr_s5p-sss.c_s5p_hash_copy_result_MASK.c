
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int nregs; int digest; } ;
struct ahash_request {int result; } ;


 int VAR_0 ;
 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ahash_request *VAR_1)
{
 const struct s5p_hash_reqctx *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_1->result)
  return;

 FUNC_1(VAR_1->result, VAR_2->digest, VAR_2->nregs * VAR_0);
}
