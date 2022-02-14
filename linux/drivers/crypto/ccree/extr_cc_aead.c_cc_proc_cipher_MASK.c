
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cc_hw_desc {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {int op_type; } ;
struct aead_req_ctx {scalar_t__ cryptlen; TYPE_1__ gen_ctx; } ;


 int VAR_0 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_2 (struct aead_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,int ,int) ;
 int FUNC_5 (struct cc_hw_desc*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct aead_request *VAR_1, struct cc_hw_desc VAR_2[],
      unsigned int *VAR_3, unsigned int VAR_4)
{
 struct aead_req_ctx *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_5->gen_ctx.op_type;
 unsigned int VAR_7 = *VAR_3;

 if (VAR_5->cryptlen == 0)
  return;

 FUNC_2(VAR_1, VAR_2, &VAR_7);
 FUNC_1(VAR_1, VAR_4, VAR_2, &VAR_7);
 if (VAR_6 == VAR_0) {

  FUNC_3(&VAR_2[VAR_7]);
  FUNC_4(&VAR_2[VAR_7], 0, 0xfffff0);
  FUNC_5(&VAR_2[VAR_7], 0, 0, 1);
  VAR_7++;
 }

 *VAR_3 = VAR_7;
}
