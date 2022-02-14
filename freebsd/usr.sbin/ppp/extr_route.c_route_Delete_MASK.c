
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sticky_route {int type; struct sticky_route* next; int dst; } ;
struct ncprange {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sticky_route*) ;
 scalar_t__ FUNC_1 (struct ncprange const*,int *) ;

void
FUNC_2(struct sticky_route **VAR_1, int VAR_2, const struct ncprange *VAR_3)
{
  struct sticky_route *VAR_4;
  int VAR_5 = VAR_2 & VAR_0;

  for (; *VAR_1; VAR_1 = &(*VAR_1)->next) {
    if ((VAR_5 && VAR_5 == ((*VAR_1)->type & VAR_0)) ||
        (!VAR_5 && FUNC_1(VAR_3, &(*VAR_1)->dst))) {
      VAR_4 = *VAR_1;
      *VAR_1 = VAR_4->next;
      FUNC_0(VAR_4);
      break;
    }
  }
}
