
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ahash_req {int cache; int state_sz; int state; int digest; int processed; int len; } ;
struct safexcel_ahash_export_state {int cache; int state; int digest; int processed; int len; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_1, void *VAR_2)
{
 struct safexcel_ahash_req *VAR_3 = FUNC_0(VAR_1);
 struct safexcel_ahash_export_state *VAR_4 = VAR_2;

 VAR_4->len = VAR_3->len;
 VAR_4->processed = VAR_3->processed;

 VAR_4->digest = VAR_3->digest;

 FUNC_1(VAR_4->state, VAR_3->state, VAR_3->state_sz);
 FUNC_1(VAR_4->cache, VAR_3->cache, VAR_0);

 return 0;
}
