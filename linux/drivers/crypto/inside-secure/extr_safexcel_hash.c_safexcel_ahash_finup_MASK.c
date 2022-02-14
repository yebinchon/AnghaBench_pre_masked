
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ahash_req {int finish; } ;
struct ahash_request {int dummy; } ;


 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct safexcel_ahash_req *VAR_1 = FUNC_0(VAR_0);

 VAR_1->finish = 1;

 FUNC_2(VAR_0);
 return FUNC_1(VAR_0);
}
