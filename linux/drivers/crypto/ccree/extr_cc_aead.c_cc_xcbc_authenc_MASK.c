
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int flow_mode; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {int op_type; } ;
struct aead_req_ctx {scalar_t__ is_single_pass; TYPE_1__ gen_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 unsigned int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 (struct aead_request*,int ,struct cc_hw_desc*,unsigned int*,int) ;
 int FUNC_3 (struct aead_request*,struct cc_hw_desc*,unsigned int*,unsigned int) ;
 int FUNC_4 (struct aead_request*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_5 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_6 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_7 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_8 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 struct cc_aead_ctx* FUNC_9 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_10 (struct aead_request*) ;

__attribute__((used)) static void
FUNC_11(struct aead_request *VAR_2, struct cc_hw_desc VAR_3[],
  unsigned int *VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_10(VAR_2);
 struct cc_aead_ctx *VAR_6 = FUNC_9(VAR_5);
 struct aead_req_ctx *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = VAR_7->gen_ctx.op_type;
 unsigned int VAR_9 =
  FUNC_1(VAR_8, VAR_6->flow_mode,
     VAR_7->is_single_pass);

 if (VAR_7->is_single_pass) {



  FUNC_8(VAR_2, VAR_3, VAR_4);
  FUNC_7(VAR_2, VAR_3, VAR_4);
  FUNC_6(VAR_2, VAR_3, VAR_4);
  FUNC_4(VAR_2, VAR_9, VAR_3, VAR_4);
  FUNC_5(VAR_2, VAR_3, VAR_4);
  return;
 }






 if (VAR_8 == VAR_1) {

  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_9);

  FUNC_8(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4, VAR_8);
  FUNC_5(VAR_2, VAR_3, VAR_4);
 } else {

  FUNC_8(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4, VAR_8);

  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_9);



  FUNC_5(VAR_2, VAR_3, VAR_4);
 }
}
