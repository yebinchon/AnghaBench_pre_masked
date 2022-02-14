
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct mv_cesa_req {int engine; } ;
struct mv_cesa_skcipher_req {struct mv_cesa_req base; } ;


 int FUNC_0 (struct mv_cesa_req*,int ) ;
 struct mv_cesa_skcipher_req* FUNC_1 (struct skcipher_request*) ;

__attribute__((used)) static inline void
FUNC_2(struct skcipher_request *VAR_0)
{
 struct mv_cesa_skcipher_req *VAR_1 = FUNC_1(VAR_0);
 struct mv_cesa_req *VAR_2 = &VAR_1->base;

 FUNC_0(VAR_2, VAR_2->engine);
}
