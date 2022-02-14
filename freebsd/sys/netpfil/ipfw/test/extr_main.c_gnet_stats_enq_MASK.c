
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int flow_id; } ;
struct TYPE_4__ {int bytes; } ;
struct dn_sch_inst {TYPE_2__ ni; } ;
struct TYPE_3__ {int length; int sch_bytes; scalar_t__ bytes; } ;
struct dn_queue {TYPE_1__ ni; } ;
struct cfg_s {struct dn_sch_inst* si; } ;


 struct dn_queue* FUNC_0 (struct cfg_s*,int ) ;

__attribute__((used)) static void
FUNC_1(struct cfg_s *VAR_0, struct mbuf *VAR_1)
{
 struct dn_sch_inst *VAR_2 = VAR_0->si;
 struct dn_queue *VAR_3 = FUNC_0(VAR_0, VAR_1->flow_id);

 if (VAR_3->ni.length == 1) {
  VAR_3->ni.bytes = 0;
  VAR_3->ni.sch_bytes = VAR_2->ni.bytes;
 }
}
