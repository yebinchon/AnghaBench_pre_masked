
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_module_ops {int dummy; } ;
struct tilcdc_module {char const* name; int list; struct tilcdc_module_ops const* funcs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

void FUNC_2(struct tilcdc_module *VAR_1, const char *VAR_2,
  const struct tilcdc_module_ops *VAR_3)
{
 VAR_1->name = VAR_2;
 VAR_1->funcs = VAR_3;
 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->list, &VAR_0);
}
