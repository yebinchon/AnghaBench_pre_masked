
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_7__ {int * head; } ;
struct TYPE_8__ {TYPE_2__ mq; } ;
struct dn_sch_inst {int kflags; scalar_t__ q_count; TYPE_1__ ni; TYPE_5__* sched; TYPE_3__ dline; } ;
struct TYPE_10__ {TYPE_4__* fp; } ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dn_sch_inst*,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3)
{
 struct dn_sch_inst *VAR_4 = VAR_2;

 if ((VAR_4->kflags & VAR_0) || VAR_4->dline.mq.head != ((void*)0))
  return 0;

 if (VAR_4->sched->fp->flags & VAR_1) {
  if (VAR_4->q_count == 0)
   return FUNC_0(VAR_4, ((void*)0));
  else
   return 0;
 } else {
  if ((VAR_4+1)->ni.length == 0)
   return FUNC_0(VAR_4, ((void*)0));
  else
   return 0;
 }
 return 0;
}
