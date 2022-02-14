
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvrdma_id_table {int table; } ;
struct TYPE_2__ {struct pvrdma_id_table tbl; } ;
struct pvrdma_dev {TYPE_1__ uar_table; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct pvrdma_dev *VAR_0)
{
 struct pvrdma_id_table *VAR_1 = &VAR_0->uar_table.tbl;

 FUNC_0(VAR_1->table);
}
