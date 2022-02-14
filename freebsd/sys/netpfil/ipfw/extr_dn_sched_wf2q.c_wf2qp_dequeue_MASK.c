
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct dn_heap {scalar_t__ elements; } ;
struct wf2qp_si {int inv_wsum; scalar_t__ V; struct dn_heap idle_heap; scalar_t__ wsum; struct dn_heap ne_heap; struct dn_heap sch_heap; } ;
struct wf2qp_queue {int F; int S; int inv_w; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_9__ {TYPE_3__* head; } ;
struct dn_queue {TYPE_4__ mq; } ;
struct TYPE_10__ {int key; struct dn_queue* object; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_8__ {TYPE_2__ m_pkthdr; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 TYPE_5__* FUNC_1 (struct dn_heap*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 struct mbuf* FUNC_3 (struct dn_queue*) ;
 int FUNC_4 (struct dn_heap*,int *) ;
 int FUNC_5 (struct dn_heap*,int,struct dn_queue*) ;
 int FUNC_6 (struct wf2qp_si*,int,int) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct dn_sch_inst *VAR_0)
{

 struct wf2qp_si *VAR_1 = (struct wf2qp_si *)(VAR_0 + 1);
 struct mbuf *VAR_2;
 struct dn_queue *VAR_3;
 struct dn_heap *VAR_4 = &VAR_1->sch_heap;
 struct dn_heap *VAR_5 = &VAR_1->ne_heap;
 struct wf2qp_queue *VAR_6;

 if (VAR_4->elements == 0 && VAR_5->elements == 0) {



  FUNC_6(VAR_1, 0x7fffffff, 1);
  VAR_1->V = 0;
  VAR_1->wsum = 0;
  return ((void*)0);
 }
 FUNC_6(VAR_1, 1, 0);







  VAR_2 = ((void*)0);
  for(;;) {
 if (VAR_4->elements == 0 && VAR_5->elements > 0) {
  VAR_1->V = FUNC_2(VAR_1->V, FUNC_1(VAR_5)->key);
 }
 while (VAR_5->elements > 0 &&
      FUNC_0(FUNC_1(VAR_5)->key, VAR_1->V)) {
  VAR_3 = FUNC_1(VAR_5)->object;
  VAR_6 = (struct wf2qp_queue *)VAR_3;
  FUNC_4(VAR_5, ((void*)0));
  FUNC_5(VAR_4, VAR_6->F, VAR_3);
 }
 if (VAR_2)
  break;

 VAR_3 = FUNC_1(VAR_4)->object;
 VAR_6 = (struct wf2qp_queue *)VAR_3;
 VAR_2 = FUNC_3(VAR_3);
 FUNC_4(VAR_4, ((void*)0));
 VAR_1->V += (uint64_t)(VAR_2->m_pkthdr.len) * VAR_1->inv_wsum;
 VAR_6->S = VAR_6->F;
 if (VAR_3->mq.head == 0) {
  FUNC_5(&VAR_1->idle_heap, VAR_6->F, VAR_3);
 } else {

  uint64_t VAR_7 = VAR_3->mq.head->m_pkthdr.len;
  VAR_6->F += VAR_7 * VAR_6->inv_w;
  if (FUNC_0(VAR_6->S, VAR_1->V)) {
   FUNC_5(VAR_4, VAR_6->F, VAR_3);
  } else {
   FUNC_5(VAR_5, VAR_6->S, VAR_3);
  }
 }
    }
 return VAR_2;
}
