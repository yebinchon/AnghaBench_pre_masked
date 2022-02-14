
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct ghash_desc_ctx {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct ahash_request*) ;
 struct shash_desc* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (void*,struct ghash_desc_ctx*,int) ;
 struct ghash_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0, void *VAR_1)
{
 struct ahash_request *VAR_2 = FUNC_0(VAR_0);
 struct shash_desc *VAR_3 = FUNC_1(VAR_2);
 struct ghash_desc_ctx *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_1, VAR_4, sizeof(*VAR_4));
 return 0;

}
