
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct chtls_dev {TYPE_1__ deferq; int deferq_task; } ;
typedef int defer_handler_t ;
struct TYPE_5__ {int handler; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_0, struct chtls_dev *VAR_1,
      defer_handler_t VAR_2)
{
 FUNC_0(VAR_0)->handler = VAR_2;
 FUNC_4(&VAR_1->deferq.lock);
 FUNC_1(&VAR_1->deferq, VAR_0);
 if (FUNC_3(&VAR_1->deferq) == 1)
  FUNC_2(&VAR_1->deferq_task);
 FUNC_5(&VAR_1->deferq.lock);
}
