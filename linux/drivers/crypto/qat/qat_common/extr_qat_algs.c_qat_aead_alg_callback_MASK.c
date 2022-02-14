
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct qat_crypto_request {struct aead_request* aead_req; struct qat_alg_aead_ctx* aead_ctx; } ;
struct qat_crypto_instance {int dummy; } ;
struct qat_alg_aead_ctx {struct qat_crypto_instance* inst; } ;
struct TYPE_3__ {int comn_status; } ;
struct icp_qat_fw_la_resp {TYPE_1__ comn_resp; } ;
struct TYPE_4__ {int (* complete ) (TYPE_2__*,int) ;} ;
struct aead_request {TYPE_2__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct qat_crypto_instance*,struct qat_crypto_request*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct icp_qat_fw_la_resp *VAR_2,
      struct qat_crypto_request *VAR_3)
{
 struct qat_alg_aead_ctx *VAR_4 = VAR_3->aead_ctx;
 struct qat_crypto_instance *VAR_5 = VAR_4->inst;
 struct aead_request *VAR_6 = VAR_3->aead_req;
 uint8_t VAR_7 = VAR_2->comn_resp.comn_status;
 int VAR_8 = 0, VAR_9 = FUNC_0(VAR_7);

 FUNC_1(VAR_5, VAR_3);
 if (FUNC_3(VAR_9 != VAR_1))
  VAR_8 = -VAR_0;
 VAR_6->base.complete(&VAR_6->base, VAR_8);
}
