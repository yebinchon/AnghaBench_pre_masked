
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _dom_binding {struct _dom_binding* dom_pnext; } ;


 int FUNC_0 (struct _dom_binding*) ;
 struct _dom_binding* VAR_0 ;

void
FUNC_1(void)
{
 struct _dom_binding *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->dom_pnext)
  FUNC_0(VAR_1);
}
