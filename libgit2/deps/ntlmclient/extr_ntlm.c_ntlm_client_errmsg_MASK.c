
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* errmsg; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (TYPE_1__*) ;

const char *FUNC_1(ntlm_client *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->errmsg ? VAR_0->errmsg : "no error";
}
