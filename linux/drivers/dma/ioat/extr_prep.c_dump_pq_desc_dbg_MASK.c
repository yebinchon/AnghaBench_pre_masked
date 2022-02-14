
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioatdma_chan {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ phys; } ;
struct ioat_ring_ent {TYPE_1__ txd; struct ioat_pq_ext_descriptor* pq_ex; struct ioat_pq_descriptor* pq; } ;
typedef void ioat_raw_descriptor ;
struct ioat_pq_ext_descriptor {scalar_t__ next; } ;
struct TYPE_4__ {int src_cnt; scalar_t__ q_disable; scalar_t__ p_disable; int compl_write; int int_en; int op; } ;
struct ioat_pq_descriptor {scalar_t__ next; scalar_t__ q_addr; scalar_t__ p_addr; int * coef; TYPE_2__ ctl_f; int ctl; int size; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct ioat_ring_ent*) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_2 (void**,int) ;
 int FUNC_3 (int ) ;
 struct device* FUNC_4 (struct ioatdma_chan*) ;

__attribute__((used)) static void
FUNC_5(struct ioatdma_chan *VAR_0, struct ioat_ring_ent *VAR_1,
   struct ioat_ring_ent *VAR_2)
{
 struct device *VAR_3 = FUNC_4(VAR_0);
 struct ioat_pq_descriptor *VAR_4 = VAR_1->pq;
 struct ioat_pq_ext_descriptor *VAR_5 = VAR_2 ? VAR_2->pq_ex : ((void*)0);
 struct ioat_raw_descriptor *VAR_6[] = { (void *) VAR_4, (void *) VAR_5 };
 int VAR_7 = FUNC_3(VAR_4->ctl_f.src_cnt);
 int VAR_8;

 FUNC_1(VAR_3, "desc[%d]: (%#llx->%#llx) flags: %#x"
  " sz: %#10.8x ctl: %#x (op: %#x int: %d compl: %d pq: '%s%s'"
  " src_cnt: %d)\n",
  FUNC_0(VAR_1), (unsigned long long) VAR_1->txd.phys,
  (unsigned long long) (VAR_5 ? VAR_5->next : VAR_4->next),
  VAR_1->txd.flags, VAR_4->size, VAR_4->ctl, VAR_4->ctl_f.op,
  VAR_4->ctl_f.int_en, VAR_4->ctl_f.compl_write,
  VAR_4->ctl_f.p_disable ? "" : "p", VAR_4->ctl_f.q_disable ? "" : "q",
  VAR_4->ctl_f.src_cnt);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_1(VAR_3, "\tsrc[%d]: %#llx coef: %#x\n", VAR_8,
   (unsigned long long) FUNC_2(VAR_6, VAR_8), VAR_4->coef[VAR_8]);
 FUNC_1(VAR_3, "\tP: %#llx\n", VAR_4->p_addr);
 FUNC_1(VAR_3, "\tQ: %#llx\n", VAR_4->q_addr);
 FUNC_1(VAR_3, "\tNEXT: %#llx\n", VAR_4->next);
}
