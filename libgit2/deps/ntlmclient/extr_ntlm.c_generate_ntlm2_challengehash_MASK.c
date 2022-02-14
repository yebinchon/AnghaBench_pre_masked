
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nonce; } ;
struct TYPE_6__ {int hmac_ctx; TYPE_1__ challenge; } ;
typedef TYPE_2__ ntlm_client ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,size_t*,int ) ;
 int FUNC_4 (int ,unsigned char*,int ) ;
 int FUNC_5 (int ,unsigned char const*,size_t) ;

__attribute__((used)) static bool FUNC_6(
 unsigned char VAR_1[16],
 ntlm_client *VAR_2,
 unsigned char VAR_3[VAR_0],
 const unsigned char *VAR_4,
 size_t VAR_5)
{
 size_t VAR_6 = 16;

 if (!FUNC_2(VAR_2->hmac_ctx) ||
  !FUNC_4(VAR_2->hmac_ctx,
   VAR_3, VAR_0) ||
  !FUNC_5(VAR_2->hmac_ctx,
   (const unsigned char *)&VAR_2->challenge.nonce, 8) ||
  !FUNC_5(VAR_2->hmac_ctx, VAR_4, VAR_5) ||
  !FUNC_3(VAR_1, &VAR_6, VAR_2->hmac_ctx)) {
  FUNC_1(VAR_2, "failed to create HMAC-MD5");
  return 0;
 }

 FUNC_0(VAR_6 == 16);
 return 1;
}
