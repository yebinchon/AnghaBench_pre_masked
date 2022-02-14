
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ status; double last_response_time; double last_query_sent_time; int unreliability; int ready; int fd; double last_query_timeout; int flags; } ;
struct TYPE_2__ {scalar_t__ in_packet_num; } ;


 double VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct connection*,int) ;
 int FUNC_2 (int ,char*,int,int,scalar_t__,double,double,double,double,double,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct connection*,int ) ;
 double VAR_11 ;
 double VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_5 (struct connection *VAR_15) {
  double VAR_16 = 0;
  double VAR_17 = VAR_12;

  if (VAR_15->status == VAR_4 || (VAR_15->last_response_time == 0 && (VAR_15->status == VAR_6 || VAR_15->status == VAR_5)) || FUNC_0(VAR_15)->in_packet_num < 0) {
    if (VAR_15->last_query_sent_time < VAR_17 - VAR_0) {
      FUNC_1 (VAR_15, -6);
      return VAR_7;
    }
    return VAR_8;
  }
  if (VAR_15->last_query_sent_time < VAR_17 - VAR_11) {
    FUNC_4 (VAR_15, FUNC_3 ());
    VAR_15->last_query_sent_time = VAR_12;
  }

  if (VAR_15->last_response_time < VAR_17 - VAR_2 || VAR_15->unreliability > 5000) {
    if (VAR_14 > 1 && VAR_15->ready != VAR_7) {
      FUNC_2 (VAR_13, "changing connection %d readiness from %d to %ld [FAILED] fq=%.03f lq=%.03f lqt=%.03f lr=%.03f now=%.03f unr=%d\n", VAR_15->fd, VAR_15->ready, VAR_7, VAR_16, VAR_15->last_query_sent_time, VAR_15->last_query_timeout, VAR_15->last_response_time, VAR_12, VAR_15->unreliability);
    }
    FUNC_1 (VAR_15, -5);
    return VAR_15->ready = VAR_7;
  }

  if (VAR_15->last_response_time < VAR_17 - VAR_3 || VAR_15->unreliability > 2000) {
    if (VAR_14 > 1 && VAR_15->ready != VAR_10) {
      FUNC_2 (VAR_13, "changing connection %d readiness from %d to %ld [STOPPED] fq=%.03f lq=%.03f lqt=%.03f lr=%.03f now=%.03f unr=%d\n", VAR_15->fd, VAR_15->ready, VAR_10, VAR_16, VAR_15->last_query_sent_time, VAR_15->last_query_timeout, VAR_15->last_response_time, VAR_12, VAR_15->unreliability);
    }
    return VAR_15->ready = VAR_10;
  }

  if (!(VAR_15->flags & VAR_1) && VAR_15->last_response_time > 0 && (VAR_15->status == VAR_6 || VAR_15->status == VAR_5)) {
    if (VAR_14 > 1 && VAR_15->ready != VAR_9) {
      FUNC_2 (VAR_13, "changing connection %d readiness from %d to %ld [OK] fq=%.03f lq=%.03f lqt=%.03f lr=%.03f now=%.03f unr=%d\n", VAR_15->fd, VAR_15->ready, VAR_9, VAR_16, VAR_15->last_query_sent_time, VAR_15->last_query_timeout, VAR_15->last_response_time, VAR_12, VAR_15->unreliability);
    }
    return VAR_15->ready = VAR_9;
  }

  return VAR_15->ready = VAR_7;
}
