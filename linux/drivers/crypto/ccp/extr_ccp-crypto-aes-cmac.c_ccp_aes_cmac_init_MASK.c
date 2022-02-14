
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_aes_cmac_req_ctx {int null_msg; } ;
struct ahash_request {int dummy; } ;


 struct ccp_aes_cmac_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ccp_aes_cmac_req_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 struct ccp_aes_cmac_req_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->null_msg = 1;

 return 0;
}
