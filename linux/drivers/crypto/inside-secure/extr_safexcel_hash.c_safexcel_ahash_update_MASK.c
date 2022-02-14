
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ahash_req {scalar_t__ last_req; int finish; int len; } ;
struct ahash_request {scalar_t__ nbytes; } ;


 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct safexcel_ahash_req *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;


 if (!VAR_0->nbytes)
  return 0;


 VAR_2 = FUNC_1(VAR_0);


 VAR_1->len += VAR_0->nbytes;





 if ((VAR_2 && !VAR_1->finish) || VAR_1->last_req)
  return FUNC_2(VAR_0);

 return 0;
}
