
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; } ;
struct mbuf {size_t flow_id; TYPE_1__ m_pkthdr; } ;
struct TYPE_7__ {int bytes; } ;
struct dn_sch_inst {TYPE_2__ ni; } ;
struct TYPE_8__ {int bytes; scalar_t__ length; double sch_bytes; } ;
struct dn_queue {TYPE_5__* fs; TYPE_3__ ni; } ;
struct cfg_s {double wsum; double* q_wfi; struct dn_sch_inst* si; } ;
struct TYPE_9__ {scalar_t__* par; } ;
struct TYPE_10__ {TYPE_4__ fs; } ;


 struct dn_queue* FUNC_0 (struct cfg_s*,size_t) ;

__attribute__((used)) static void
FUNC_1(struct cfg_s *VAR_0, struct mbuf *VAR_1)
{
 struct dn_sch_inst *VAR_2 = VAR_0->si;
 struct dn_queue *VAR_3 = FUNC_0(VAR_0, VAR_1->flow_id);
 int VAR_4 = VAR_1->m_pkthdr.len;

 VAR_3->ni.bytes += VAR_4;
 VAR_2->ni.bytes += VAR_4;

 if (VAR_3->ni.length == 0) {
  double VAR_5 = (double)VAR_3->ni.bytes;
  double VAR_6 = (double)VAR_2->ni.bytes - VAR_3->ni.sch_bytes;
  double VAR_7 = (double)VAR_3->fs->fs.par[0] / VAR_0->wsum;
  double VAR_8 = VAR_6 * VAR_7 - VAR_5;

  if (VAR_0->q_wfi[VAR_1->flow_id] < VAR_8)
   VAR_0->q_wfi[VAR_1->flow_id] = VAR_8;
 }
}
