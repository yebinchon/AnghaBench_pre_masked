
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct mv_cesa_skcipher_std_req {scalar_t__ offset; scalar_t__ size; } ;
struct mv_cesa_skcipher_req {struct mv_cesa_skcipher_std_req std; } ;


 struct mv_cesa_skcipher_req* FUNC_0 (struct skcipher_request*) ;

__attribute__((used)) static inline void
FUNC_1(struct skcipher_request *VAR_0)
{
 struct mv_cesa_skcipher_req *VAR_1 = FUNC_0(VAR_0);
 struct mv_cesa_skcipher_std_req *VAR_2 = &VAR_1->std;

 VAR_2->size = 0;
 VAR_2->offset = 0;
}
