
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sticky_route {int type; int gw; int dst; struct sticky_route* next; } ;
struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sticky_route*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct ncpaddr const*) ;
 int FUNC_4 (int *,struct ncprange const*) ;
 scalar_t__ FUNC_5 (int *,struct ncprange const*) ;

void
FUNC_6(struct sticky_route **VAR_2, int VAR_3, const struct ncprange *VAR_4,
          const struct ncpaddr *VAR_5)
{
  struct sticky_route *VAR_6;
  int VAR_7 = VAR_3 & VAR_1;

  VAR_6 = ((void*)0);
  while (*VAR_2) {
    if ((VAR_7 && VAR_7 == ((*VAR_2)->type & VAR_1)) ||
        (!VAR_7 && FUNC_5(&(*VAR_2)->dst, VAR_4))) {

      FUNC_0(VAR_6);
      VAR_6 = *VAR_2;
      *VAR_2 = VAR_6->next;
    } else
      VAR_2 = &(*VAR_2)->next;
  }

  if (VAR_6 == ((void*)0)) {
    VAR_6 = (struct sticky_route *)FUNC_2(sizeof(struct sticky_route));
    if (VAR_6 == ((void*)0)) {
      FUNC_1(VAR_0, "route_Add: Out of memory!\n");
      return;
    }
  }
  VAR_6->type = VAR_3;
  VAR_6->next = ((void*)0);
  FUNC_4(&VAR_6->dst, VAR_4);
  FUNC_3(&VAR_6->gw, VAR_5);
  *VAR_2 = VAR_6;
}
