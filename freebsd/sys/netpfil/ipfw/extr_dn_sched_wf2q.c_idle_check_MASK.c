
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dn_heap {scalar_t__ elements; } ;
struct wf2qp_si {int wsum; int inv_wsum; int V; struct dn_heap idle_heap; } ;
struct wf2qp_queue {scalar_t__ F; scalar_t__ S; } ;
struct dn_queue {TYPE_2__* fs; } ;
struct TYPE_6__ {struct dn_queue* object; int key; } ;
struct TYPE_4__ {scalar_t__* par; } ;
struct TYPE_5__ {TYPE_1__ fs; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (struct dn_heap*) ;
 int VAR_0 ;
 int FUNC_2 (struct dn_heap*,int *) ;

__attribute__((used)) static void
FUNC_3(struct wf2qp_si *VAR_1, int VAR_2, int VAR_3)
{
    struct dn_heap *VAR_4 = &VAR_1->idle_heap;
    while (VAR_2-- > 0 && VAR_4->elements > 0 &&
  (VAR_3 || FUNC_0(FUNC_1(VAR_4)->key, VAR_1->V))) {
 struct dn_queue *VAR_5 = FUNC_1(VAR_4)->object;
        struct wf2qp_queue *VAR_6 = (struct wf2qp_queue *)VAR_5;

        FUNC_2(VAR_4, ((void*)0));



        VAR_6->S = VAR_6->F + 1;
        VAR_1->wsum -= VAR_5->fs->fs.par[0];
 if (VAR_1->wsum > 0)
  VAR_1->inv_wsum = VAR_0/VAR_1->wsum;
    }
}
