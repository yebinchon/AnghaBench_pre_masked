
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pvrdma_uar_map {int index; } ;
struct pvrdma_id_table {int max; int top; int mask; int lock; int last; int table; } ;
struct TYPE_2__ {struct pvrdma_id_table tbl; } ;
struct pvrdma_dev {TYPE_1__ uar_table; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct pvrdma_dev *VAR_0, struct pvrdma_uar_map *VAR_1)
{
 struct pvrdma_id_table *VAR_2 = &VAR_0->uar_table.tbl;
 unsigned long VAR_3;
 u32 VAR_4;

 VAR_4 = VAR_1->index & (VAR_2->max - 1);
 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_4, VAR_2->table);
 VAR_2->last = FUNC_1(VAR_2->last, VAR_4);
 VAR_2->top = (VAR_2->top + VAR_2->max) & VAR_2->mask;
 FUNC_3(&VAR_2->lock, VAR_3);
}
