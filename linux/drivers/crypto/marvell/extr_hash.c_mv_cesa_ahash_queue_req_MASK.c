
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_engine {int dummy; } ;
struct mv_cesa_ahash_req {int base; } ;
struct ahash_request {int base; int nbytes; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int *,struct mv_cesa_engine*) ;
 int FUNC_3 (struct ahash_request*,int*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 struct mv_cesa_engine* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_0)
{
 struct mv_cesa_ahash_req *VAR_1 = FUNC_0(VAR_0);
 struct mv_cesa_engine *VAR_2;
 bool VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3)
  return 0;

 VAR_2 = FUNC_6(VAR_0->nbytes);
 FUNC_2(&VAR_0->base, VAR_2);

 VAR_4 = FUNC_4(&VAR_0->base, &VAR_1->base);

 if (FUNC_5(&VAR_0->base, VAR_4))
  FUNC_1(VAR_0);

 return VAR_4;
}
