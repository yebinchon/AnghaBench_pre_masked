
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct cipher_req_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct skcipher_request*,int ) ;
 int FUNC_1 (struct cipher_req_ctx*,int ,int) ;
 struct cipher_req_ctx* FUNC_2 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_3(struct skcipher_request *VAR_1)
{
 struct cipher_req_ctx *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 return FUNC_0(VAR_1, VAR_0);
}
