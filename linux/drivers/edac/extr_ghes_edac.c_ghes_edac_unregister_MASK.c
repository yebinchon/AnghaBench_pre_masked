
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int pdev; } ;
struct ghes {int dummy; } ;
struct TYPE_2__ {struct mem_ctl_info* mci; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_3(struct ghes *VAR_2)
{
 struct mem_ctl_info *VAR_3;

 if (!VAR_1)
  return;

 if (FUNC_0(&VAR_0))
  return;

 VAR_3 = VAR_1->mci;
 VAR_1 = ((void*)0);
 FUNC_1(VAR_3->pdev);
 FUNC_2(VAR_3);
}
