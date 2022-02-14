
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct mq {struct mbuf* head; } ;
struct TYPE_9__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct TYPE_10__ {int bandwidth; int delay; } ;
struct dn_schk {TYPE_3__ link; TYPE_1__* fp; } ;
struct TYPE_12__ {int * head; } ;
struct TYPE_11__ {TYPE_5__ mq; } ;
struct dn_sch_inst {scalar_t__ credit; int sched_time; int idle_time; TYPE_4__ dline; int kflags; struct dn_schk* sched; } ;
struct TYPE_14__ {int curr_time; int evheap; } ;
struct TYPE_13__ {int output_time; } ;
struct TYPE_8__ {struct mbuf* (* dequeue ) (struct dn_sch_inst*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__* FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,struct dn_schk*) ;
 int FUNC_4 (int *,int,struct dn_sch_inst*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_5__*,struct mbuf*) ;
 struct mbuf* FUNC_6 (struct dn_sch_inst*) ;
 int FUNC_7 (struct mq*,TYPE_4__*,int) ;

__attribute__((used)) static struct mbuf *
FUNC_8(struct mq *VAR_3, struct dn_sch_inst *VAR_4, uint64_t VAR_5)
{
 struct mq VAR_6;
 struct dn_schk *VAR_7 = VAR_4->sched;
 struct mbuf *VAR_8 = ((void*)0);
 int VAR_9 = (VAR_4->dline.mq.head == ((void*)0));
 int VAR_10, VAR_11;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = &VAR_6;
  VAR_3->head = ((void*)0);
 }

 VAR_11 = VAR_7->link.bandwidth;
 VAR_4->kflags &= ~VAR_0;

 if (VAR_11 > 0)
  VAR_4->credit += (VAR_5 - VAR_4->sched_time) * VAR_11;
 else
  VAR_4->credit = 0;
 VAR_4->sched_time = VAR_5;
 VAR_10 = 0;
 while (VAR_4->credit >= 0 && (VAR_8 = VAR_7->fp->dequeue(VAR_4)) != ((void*)0)) {
  uint64_t VAR_12;

  VAR_10++;
  VAR_12 = (VAR_11 == 0) ? 0 : VAR_2 *
   (VAR_8->m_pkthdr.len * 8 + FUNC_3(VAR_8, VAR_7));
  VAR_4->credit -= VAR_12;

  FUNC_2(VAR_8)->output_time = VAR_1.curr_time + VAR_7->link.delay ;
  FUNC_5(&VAR_4->dline.mq, VAR_8);
 }






 if (VAR_4->credit >= 0) {
  VAR_4->idle_time = VAR_5;
 } else {
  uint64_t VAR_13;
  FUNC_0 (VAR_11 > 0, ("bw=0 and credit<0 ?"));
  VAR_13 = FUNC_1(VAR_11 - 1 - VAR_4->credit, VAR_11);
  if (VAR_8)
   FUNC_2(VAR_8)->output_time += VAR_13;
  VAR_4->kflags |= VAR_0;
  FUNC_4(&VAR_1.evheap, VAR_5 + VAR_13, VAR_4);
 }
 if (VAR_9 && VAR_10)
  FUNC_7(VAR_3, &VAR_4->dline, VAR_5);
 return VAR_3->head;
}
