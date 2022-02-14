
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cb {scalar_t__ cb_refcnt; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct nl_cb*) ;

void FUNC_2(struct nl_cb *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->cb_refcnt--;

 if (VAR_0->cb_refcnt < 0)
  FUNC_0();

 if (VAR_0->cb_refcnt <= 0)
  FUNC_1(VAR_0);
}
