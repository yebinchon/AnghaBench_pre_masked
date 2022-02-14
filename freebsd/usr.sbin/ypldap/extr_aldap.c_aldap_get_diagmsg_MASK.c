
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * diagmsg; } ;
struct TYPE_4__ {TYPE_1__ res; } ;
struct aldap_message {TYPE_2__ body; } ;


 int FUNC_0 (int *,char**) ;
 char* FUNC_1 (char*) ;

char *
FUNC_2(struct aldap_message *VAR_0)
{
 char *VAR_1;

 if (VAR_0->body.res.diagmsg == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_0->body.res.diagmsg, &VAR_1) == -1)
  return ((void*)0);

 return FUNC_1(VAR_1);
}
