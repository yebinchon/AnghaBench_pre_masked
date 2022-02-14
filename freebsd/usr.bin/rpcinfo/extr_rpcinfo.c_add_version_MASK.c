
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct verslist {scalar_t__ vers; struct verslist* next; } ;
struct rpcbdump_short {struct verslist* vlist; } ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool_t
FUNC_1(struct rpcbdump_short *VAR_2, u_long VAR_3)
{
 struct verslist *VAR_4;

 for (VAR_4 = VAR_2->vlist; VAR_4; VAR_4 = VAR_4->next)
  if (VAR_4->vers == VAR_3)
   break;
 if (VAR_4)
  return (VAR_1);
 VAR_4 = (struct verslist *)FUNC_0(sizeof (struct verslist));
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_4->vers = VAR_3;
 VAR_4->next = VAR_2->vlist;
 VAR_2->vlist = VAR_4;
 return (VAR_1);
}
