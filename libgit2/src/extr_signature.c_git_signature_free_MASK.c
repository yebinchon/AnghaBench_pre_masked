
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* email; struct TYPE_4__* name; } ;
typedef TYPE_1__ git_signature ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(git_signature *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->name);
 VAR_0->name = ((void*)0);
 FUNC_0(VAR_0->email);
 VAR_0->email = ((void*)0);
 FUNC_0(VAR_0);
}
