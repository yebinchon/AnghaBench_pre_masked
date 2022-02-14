
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_hash_state {int (* final ) (struct ahash_request*) ;} ;
struct ahash_request {int dummy; } ;


 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 struct caam_hash_state *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->final(VAR_0);
}
