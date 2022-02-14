
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int finup; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_2)
{
 struct s5p_hash_reqctx *VAR_3 = FUNC_0(VAR_2);
 int VAR_4, VAR_5;

 VAR_3->finup = 1;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == -VAR_1 || VAR_4 == -VAR_0)
  return VAR_4;






 VAR_5 = FUNC_1(VAR_2);

 return VAR_4 ?: VAR_5;
}
