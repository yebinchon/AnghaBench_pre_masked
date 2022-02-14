
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i3c_ibi_slot {int work; } ;
struct TYPE_6__ {TYPE_2__* master; } ;
struct i3c_dev_desc {TYPE_3__ common; TYPE_1__* ibi; } ;
struct TYPE_5__ {int wq; } ;
struct TYPE_4__ {int pending_ibis; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct i3c_dev_desc *VAR_0, struct i3c_ibi_slot *VAR_1)
{
 FUNC_0(&VAR_0->ibi->pending_ibis);
 FUNC_1(VAR_0->common.master->wq, &VAR_1->work);
}
