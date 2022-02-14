
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ntlm_des_block ;
struct TYPE_4__ {int nonce; } ;
struct TYPE_5__ {int lm_response_len; int * lm_response; int password; TYPE_1__ challenge; } ;
typedef TYPE_2__ ntlm_client ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static bool FUNC_4(ntlm_client *VAR_0)
{
 ntlm_des_block VAR_1[2], VAR_2[3], VAR_3[3];
 ntlm_des_block *VAR_4 = (ntlm_des_block *)&VAR_0->challenge.nonce;


 if (!FUNC_1(VAR_1, VAR_0->password))
  return 0;


 FUNC_0(VAR_2, VAR_1);


 if (!FUNC_3(&VAR_3[0], VAR_4, &VAR_2[0]) ||
  !FUNC_3(&VAR_3[1], VAR_4, &VAR_2[1]) ||
  !FUNC_3(&VAR_3[2], VAR_4, &VAR_2[2]))
  return 0;

 FUNC_2(&VAR_0->lm_response[0], VAR_3[0], 8);
 FUNC_2(&VAR_0->lm_response[8], VAR_3[1], 8);
 FUNC_2(&VAR_0->lm_response[16], VAR_3[2], 8);

 VAR_0->lm_response_len = sizeof(VAR_0->lm_response);

 return 1;
}
