
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cn_callback_entry {TYPE_1__* pdev; int refcnt; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cn_callback_entry*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cn_callback_entry *VAR_0)
{
 if (!FUNC_2(&VAR_0->refcnt))
  return;

 FUNC_0(&VAR_0->pdev->refcnt);
 FUNC_1(VAR_0);
}
