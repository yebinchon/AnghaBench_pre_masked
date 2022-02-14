
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reserved; int build; int minor; int major; } ;
typedef TYPE_1__ ntlm_version ;
typedef int ntlm_client ;
typedef int ntlm_buf ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static inline bool FUNC_3(
 ntlm_client *VAR_0,
 ntlm_buf *VAR_1,
 ntlm_version *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->major) &&
  FUNC_0(VAR_0, VAR_1, VAR_2->minor) &&
  FUNC_1(VAR_0, VAR_1, VAR_2->build) &&
  FUNC_2(VAR_0, VAR_1, VAR_2->reserved);
}
