
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct pvrdma_id_table {int table; int lock; void* mask; void* max; scalar_t__ top; scalar_t__ last; } ;
struct TYPE_4__ {struct pvrdma_id_table tbl; } ;
struct pvrdma_dev {TYPE_1__ uar_table; TYPE_3__* dsr; } ;
struct TYPE_5__ {void* max_uar; } ;
struct TYPE_6__ {TYPE_2__ caps; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct pvrdma_dev *VAR_3)
{
 u32 VAR_4 = VAR_3->dsr->caps.max_uar;
 u32 VAR_5 = VAR_4 - 1;
 struct pvrdma_id_table *VAR_6 = &VAR_3->uar_table.tbl;

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 VAR_6->last = 0;
 VAR_6->top = 0;
 VAR_6->max = VAR_4;
 VAR_6->mask = VAR_5;
 FUNC_4(&VAR_6->lock);
 VAR_6->table = FUNC_2(FUNC_0(VAR_4), sizeof(long), VAR_2);
 if (!VAR_6->table)
  return -VAR_1;


 FUNC_3(0, VAR_6->table);

 return 0;
}
