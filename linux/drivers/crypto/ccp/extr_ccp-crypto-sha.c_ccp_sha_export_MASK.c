
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_sha_req_ctx {struct ccp_sha_exp_ctx* buf; int buf_count; struct ccp_sha_exp_ctx* ctx; int first; int msg_bits; int type; } ;
struct ccp_sha_exp_ctx {void* ctx; void* buf; int buf_count; int first; int msg_bits; int type; } ;
struct ahash_request {int dummy; } ;
typedef int state ;


 struct ccp_sha_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (void*,struct ccp_sha_exp_ctx*,int) ;
 int FUNC_2 (struct ccp_sha_exp_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, void *VAR_1)
{
 struct ccp_sha_req_ctx *VAR_2 = FUNC_0(VAR_0);
 struct ccp_sha_exp_ctx VAR_3;


 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.type = VAR_2->type;
 VAR_3.msg_bits = VAR_2->msg_bits;
 VAR_3.first = VAR_2->first;
 FUNC_1(VAR_3.ctx, VAR_2->ctx, sizeof(VAR_3.ctx));
 VAR_3.buf_count = VAR_2->buf_count;
 FUNC_1(VAR_3.buf, VAR_2->buf, sizeof(VAR_3.buf));


 FUNC_1(VAR_1, &VAR_3, sizeof(VAR_3));

 return 0;
}
