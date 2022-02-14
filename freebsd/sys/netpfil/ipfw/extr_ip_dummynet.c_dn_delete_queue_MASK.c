
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ head; } ;
struct dn_queue {TYPE_5__ mq; TYPE_4__* _si; struct dn_fsk* fs; } ;
struct dn_fsk {TYPE_3__* sched; TYPE_1__* aqmfp; } ;
struct TYPE_12__ {int queue_count; } ;
struct TYPE_10__ {int q_count; } ;
struct TYPE_9__ {TYPE_2__* fp; } ;
struct TYPE_8__ {int (* free_queue ) (struct dn_queue*) ;} ;
struct TYPE_7__ {int (* cleanup ) (struct dn_queue*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dn_queue*,int) ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dn_queue*,int ) ;
 int FUNC_3 (struct dn_queue*) ;
 int FUNC_4 (struct dn_queue*) ;

__attribute__((used)) static void
FUNC_5(struct dn_queue *VAR_3, int VAR_4)
{
 struct dn_fsk *VAR_5 = VAR_3->fs;
 if (VAR_5 && VAR_5->sched->fp->free_queue)
  VAR_5->sched->fp->free_queue(VAR_3);
 VAR_3->_si->q_count--;
 VAR_3->_si = ((void*)0);
 if (VAR_4 & VAR_0) {
  if (VAR_3->mq.head)
   FUNC_1(VAR_3->mq.head);
  FUNC_0(VAR_3, sizeof(*VAR_3));
  FUNC_2(VAR_3, VAR_1);
  VAR_2.queue_count--;
 }
}
