
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wf2qp_si {int wsum; int inv_wsum; int sch_heap; int ne_heap; int V; int idle_heap; } ;
struct wf2qp_queue {scalar_t__ S; scalar_t__ F; } ;
struct TYPE_6__ {int * head; } ;
struct dn_queue {TYPE_3__ mq; TYPE_2__* fs; scalar_t__ _si; } ;
struct TYPE_4__ {scalar_t__* par; } ;
struct TYPE_5__ {TYPE_1__ fs; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct dn_queue*) ;

__attribute__((used)) static int
FUNC_2(struct dn_queue *VAR_1)
{
 struct wf2qp_queue *VAR_2 = (struct wf2qp_queue *)VAR_1;
 struct wf2qp_si *VAR_3 = (struct wf2qp_si *)(VAR_1->_si + 1);

 if (VAR_2->S >= VAR_2->F + 1)
  return 0;
 VAR_3->wsum -= VAR_1->fs->fs.par[0];
 if (VAR_3->wsum > 0)
  VAR_3->inv_wsum = VAR_0/VAR_3->wsum;




 if (VAR_1->mq.head == ((void*)0)) {
  FUNC_1(&VAR_3->idle_heap, VAR_1);
 } else if (FUNC_0(VAR_3->V, VAR_2->S)) {
  FUNC_1(&VAR_3->ne_heap, VAR_1);
 } else {
  FUNC_1(&VAR_3->sch_heap, VAR_1);
 }
 return 0;
}
