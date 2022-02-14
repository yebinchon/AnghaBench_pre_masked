
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct efa_com_dev {TYPE_2__ aq; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct efa_com_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->aq.cq.lock, VAR_1);
 FUNC_0(&VAR_0->aq);
 FUNC_2(&VAR_0->aq.cq.lock, VAR_1);
}
