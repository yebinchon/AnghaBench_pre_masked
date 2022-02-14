
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sticky_route {int type; int gw; int dst; struct sticky_route* next; } ;
struct prompt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct prompt*,char*,...) ;
 int FUNC_4 (char const*) ;

void
FUNC_5(struct prompt *VAR_8, struct sticky_route *VAR_9, const char *VAR_10,
                 int VAR_11)
{
  int VAR_12 = FUNC_4(VAR_10);

  if (VAR_12 + 2 > VAR_11)
    FUNC_3(VAR_8, "%s:\n%*s", VAR_10, VAR_11, "");
  else
    FUNC_3(VAR_8, "%s:%*s", VAR_10, VAR_11 - VAR_12 - 1, "");

  for (; VAR_9; VAR_9 = VAR_9->next) {
    FUNC_3(VAR_8, "%*sadd ", VAR_12 ? 0 : VAR_11, "");
    VAR_12 = 0;
    if (VAR_9->type & VAR_4)
      FUNC_3(VAR_8, "MYADDR");
    else if (VAR_9->type & VAR_5)
      FUNC_3(VAR_8, "MYADDR6");
    else if (VAR_9->type & VAR_2)
      FUNC_3(VAR_8, "HISADDR");
    else if (VAR_9->type & VAR_3)
      FUNC_3(VAR_8, "HISADDR6");
    else if (VAR_9->type & VAR_0)
      FUNC_3(VAR_8, "DNS0");
    else if (VAR_9->type & VAR_1)
      FUNC_3(VAR_8, "DNS1");
    else if (FUNC_1(&VAR_9->dst))
      FUNC_3(VAR_8, "default");
    else
      FUNC_3(VAR_8, "%s", FUNC_2(&VAR_9->dst));

    if (VAR_9->type & VAR_6)
      FUNC_3(VAR_8, " HISADDR\n");
    else if (VAR_9->type & VAR_7)
      FUNC_3(VAR_8, " HISADDR6\n");
    else
      FUNC_3(VAR_8, " %s\n", FUNC_0(&VAR_9->gw));
  }
}
