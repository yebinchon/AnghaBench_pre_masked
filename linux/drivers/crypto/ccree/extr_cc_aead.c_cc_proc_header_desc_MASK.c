
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_hw_desc {int dummy; } ;
struct aead_request {int dummy; } ;
struct aead_req_ctx {scalar_t__ assoclen; } ;


 int VAR_0 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ,struct cc_hw_desc*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct aead_request *VAR_1,
    struct cc_hw_desc VAR_2[],
    unsigned int *VAR_3)
{
 struct aead_req_ctx *VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = *VAR_3;


 if (VAR_4->assoclen > 0)
  FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_5);


 *VAR_3 = VAR_5;
}
