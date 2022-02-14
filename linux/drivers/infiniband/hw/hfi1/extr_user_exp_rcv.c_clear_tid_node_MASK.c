
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct tid_rb_node {int rcventry; TYPE_2__* grp; int npages; int dma_addr; int phys; TYPE_1__ mmu; } ;
struct hfi1_filedata {int subctxt; struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int tid_group_list; int tid_used_list; int tid_full_list; int ctxt; struct hfi1_devdata* dd; } ;
struct TYPE_4__ {int used; int map; int base; int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,int,int ,int ,int ) ;
 int FUNC_1 (struct tid_rb_node*) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct hfi1_filedata*,int *,struct tid_rb_node*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_filedata *VAR_1, struct tid_rb_node *VAR_2)
{
 struct hfi1_ctxtdata *VAR_3 = VAR_1->uctxt;
 struct hfi1_devdata *VAR_4 = VAR_3->dd;

 FUNC_3(VAR_3->ctxt, VAR_1->subctxt, VAR_2->rcventry,
     VAR_2->npages, VAR_2->mmu.addr, VAR_2->phys,
     VAR_2->dma_addr);





 FUNC_0(VAR_4, VAR_2->rcventry, VAR_0, 0, 0);

 FUNC_4(VAR_1, ((void*)0), VAR_2, 0, VAR_2->npages, 1);

 VAR_2->grp->used--;
 VAR_2->grp->map &= ~(1 << (VAR_2->rcventry - VAR_2->grp->base));

 if (VAR_2->grp->used == VAR_2->grp->size - 1)
  FUNC_2(VAR_2->grp, &VAR_3->tid_full_list,
          &VAR_3->tid_used_list);
 else if (!VAR_2->grp->used)
  FUNC_2(VAR_2->grp, &VAR_3->tid_used_list,
          &VAR_3->tid_group_list);
 FUNC_1(VAR_2);
}
