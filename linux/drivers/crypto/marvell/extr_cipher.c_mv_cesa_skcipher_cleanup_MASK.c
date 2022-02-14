
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct mv_cesa_skcipher_req {int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct skcipher_request*) ;
 struct mv_cesa_skcipher_req* FUNC_2 (struct skcipher_request*) ;

__attribute__((used)) static inline void FUNC_3(struct skcipher_request *VAR_1)
{
 struct mv_cesa_skcipher_req *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(&VAR_2->base) == VAR_0)
  FUNC_1(VAR_1);
}
