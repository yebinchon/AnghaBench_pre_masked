
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cc_hw_desc {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ op_type; } ;
struct aead_req_ctx {scalar_t__ assoclen; scalar_t__ cryptlen; scalar_t__ plaintext_authenticate_only; TYPE_1__ gen_ctx; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_2 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_3 (struct aead_request*,int ,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_4 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_5 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_5, struct cc_hw_desc VAR_6[],
    unsigned int *VAR_7)
{
 struct aead_req_ctx *VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9;

 if (VAR_8->gen_ctx.op_type == VAR_4) {
  VAR_9 = VAR_0;
 } else {
  VAR_9 = VAR_1;
 }


 if (VAR_8->plaintext_authenticate_only) {
  FUNC_1(VAR_5, VAR_2, VAR_6, VAR_7);
  FUNC_5(VAR_5, VAR_6, VAR_7);

  FUNC_3(VAR_5, VAR_3, VAR_6, VAR_7);
  FUNC_4(VAR_5, VAR_6, VAR_7);
  FUNC_2(VAR_5, VAR_6, VAR_7);
  return 0;
 }


 FUNC_5(VAR_5, VAR_6, VAR_7);

 if (VAR_8->assoclen > 0)
  FUNC_3(VAR_5, VAR_3, VAR_6, VAR_7);
 FUNC_4(VAR_5, VAR_6, VAR_7);

 if (VAR_8->cryptlen)
  FUNC_1(VAR_5, VAR_9, VAR_6, VAR_7);
 FUNC_2(VAR_5, VAR_6, VAR_7);

 return 0;
}
