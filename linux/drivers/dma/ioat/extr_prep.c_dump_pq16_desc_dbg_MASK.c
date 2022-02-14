
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ioatdma_chan {int dummy; } ;
struct TYPE_5__ {int flags; scalar_t__ phys; } ;
struct ioat_ring_ent {TYPE_2__ txd; TYPE_1__* sed; struct ioat_pq_descriptor* pq; } ;
typedef void ioat_raw_descriptor ;
struct TYPE_6__ {int src_cnt; scalar_t__ q_disable; scalar_t__ p_disable; int compl_write; int int_en; int op; } ;
struct ioat_pq_descriptor {int q_addr; int p_addr; int * coef; TYPE_3__ ctl_f; int ctl; int size; scalar_t__ next; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ hw; } ;


 int FUNC_0 (struct ioat_ring_ent*) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_2 (void**,int) ;
 int FUNC_3 (int ) ;
 struct device* FUNC_4 (struct ioatdma_chan*) ;

__attribute__((used)) static void FUNC_5(struct ioatdma_chan *VAR_0,
          struct ioat_ring_ent *VAR_1)
{
 struct device *VAR_2 = FUNC_4(VAR_0);
 struct ioat_pq_descriptor *VAR_3 = VAR_1->pq;
 struct ioat_raw_descriptor *VAR_4[] = { (void *)VAR_3,
      (void *)VAR_3,
      (void *)VAR_3 };
 int VAR_5 = FUNC_3(VAR_3->ctl_f.src_cnt);
 int VAR_6;

 if (VAR_1->sed) {
  VAR_4[1] = (void *)VAR_1->sed->hw;
  VAR_4[2] = (void *)VAR_1->sed->hw + 64;
 }

 FUNC_1(VAR_2, "desc[%d]: (%#llx->%#llx) flags: %#x"
  " sz: %#x ctl: %#x (op: %#x int: %d compl: %d pq: '%s%s'"
  " src_cnt: %d)\n",
  FUNC_0(VAR_1), (unsigned long long) VAR_1->txd.phys,
  (unsigned long long) VAR_3->next,
  VAR_1->txd.flags, VAR_3->size, VAR_3->ctl,
  VAR_3->ctl_f.op, VAR_3->ctl_f.int_en,
  VAR_3->ctl_f.compl_write,
  VAR_3->ctl_f.p_disable ? "" : "p", VAR_3->ctl_f.q_disable ? "" : "q",
  VAR_3->ctl_f.src_cnt);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_1(VAR_2, "\tsrc[%d]: %#llx coef: %#x\n", VAR_6,
   (unsigned long long) FUNC_2(VAR_4, VAR_6),
   VAR_3->coef[VAR_6]);
 }
 FUNC_1(VAR_2, "\tP: %#llx\n", VAR_3->p_addr);
 FUNC_1(VAR_2, "\tQ: %#llx\n", VAR_3->q_addr);
}
