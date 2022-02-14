
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ nonce; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (scalar_t__*,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

__attribute__((used)) static bool FUNC_2(ntlm_client *VAR_0)
{
 unsigned char VAR_1[8];

 if (VAR_0->nonce)
  return 1;

 if (!FUNC_1(VAR_0, VAR_1, 8))
  return 0;

 FUNC_0(&VAR_0->nonce, VAR_1, sizeof(uint64_t));
 return 1;
}
