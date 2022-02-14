
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_aes_cmac_req_ctx {struct ccp_aes_cmac_exp_ctx* buf; int buf_count; struct ccp_aes_cmac_exp_ctx* iv; int null_msg; } ;
struct ccp_aes_cmac_exp_ctx {void const* iv; void const* buf; int buf_count; int null_msg; } ;
struct ahash_request {int dummy; } ;
typedef int state ;


 struct ccp_aes_cmac_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ccp_aes_cmac_exp_ctx*,void const*,int) ;
 int FUNC_2 (struct ccp_aes_cmac_req_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct ccp_aes_cmac_req_ctx *VAR_2 = FUNC_0(VAR_0);
 struct ccp_aes_cmac_exp_ctx VAR_3;


 FUNC_1(&VAR_3, VAR_1, sizeof(VAR_3));

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->null_msg = VAR_3.null_msg;
 FUNC_1(VAR_2->iv, VAR_3.iv, sizeof(VAR_2->iv));
 VAR_2->buf_count = VAR_3.buf_count;
 FUNC_1(VAR_2->buf, VAR_3.buf, sizeof(VAR_2->buf));

 return 0;
}
