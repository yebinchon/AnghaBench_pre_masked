
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dn_sch_inst {TYPE_2__* sched; } ;
struct TYPE_3__ {int oid; } ;
struct dn_queue {int fs; struct dn_sch_inst* _si; TYPE_1__ ni; } ;
struct TYPE_4__ {int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct dn_sch_inst *VAR_1)
{

 struct dn_queue *VAR_2 = (struct dn_queue *)(VAR_1 + 1);

        FUNC_0(&VAR_2->ni.oid, VAR_0, sizeof(*VAR_2));
 VAR_2->_si = VAR_1;
 VAR_2->fs = VAR_1->sched->fs;
 return 0;
}
