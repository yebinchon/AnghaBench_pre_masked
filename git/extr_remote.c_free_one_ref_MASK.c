
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* symref; struct ref* remote_status; struct ref* peer_ref; } ;


 int FUNC_0 (struct ref*) ;

void FUNC_1(struct ref *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(VAR_0->peer_ref);
 FUNC_0(VAR_0->remote_status);
 FUNC_0(VAR_0->symref);
 FUNC_0(VAR_0);
}
