
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {int sat_network_lockout; int sat_network; int minrto; int maxrto; scalar_t__ use_precise_time; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_nets {int rtt; scalar_t__ lan_type; int RTO_measured; int lastsa; int lastsv; int RTO; } ;
struct TYPE_3__ {int (* sctp_rtt_calculated ) (struct sctp_tcb*,struct sctp_nets*,struct timeval*) ;} ;
struct sctp_association {TYPE_1__ cc_functions; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (struct timeval*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct sctp_nets*,int ) ;
 int VAR_13 ;
 int FUNC_4 (struct sctp_tcb*,struct sctp_nets*,struct timeval*) ;
 int FUNC_5 (struct timeval*,struct timeval*) ;

int
FUNC_6(struct sctp_tcb *VAR_14,
    struct sctp_association *VAR_15,
    struct sctp_nets *VAR_16,
    struct timeval *VAR_17,
    int VAR_18)
{
 struct timeval VAR_19;
 uint64_t VAR_20;
 int32_t VAR_21;
 uint32_t VAR_22;
 int VAR_23 = 0;





 if (VAR_14->asoc.use_precise_time) {
  (void)FUNC_1(&VAR_19);
 } else {
  (void)FUNC_2(&VAR_19);
 }
 if ((VAR_17->tv_sec > VAR_19.tv_sec) ||
     ((VAR_17->tv_sec == VAR_19.tv_sec) && (VAR_17->tv_sec > VAR_19.tv_sec))) {

  return (0);
 }
 FUNC_5(&VAR_19, VAR_17);
 VAR_20 = (uint64_t)1000000 * (uint64_t)VAR_19.tv_sec + (uint64_t)VAR_19.tv_usec;
 if (VAR_20 > VAR_7 * 1000) {

  return (0);
 }

 VAR_16->rtt = VAR_20;

 VAR_21 = (int32_t)(VAR_16->rtt / 1000);
 if ((VAR_15->cc_functions.sctp_rtt_calculated) && (VAR_18 == VAR_9)) {




  (*VAR_15->cc_functions.sctp_rtt_calculated) (VAR_14, VAR_16, &VAR_19);
 }




 if ((VAR_18 == VAR_9) &&
     (VAR_16->lan_type == VAR_3)) {
  if (VAR_16->rtt > VAR_4) {
   VAR_16->lan_type = VAR_1;
  } else {
   VAR_16->lan_type = VAR_2;
  }
 }
 if (VAR_16->RTO_measured) {
  VAR_21 -= (VAR_16->lastsa >> VAR_10);
  VAR_16->lastsa += VAR_21;
  if (VAR_21 < 0) {
   VAR_21 = -VAR_21;
  }
  VAR_21 -= (VAR_16->lastsv >> VAR_11);
  VAR_16->lastsv += VAR_21;
  if (FUNC_0(VAR_13) & VAR_8) {
   FUNC_3(VAR_16, VAR_6);
  }
 } else {

  VAR_16->RTO_measured = 1;
  VAR_23 = 1;
  VAR_16->lastsa = VAR_21 << VAR_10;
  VAR_16->lastsv = (VAR_21 / 2) << VAR_11;
  if (FUNC_0(VAR_13) & VAR_8) {
   FUNC_3(VAR_16, VAR_5);
  }
 }
 if (VAR_16->lastsv == 0) {
  VAR_16->lastsv = VAR_0;
 }
 VAR_22 = (VAR_16->lastsa >> VAR_10) + VAR_16->lastsv;
 if ((VAR_22 > VAR_12) &&
     (VAR_14->asoc.sat_network_lockout == 0)) {
  VAR_14->asoc.sat_network = 1;
 } else if ((!VAR_23) && VAR_14->asoc.sat_network) {
  VAR_14->asoc.sat_network = 0;
  VAR_14->asoc.sat_network_lockout = 1;
 }

 if (VAR_22 < VAR_14->asoc.minrto) {
  VAR_22 = VAR_14->asoc.minrto;
 }
 if (VAR_22 > VAR_14->asoc.maxrto) {
  VAR_22 = VAR_14->asoc.maxrto;
 }
 VAR_16->RTO = VAR_22;
 return (1);
}
