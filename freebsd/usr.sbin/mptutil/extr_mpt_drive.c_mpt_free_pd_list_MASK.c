
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_drive_list {int ndrives; struct mpt_drive_list** drives; } ;


 int FUNC_0 (struct mpt_drive_list*) ;

void
FUNC_1(struct mpt_drive_list *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ndrives; VAR_1++)
  FUNC_0(VAR_0->drives[VAR_1]);
 FUNC_0(VAR_0);
}
