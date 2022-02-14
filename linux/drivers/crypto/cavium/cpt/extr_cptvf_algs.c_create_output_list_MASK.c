
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpt_request_info {int outcnt; } ;
struct cvm_req_ctx {struct cpt_request_info cpt_req; } ;
struct ablkcipher_request {int nbytes; int dst; int info; } ;


 struct cvm_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct cpt_request_info*,int ,int ,int *) ;
 int FUNC_2 (struct cpt_request_info*,int ,int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct ablkcipher_request *VAR_0,
          u32 VAR_1)
{
 struct cvm_req_ctx *VAR_2 = FUNC_0(VAR_0);
 struct cpt_request_info *VAR_3 = &VAR_2->cpt_req;
 u32 VAR_4 = 0;
 FUNC_2(VAR_3, VAR_0->info, VAR_1, &VAR_4);
 FUNC_1(VAR_3, VAR_0->dst, VAR_0->nbytes, &VAR_4);
 VAR_3->outcnt = VAR_4;
}
