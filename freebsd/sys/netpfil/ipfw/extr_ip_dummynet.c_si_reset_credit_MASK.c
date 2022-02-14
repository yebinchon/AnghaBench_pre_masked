
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dn_sch_inst {scalar_t__ credit; TYPE_1__* sched; } ;
struct dn_link {int bandwidth; scalar_t__ burst; } ;
struct TYPE_4__ {scalar_t__ io_fast; } ;
struct TYPE_3__ {struct dn_link link; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1, void *VAR_2)
{
 struct dn_sch_inst *VAR_3 = VAR_1;
 struct dn_link *VAR_4 = &VAR_3->sched->link;

 VAR_3->credit = VAR_4->burst + (VAR_0.io_fast ? VAR_4->bandwidth : 0);
 return 0;
}
