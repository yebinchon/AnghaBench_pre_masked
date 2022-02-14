
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ntlm_client_flags ;
struct TYPE_7__ {int * unicode_ctx; int * hmac_ctx; int flags; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*) ;

ntlm_client *FUNC_7(ntlm_client_flags VAR_0)
{
 ntlm_client *VAR_1 = ((void*)0);

 if ((VAR_1 = FUNC_1(sizeof(ntlm_client))) == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_1, 0, sizeof(ntlm_client));

 VAR_1->flags = VAR_0;

 if ((VAR_1->hmac_ctx = FUNC_4()) == ((void*)0) ||
  (VAR_1->unicode_ctx = FUNC_6(VAR_1)) == ((void*)0)) {
  FUNC_3(VAR_1->hmac_ctx);
  FUNC_5(VAR_1->unicode_ctx);
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
