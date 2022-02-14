
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mbuf {int * m_nextpkt; } ;
struct m_tag {scalar_t__ m_tag_id; int m_tag_cookie; } ;
struct TYPE_6__ {int info; } ;
struct ip_fw_args {int flags; int f_id; TYPE_1__ rule; } ;
struct dn_sch_inst {int kflags; scalar_t__ idle_time; scalar_t__ sched_time; scalar_t__ credit; } ;
struct dn_queue {int dummy; } ;
struct dn_link {scalar_t__ bandwidth; scalar_t__ burst; } ;
struct TYPE_8__ {int flags; } ;
struct dn_fsk {TYPE_3__ fs; TYPE_4__* sched; } ;
struct TYPE_10__ {scalar_t__ curr_time; scalar_t__ io_fast; int fshash; int pending; scalar_t__ busy; } ;
struct TYPE_9__ {struct dn_link link; TYPE_2__* fp; } ;
struct TYPE_7__ {int flags; scalar_t__ (* enqueue ) (struct dn_sch_inst*,struct dn_queue*,struct mbuf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_5__ VAR_15 ;
 struct dn_fsk* FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (struct mbuf*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct dn_queue* FUNC_5 (struct dn_fsk*,struct dn_sch_inst*,int *) ;
 struct dn_sch_inst* FUNC_6 (TYPE_4__*,int *) ;
 struct m_tag* FUNC_7 (struct mbuf*) ;
 int FUNC_8 (int *,struct mbuf*) ;
 int FUNC_9 (char*) ;
 struct mbuf* FUNC_10 (int *,struct dn_sch_inst*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct dn_sch_inst*,struct dn_queue*,struct mbuf*) ;
 scalar_t__ FUNC_12 (struct mbuf*,int,struct ip_fw_args*) ;

int
FUNC_13(struct mbuf **VAR_19, struct ip_fw_args *VAR_20)
{
 struct mbuf *VAR_21 = *VAR_19;
 struct dn_fsk *VAR_22 = ((void*)0);
 struct dn_sch_inst *VAR_23;
 struct dn_queue *VAR_24 = ((void*)0);
 int VAR_25, VAR_26;

 VAR_25 = (VAR_20->rule.info & VAR_10) +
  ((VAR_20->rule.info & VAR_11) ? 2*VAR_3 : 0);

 if (VAR_20->flags & VAR_8)
  VAR_26 = VAR_0;
 else
  VAR_26 = VAR_1;
 if (VAR_20->flags & VAR_7)
  VAR_26 |= VAR_14;
 else if (VAR_20->flags & VAR_9)
  VAR_26 |= VAR_13;
 FUNC_0();
 VAR_16++;

 if (FUNC_12(VAR_21, VAR_26, VAR_20))
  goto dropit;
 if (VAR_15.busy) {



  FUNC_8(&VAR_15.pending, VAR_21);
  VAR_21 = *VAR_19 = ((void*)0);
  goto done;
 }

 VAR_22 = FUNC_3(VAR_15.fshash, VAR_25, 0, ((void*)0));
 if (VAR_22 == ((void*)0))
  goto dropit;
 if (VAR_22->sched == ((void*)0))
  goto dropit;

 VAR_23 = FUNC_6(VAR_22->sched, &(VAR_20->f_id));
 if (VAR_23 == ((void*)0))
  goto dropit;




 if (VAR_22->sched->fp->flags & VAR_4) {
  VAR_24 = FUNC_5(VAR_22, VAR_23, &(VAR_20->f_id));
  if (VAR_24 == ((void*)0))
   goto dropit;
 }
 if (VAR_22->sched->fp->enqueue(VAR_23, VAR_24, VAR_21)) {

  VAR_21 = *VAR_19 = ((void*)0);


  VAR_17--;

  goto dropit;
 }

 if (VAR_23->kflags & VAR_2) {
  VAR_21 = *VAR_19 = ((void*)0);
  goto done;
 }


 if (VAR_23->idle_time < VAR_15.curr_time) {

     struct dn_link *VAR_27 = &VAR_22->sched->link;

     VAR_23->sched_time = VAR_15.curr_time;
     VAR_23->credit = VAR_15.io_fast ? VAR_27->bandwidth : 0;
     if (VAR_27->burst) {
  uint64_t VAR_28 = (VAR_15.curr_time - VAR_23->idle_time) * VAR_27->bandwidth;
  if (VAR_28 > VAR_27->burst)
   VAR_28 = VAR_27->burst;
  VAR_23->credit += VAR_28;
     }
 }

 VAR_21 = FUNC_10(((void*)0), VAR_23, VAR_15.curr_time);






 if ( VAR_21 == *VAR_19 && (VAR_26 & VAR_14) == 0 ) {

  struct m_tag *VAR_29 = FUNC_7(VAR_21);

  VAR_29->m_tag_cookie = VAR_12;
  VAR_29->m_tag_id = 0;
  VAR_18++;
  if (VAR_21->m_nextpkt != ((void*)0)) {
   FUNC_9("dummynet: fast io: pkt chain detected!\n");
   VAR_21->m_nextpkt = ((void*)0);
  }
  VAR_21 = ((void*)0);
 } else {
  *VAR_19 = ((void*)0);
 }
done:
 FUNC_1();
 if (VAR_21)
  FUNC_4(VAR_21);
 return 0;

dropit:
 VAR_17++;
 FUNC_1();
 if (VAR_21)
  FUNC_2(VAR_21);
 *VAR_19 = ((void*)0);
 return (VAR_22 && (VAR_22->fs.flags & VAR_5)) ? 0 : VAR_6;
}
