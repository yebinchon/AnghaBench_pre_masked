
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pie_status {int sflags; int dq_count; long measurement_start; long avg_dq_time; long current_qdelay; struct dn_aqm_pie_parms* parms; } ;
struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct fq_pie_si {int dummy; } ;
struct TYPE_4__ {int len_bytes; } ;
struct fq_pie_flow {TYPE_2__ stats; struct pie_status pst; } ;
struct dn_aqm_pie_parms {int flags; } ;
typedef long int32_t ;
typedef long aqm_time_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mbuf* FUNC_0 (struct fq_pie_flow*,long*,struct fq_pie_si*,int) ;

__attribute__((used)) static struct mbuf *
FUNC_1(struct fq_pie_flow *VAR_5, struct fq_pie_si *VAR_6)
{
 struct mbuf *VAR_7;
 struct dn_aqm_pie_parms *VAR_8;
 struct pie_status *VAR_9;
 aqm_time_t VAR_10;
 aqm_time_t VAR_11, VAR_12;
 int32_t VAR_13;

 VAR_9 = &VAR_5->pst;
 VAR_8 = VAR_5->pst.parms;


 VAR_7 = FUNC_0(VAR_5, &VAR_11, VAR_6,
  !(VAR_8->flags & VAR_2));

 if (!VAR_7 || !(VAR_9->sflags & VAR_1))
  return VAR_7;

 VAR_10 = VAR_0;
 if (VAR_8->flags & VAR_2) {

  if(VAR_9->sflags & VAR_4) {
   VAR_9->dq_count += VAR_7->m_pkthdr.len;

   if (VAR_9->dq_count >= VAR_3) {
    VAR_12 = VAR_10 - VAR_9->measurement_start;





    if(VAR_9->avg_dq_time == 0)
     VAR_9->avg_dq_time = VAR_12;
    else {





     VAR_13 = VAR_3 >> 8;
     VAR_9->avg_dq_time = (VAR_12* VAR_13
      + (VAR_9->avg_dq_time * ((1L << 8) - VAR_13))) >> 8;
     VAR_9->sflags &= ~VAR_4;
    }
   }
  }





  if(!(VAR_9->sflags & VAR_4) &&
   VAR_5->stats.len_bytes >= VAR_3) {
   VAR_9->sflags |= VAR_4;
   VAR_9->measurement_start = VAR_10;
   VAR_9->dq_count = 0;
  }
 }

 else
  VAR_9->current_qdelay = VAR_10 - VAR_11;

 return VAR_7;
}
