
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* ref_name; struct TYPE_4__* remote_url; } ;
typedef TYPE_1__ git_fetchhead_ref ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(git_fetchhead_ref *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->remote_url);
 FUNC_0(VAR_0->ref_name);
 FUNC_0(VAR_0);
}
