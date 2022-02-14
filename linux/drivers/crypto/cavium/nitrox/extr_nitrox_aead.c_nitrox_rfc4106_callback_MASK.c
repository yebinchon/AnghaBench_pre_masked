
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nitrox_kcrypt_request {int dummy; } ;
struct TYPE_3__ {struct nitrox_kcrypt_request nkreq; } ;
struct nitrox_rfc4106_rctx {TYPE_1__ base; } ;
struct TYPE_4__ {int (* complete ) (TYPE_2__*,int) ;} ;
struct aead_request {TYPE_2__ base; } ;


 int VAR_0 ;
 struct nitrox_rfc4106_rctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct nitrox_kcrypt_request*) ;
 int FUNC_2 (struct nitrox_kcrypt_request*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1;
 struct nitrox_rfc4106_rctx *VAR_4 = FUNC_0(VAR_3);
 struct nitrox_kcrypt_request *VAR_5 = &VAR_4->base.nkreq;

 FUNC_2(VAR_5);
 FUNC_1(VAR_5);
 if (VAR_2) {
  FUNC_3("request failed status 0x%0x\n", VAR_2);
  VAR_2 = -VAR_0;
 }

 VAR_3->base.complete(&VAR_3->base, VAR_2);
}
