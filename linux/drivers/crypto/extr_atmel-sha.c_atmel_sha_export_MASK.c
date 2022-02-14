
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (void*,struct atmel_sha_reqctx const*,int) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0, void *VAR_1)
{
 const struct atmel_sha_reqctx *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_2, sizeof(*VAR_2));
 return 0;
}
