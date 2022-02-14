
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int finup; scalar_t__ bufcnt; int digcnt; scalar_t__ error; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_2)
{
 struct s5p_hash_reqctx *VAR_3 = FUNC_0(VAR_2);

 VAR_3->finup = 1;
 if (VAR_3->error)
  return -VAR_1;

 if (!VAR_3->digcnt && VAR_3->bufcnt < VAR_0)
  return FUNC_2(VAR_2);

 return FUNC_1(VAR_2, 0);
}
