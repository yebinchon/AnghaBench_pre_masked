
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dn_sch_inst {TYPE_2__* sched; int ni; } ;
struct TYPE_6__ {int id; int type; } ;
struct dn_flow {TYPE_3__ oid; } ;
struct copy_args {int end; scalar_t__* start; } ;
struct TYPE_4__ {int sched_nr; } ;
struct TYPE_5__ {TYPE_1__ sch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int *,char*,int ) ;
 int FUNC_1 (uintptr_t,int ,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, void *VAR_4)
{
 struct dn_sch_inst *VAR_5 = VAR_3;
 struct copy_args *VAR_6 = VAR_4;
 struct dn_flow *VAR_7 = (struct dn_flow *)(*VAR_6->start);
 if (FUNC_0(VAR_6->start, VAR_6->end, &VAR_5->ni, "inst",
   VAR_5->sched->sch.sched_nr))
  return VAR_1;
 VAR_7->oid.type = VAR_2;
 VAR_7->oid.id = FUNC_1((uintptr_t)VAR_5, VAR_0, ((void*)0));
 return 0;
}
