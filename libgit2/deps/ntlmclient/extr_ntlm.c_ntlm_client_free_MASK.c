
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unicode_ctx; int hmac_ctx; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(ntlm_client *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0->hmac_ctx);
 FUNC_3(VAR_0->unicode_ctx);

 FUNC_0(VAR_0);
}
