
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pie_status {int drop_prob; int current_qdelay; int avg_dq_time; int qdelay_old; int sflags; scalar_t__ burst_allowance; int lock_mtx; int aqm_pie_callout; struct dn_aqm_pie_parms* parms; } ;
struct TYPE_2__ {scalar_t__ len_bytes; } ;
struct fq_pie_flow {TYPE_1__ stats; struct pie_status pst; } ;
struct dn_aqm_pie_parms {int flags; scalar_t__ tupdate; scalar_t__ beta; scalar_t__ qdelay_ref; scalar_t__ alpha; } ;
typedef int int64_t ;
typedef int aqm_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int,int ,void (*) (void*),struct fq_pie_flow*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_9)
{
 struct fq_pie_flow *VAR_10 = (struct fq_pie_flow *) VAR_9;
 struct pie_status *VAR_11 = &VAR_10->pst;
 struct dn_aqm_pie_parms *VAR_12;
 int64_t VAR_13, VAR_14, VAR_15;
 aqm_time_t VAR_16;
 int VAR_17;

 VAR_16 = VAR_1;
 VAR_12 = VAR_11->parms;
 VAR_14 = VAR_11->drop_prob;





 if (VAR_12->flags & VAR_4)
  VAR_11->current_qdelay = ((uint64_t)VAR_10->stats.len_bytes * VAR_11->avg_dq_time)
   >> VAR_5;
 else
  if (!VAR_10->stats.len_bytes)
   VAR_11->current_qdelay = 0;


 VAR_13 = (int64_t)VAR_12->alpha *
  ((int64_t)VAR_11->current_qdelay - (int64_t)VAR_12->qdelay_ref);
 VAR_13 +=(int64_t) VAR_12->beta *
  ((int64_t)VAR_11->current_qdelay - (int64_t)VAR_11->qdelay_old);


 VAR_17 = VAR_13 < 0;
 if (VAR_17) {
  VAR_13 = -VAR_13;
 }


 VAR_13 *= (VAR_7 << 12) / VAR_0;


 if (VAR_14 < (VAR_7 / 1000000))
  VAR_13 >>= 11 + VAR_6 + 12;
 else if (VAR_14 < (VAR_7 / 100000))
  VAR_13 >>= 9 + VAR_6 + 12;
 else if (VAR_14 < (VAR_7 / 10000))
  VAR_13 >>= 7 + VAR_6 + 12;
 else if (VAR_14 < (VAR_7 / 1000))
  VAR_13 >>= 5 + VAR_6 + 12;
 else if (VAR_14 < (VAR_7 / 100))
  VAR_13 >>= 3 + VAR_6 + 12;
 else if (VAR_14 < (VAR_7 / 10))
  VAR_13 >>= 1 + VAR_6 + 12;
 else
  VAR_13 >>= VAR_6 + 12;

 VAR_15 = VAR_14;

 if (VAR_17) {
  VAR_14 = VAR_14 - VAR_13;


  if (VAR_14 > VAR_15) {
   VAR_14= 0;
   FUNC_0("underflow");
  }
 } else {

  if ((VAR_12->flags & VAR_3) &&
      VAR_14 >= VAR_7 / 10 &&
      VAR_13 > VAR_7 / 50 ) {
   VAR_13 = VAR_7 / 50;
  }

  VAR_14 = VAR_14 + VAR_13;


  if (VAR_14<VAR_15) {
   FUNC_0("overflow");
   VAR_14= VAR_7;
  }
 }





 if (VAR_14 < 0) {
  VAR_14 = 0;
 } else {
  if (VAR_11->current_qdelay == 0 && VAR_11->qdelay_old == 0) {

   VAR_14 = VAR_14 - (VAR_14 >> 6);
  }

  if (VAR_14 > VAR_7) {
   VAR_14 = VAR_7;
  }
 }

 VAR_11->drop_prob = VAR_14;


 VAR_11->qdelay_old = VAR_11->current_qdelay;


 if ((VAR_11->sflags & VAR_2) && VAR_11->burst_allowance) {
  if (VAR_11->burst_allowance > VAR_12->tupdate)
   VAR_11->burst_allowance -= VAR_12->tupdate;
  else
   VAR_11->burst_allowance = 0;
 }

 if (VAR_11->sflags & VAR_2)
 FUNC_1(&VAR_11->aqm_pie_callout,
  (uint64_t)VAR_12->tupdate * VAR_8,
  0, FUNC_3, VAR_10, 0);

 FUNC_2(&VAR_11->lock_mtx);
}
