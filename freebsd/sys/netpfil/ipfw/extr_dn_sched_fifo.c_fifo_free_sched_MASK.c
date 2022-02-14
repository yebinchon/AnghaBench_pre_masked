
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_sch_inst {int dummy; } ;
struct TYPE_2__ {int head; } ;
struct dn_queue {TYPE_1__ mq; } ;


 int FUNC_0 (struct dn_queue*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct dn_sch_inst *VAR_0)
{
 struct dn_queue *VAR_1 = (struct dn_queue *)(VAR_0 + 1);
 FUNC_1(VAR_1->mq.head);
 FUNC_0(VAR_1, sizeof(*VAR_1));
 return 0;
}
