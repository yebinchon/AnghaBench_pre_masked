
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ahash_req {int hmac; void* block_sz; int state_sz; int digest; void* processed; void* len; int state; } ;
struct safexcel_ahash_ctx {int alg; int ipad; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 struct safexcel_ahash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct safexcel_ahash_req*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_4)
{
 struct safexcel_ahash_ctx *VAR_5 = FUNC_1(FUNC_2(VAR_4));
 struct safexcel_ahash_req *VAR_6 = FUNC_0(VAR_4);

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));


 FUNC_3(VAR_6->state, VAR_5->ipad, VAR_3);

 VAR_6->len = VAR_2;
 VAR_6->processed = VAR_2;

 VAR_5->alg = VAR_0;
 VAR_6->digest = VAR_1;
 VAR_6->state_sz = VAR_3;
 VAR_6->block_sz = VAR_2;
 VAR_6->hmac = 1;

 return 0;
}
