
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct pie_status {int sflags; scalar_t__ burst_allowance; int drop_prob; scalar_t__ one_third_q_size; int current_qdelay; int qdelay_old; scalar_t__ accu_prob; struct dn_aqm_pie_parms* parms; } ;
struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct m_tag {int dummy; } ;
struct fq_pie_si {int dummy; } ;
struct TYPE_4__ {scalar_t__ len_bytes; } ;
struct fq_pie_flow {int mq; TYPE_2__ stats; struct pie_status pst; } ;
struct dn_aqm_pie_parms {int flags; int max_ecnth; int qdelay_ref; scalar_t__ max_burst; } ;
typedef int aqm_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct pie_status*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct fq_pie_flow*) ;
 int FUNC_4 (struct pie_status*) ;
 int FUNC_5 (struct fq_pie_flow*,struct fq_pie_si*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 struct m_tag* FUNC_7 (int ,int ,int,int ) ;
 struct m_tag* FUNC_8 (struct mbuf*,int ,int ,int *) ;
 int FUNC_9 (struct mbuf*,struct m_tag*) ;
 int FUNC_10 (int *,struct mbuf*) ;

__attribute__((used)) static int
FUNC_11(struct fq_pie_flow *VAR_12, struct mbuf* VAR_13, struct fq_pie_si *VAR_14)
{
 uint64_t VAR_15;
 struct pie_status *VAR_16;
 struct dn_aqm_pie_parms *VAR_17;
 int VAR_18;

 VAR_15 = VAR_13->m_pkthdr.len;
 VAR_16 = &VAR_12->pst;
 VAR_17 = VAR_16->parms;
 VAR_18 = VAR_3;


 if (VAR_16->sflags & VAR_6 && VAR_16->burst_allowance == 0
  && FUNC_1(VAR_16, VAR_12->stats.len_bytes) == VAR_2) {




   if (VAR_17->flags & VAR_8 && VAR_16->drop_prob <
    (VAR_17->max_ecnth << (VAR_11 - VAR_9))
    && FUNC_2(VAR_13))
    VAR_18 = VAR_3;
   else
    VAR_18 = VAR_2;
  }


 if (!(VAR_16->sflags & VAR_6) && VAR_12->stats.len_bytes >=
  VAR_16->one_third_q_size) {
  FUNC_3(VAR_12);
 }


 if (VAR_16->drop_prob == 0 && VAR_16->current_qdelay < (VAR_17->qdelay_ref >> 1)
  && VAR_16->qdelay_old < (VAR_17->qdelay_ref >> 1)) {

   VAR_16->burst_allowance = VAR_17->max_burst;
  if (VAR_17->flags & VAR_10 && VAR_12->stats.len_bytes<=0)
   FUNC_4(VAR_16);
 }


 if (VAR_18 != VAR_2 && !(VAR_17->flags & VAR_7)) {

  struct m_tag *VAR_19;
  VAR_19 = FUNC_8(VAR_13, VAR_4, VAR_1, ((void*)0));
  if (VAR_19 == ((void*)0))
   VAR_19 = FUNC_7(VAR_4, VAR_1,
    sizeof(aqm_time_t), VAR_5);
  if (VAR_19 == ((void*)0)) {
   FUNC_6(VAR_13);
   VAR_18 = VAR_2;
  }
  *(aqm_time_t *)(VAR_19 + 1) = VAR_0;
  FUNC_9(VAR_13, VAR_19);
 }

 if (VAR_18 != VAR_2) {
  FUNC_10(&VAR_12->mq, VAR_13);
  FUNC_5(VAR_12, VAR_14, VAR_15, 0);
  return 0;
 } else {
  FUNC_5(VAR_12, VAR_14, VAR_15, 1);
  VAR_16->accu_prob = 0;
  FUNC_0(VAR_13);
  return 1;
 }

 return 0;
}
