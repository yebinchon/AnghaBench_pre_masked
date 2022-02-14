
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cb {int cb_refcnt; } ;
typedef enum nl_cb_kind { ____Placeholder_nl_cb_kind } nl_cb_kind ;


 int VAR_0 ;
 int VAR_1 ;
 struct nl_cb* FUNC_0 (int,int) ;
 int FUNC_1 (struct nl_cb*,int,int *,int *) ;
 int FUNC_2 (struct nl_cb*,int,int,int *,int *) ;

struct nl_cb *FUNC_3(enum nl_cb_kind VAR_2)
{
 int VAR_3;
 struct nl_cb *VAR_4;

 if (VAR_2 < 0 || VAR_2 > VAR_0)
  return ((void*)0);

 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->cb_refcnt = 1;

 for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++)
  FUNC_2(VAR_4, VAR_3, VAR_2, ((void*)0), ((void*)0));

 FUNC_1(VAR_4, VAR_2, ((void*)0), ((void*)0));

 return VAR_4;
}
