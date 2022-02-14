
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcbdump_short {struct netidlist* nlist; } ;
struct netidlist {char* netid; struct netidlist* next; } ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static bool_t
FUNC_2(struct rpcbdump_short *VAR_2, char *VAR_3)
{
 struct netidlist *VAR_4;

 for (VAR_4 = VAR_2->nlist; VAR_4; VAR_4 = VAR_4->next)
  if (FUNC_1(VAR_4->netid, VAR_3) == 0)
   break;
 if (VAR_4)
  return (VAR_1);
 VAR_4 = (struct netidlist *)FUNC_0(sizeof (struct netidlist));
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_4->netid = VAR_3;
 VAR_4->next = VAR_2->nlist;
 VAR_2->nlist = VAR_4;
 return (VAR_1);
}
