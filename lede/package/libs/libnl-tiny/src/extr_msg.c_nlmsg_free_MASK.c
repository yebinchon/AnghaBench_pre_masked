
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {scalar_t__ nm_refcnt; struct nl_msg* nm_nlh; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*,struct nl_msg*,...) ;
 int FUNC_2 (struct nl_msg*) ;

void FUNC_3(struct nl_msg *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->nm_refcnt--;
 FUNC_1(4, "Returned message reference %p, %d remaining\n",
        VAR_0, VAR_0->nm_refcnt);

 if (VAR_0->nm_refcnt < 0)
  FUNC_0();

 if (VAR_0->nm_refcnt <= 0) {
  FUNC_2(VAR_0->nm_nlh);
  FUNC_2(VAR_0);
  FUNC_1(2, "msg %p: Freed\n", VAR_0);
 }
}
