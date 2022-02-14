
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cb {int cb_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct nl_cb*,struct nl_cb*,int) ;
 struct nl_cb* FUNC_1 (int ) ;

struct nl_cb *FUNC_2(struct nl_cb *VAR_1)
{
 struct nl_cb *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1, sizeof(*VAR_1));
 VAR_2->cb_refcnt = 1;

 return VAR_2;
}
