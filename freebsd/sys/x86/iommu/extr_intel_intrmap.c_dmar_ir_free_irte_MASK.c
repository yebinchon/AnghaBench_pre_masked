
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct dmar_unit {size_t irte_cnt; int irtids; TYPE_1__* irt; scalar_t__ ir_enabled; } ;
struct TYPE_2__ {int irte2; int irte1; } ;
typedef TYPE_1__ dmar_irte_t ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dmar_unit*,size_t,int) ;
 int FUNC_5 (int ,size_t,int) ;

__attribute__((used)) static int
FUNC_6(struct dmar_unit *VAR_0, u_int VAR_1)
{
 dmar_irte_t *VAR_2;

 FUNC_2(VAR_0 != ((void*)0) && VAR_0->ir_enabled,
     ("unmap: cookie %d unit %p", VAR_1, VAR_0));
 FUNC_2(VAR_1 < VAR_0->irte_cnt,
     ("bad cookie %u %u", VAR_1, VAR_0->irte_cnt));
 VAR_2 = &(VAR_0->irt[VAR_1]);
 FUNC_3(&VAR_2->irte1);
 FUNC_3(&VAR_2->irte2);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0, VAR_1, 1);
 FUNC_1(VAR_0);
 FUNC_5(VAR_0->irtids, VAR_1, 1);
 return (0);
}
