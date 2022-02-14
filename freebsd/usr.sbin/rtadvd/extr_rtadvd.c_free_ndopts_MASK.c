
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nd_opt {int opt_list; } ;
struct nd_optlist {int dummy; } ;


 struct nd_optlist* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nd_optlist*,int ) ;
 int FUNC_2 (struct nd_optlist*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(union nd_opt *VAR_1)
{
 struct nd_optlist *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->opt_list)) != ((void*)0)) {
  FUNC_1(&VAR_1->opt_list, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
