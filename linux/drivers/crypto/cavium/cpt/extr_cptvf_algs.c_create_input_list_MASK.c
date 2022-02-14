
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpt_request_info {int incnt; } ;
struct cvm_req_ctx {struct cpt_request_info cpt_req; } ;
struct ablkcipher_request {int nbytes; int src; int info; } ;


 struct cvm_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int *) ;
 int FUNC_2 (struct cpt_request_info*,int ,int ,int *) ;
 int FUNC_3 (struct cpt_request_info*,int ,int ,int *) ;

__attribute__((used)) static inline u32 FUNC_4(struct ablkcipher_request *VAR_0, u32 VAR_1,
        u32 VAR_2)
{
 struct cvm_req_ctx *VAR_3 = FUNC_0(VAR_0);
 struct cpt_request_info *VAR_4 = &VAR_3->cpt_req;
 u32 VAR_5 = 0;

 FUNC_1(VAR_0, VAR_1, &VAR_5);
 FUNC_3(VAR_4, VAR_0->info, VAR_2, &VAR_5);
 FUNC_2(VAR_4, VAR_0->src, VAR_0->nbytes, &VAR_5);
 VAR_4->incnt = VAR_5;

 return 0;
}
