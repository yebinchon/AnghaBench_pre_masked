
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char uint64_t ;
struct TYPE_5__ {int nonce; } ;
struct TYPE_6__ {int lm_response_len; int * lm_response; int hmac_ctx; TYPE_1__ challenge; int nonce; } ;
typedef TYPE_2__ ntlm_client ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,size_t*,int ) ;
 int FUNC_6 (int ,unsigned char*,int ) ;
 int FUNC_7 (int ,unsigned char const*,int) ;

__attribute__((used)) static bool FUNC_8(ntlm_client *VAR_1,
 unsigned char VAR_2[VAR_0])
{
 unsigned char VAR_3[16];
 size_t VAR_4 = 16;
 uint64_t VAR_5;

 VAR_5 = FUNC_1(VAR_1->nonce);

 if (!FUNC_4(VAR_1->hmac_ctx) ||
  !FUNC_6(VAR_1->hmac_ctx,
   VAR_2, VAR_0) ||
  !FUNC_7(VAR_1->hmac_ctx,
   (const unsigned char *)&VAR_1->challenge.nonce, 8) ||
  !FUNC_7(VAR_1->hmac_ctx,
   (const unsigned char *)&VAR_5, 8) ||
  !FUNC_5(VAR_3, &VAR_4, VAR_1->hmac_ctx)) {
  FUNC_3(VAR_1, "failed to create HMAC-MD5");
  return 0;
 }

 FUNC_0(VAR_4 == 16);

 FUNC_2(&VAR_1->lm_response[0], VAR_3, 16);
 FUNC_2(&VAR_1->lm_response[16], &VAR_5, 8);

 VAR_1->lm_response_len = 24;
 return 1;
}
