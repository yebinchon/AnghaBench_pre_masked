
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotause {int fsname; int dqblk; int qf; struct quotause* next; } ;


 int FUNC_0 (int ,int *,long) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(long VAR_0, struct quotause *VAR_1)
{
 struct quotause *VAR_2;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next)
  if (FUNC_0(VAR_2->qf, &VAR_2->dqblk, VAR_0) == -1)
   FUNC_1("%s", VAR_2->fsname);
}
