
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct ahash_request*) ;
 struct shash_desc* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct shash_desc*,void*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, void *VAR_1)
{
 struct ahash_request *VAR_2 = FUNC_0(VAR_0);
 struct shash_desc *VAR_3 = FUNC_1(VAR_2);

 return FUNC_2(VAR_3, VAR_1);
}
