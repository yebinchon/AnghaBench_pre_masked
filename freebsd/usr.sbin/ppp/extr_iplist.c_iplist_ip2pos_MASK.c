
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct iplist_cur {int pos; } ;
struct iplist {struct iplist_cur cur; } ;
struct in_addr {scalar_t__ s_addr; } ;
typedef TYPE_1__* iplist_first ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {struct iplist_cur cur; struct TYPE_4__* nItems; } ;


 TYPE_2__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct iplist_cur*,struct iplist_cur*,int) ;

int
FUNC_2(struct iplist *VAR_0, struct in_addr VAR_1)
{
  struct iplist_cur VAR_2;
  u_long VAR_3;
  int VAR_4;

  VAR_4 = -1;
  FUNC_1(&VAR_2, &VAR_0->cur, sizeof VAR_2);

  for (iplist_first(VAR_5), VAR_6 = 0; VAR_6 < VAR_5->nItems; VAR_6++)
    if (FUNC_0(VAR_5).s_addr == VAR_1.s_addr) {
      VAR_4 = VAR_5->cur.pos;
      break;
    }

  FUNC_1(&VAR_0->cur, &VAR_2, sizeof VAR_0->cur);
  return VAR_4;
}
