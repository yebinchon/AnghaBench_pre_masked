
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ elements; } ;
struct wf2qp_si {int wsum; int inv_wsum; TYPE_4__ sch_heap; TYPE_4__ ne_heap; void* V; int idle_heap; } ;
struct wf2qp_queue {int inv_w; void* F; void* S; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_6__ {struct mbuf* head; } ;
struct dn_queue {TYPE_2__ mq; struct dn_fsk* fs; } ;
struct TYPE_7__ {scalar_t__* par; } ;
struct dn_fsk {TYPE_3__ fs; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 void* FUNC_2 (void*,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct dn_queue*,struct mbuf*,int ) ;
 int FUNC_4 (int *,struct dn_queue*) ;
 int FUNC_5 (TYPE_4__*,void*,struct dn_queue*) ;

__attribute__((used)) static int
FUNC_6(struct dn_sch_inst *VAR_1, struct dn_queue *VAR_2, struct mbuf *VAR_3)
{
    struct dn_fsk *VAR_4 = VAR_2->fs;
    struct wf2qp_si *VAR_5 = (struct wf2qp_si *)(VAR_1 + 1);
    struct wf2qp_queue *VAR_6;
    uint64_t VAR_7 = VAR_3->m_pkthdr.len;

    if (VAR_3 != VAR_2->mq.head) {
 if (FUNC_3(VAR_2, VAR_3, 0))
     return 1;
 if (VAR_3 != VAR_2->mq.head)
     return 0;
    }


    VAR_6 = (struct wf2qp_queue *)VAR_2;

    if (FUNC_1(VAR_6->F, VAR_6->S)) {

        VAR_6->S = VAR_5->V;
        VAR_5->wsum += VAR_4->fs.par[0];
 VAR_5->inv_wsum = VAR_0/VAR_5->wsum;
    } else {
        FUNC_4(&VAR_5->idle_heap, VAR_2);
        VAR_6->S = FUNC_2(VAR_6->F, VAR_5->V);
    }
    VAR_6->F = VAR_6->S + VAR_7 * VAR_6->inv_w;


    if (VAR_5->ne_heap.elements == 0 && VAR_5->sch_heap.elements == 0)
        VAR_5->V = FUNC_2(VAR_6->S, VAR_5->V);
    if (FUNC_1(VAR_5->V, VAR_6->S)) {

        if (VAR_5->sch_heap.elements == 0)
            FUNC_0("++ ouch! not eligible but empty scheduler!");
        FUNC_5(&VAR_5->ne_heap, VAR_6->S, VAR_2);
    } else {
        FUNC_5(&VAR_5->sch_heap, VAR_6->F, VAR_2);
    }
    return 0;
}
