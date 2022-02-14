
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(ntlm_client *VAR_0)
{
 if (!VAR_0->timestamp)
  VAR_0->timestamp = (FUNC_0(((void*)0)) + 11644473600) * 10000000;

 return 1;
}
