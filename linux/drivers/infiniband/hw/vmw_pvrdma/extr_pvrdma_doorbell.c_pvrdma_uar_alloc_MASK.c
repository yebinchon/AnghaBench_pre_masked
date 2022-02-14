
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pvrdma_uar_map {int index; int pfn; } ;
struct pvrdma_id_table {int max; int top; int mask; int lock; int table; int last; } ;
struct TYPE_2__ {struct pvrdma_id_table tbl; } ;
struct pvrdma_dev {int pdev; TYPE_1__ uar_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct pvrdma_dev *VAR_3, struct pvrdma_uar_map *VAR_4)
{
 struct pvrdma_id_table *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 VAR_5 = &VAR_3->uar_table.tbl;

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_1(VAR_5->table, VAR_5->max, VAR_5->last);
 if (VAR_7 >= VAR_5->max) {
  VAR_5->top = (VAR_5->top + VAR_5->max) & VAR_5->mask;
  VAR_7 = FUNC_0(VAR_5->table, VAR_5->max);
 }

 if (VAR_7 >= VAR_5->max) {
  FUNC_5(&VAR_5->lock, VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_7, VAR_5->table);
 VAR_7 |= VAR_5->top;

 FUNC_5(&VAR_5->lock, VAR_6);

 VAR_4->index = VAR_7;
 VAR_4->pfn = (FUNC_2(VAR_3->pdev, VAR_2) >>
      VAR_1) + VAR_4->index;

 return 0;
}
