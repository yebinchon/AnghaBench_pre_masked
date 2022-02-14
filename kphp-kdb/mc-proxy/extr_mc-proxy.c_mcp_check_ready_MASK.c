
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {double last_query_timeout; scalar_t__ status; double last_response_time; double last_query_sent_time; int ready; double last_query_time; int unreliability; int fd; int flags; struct conn_query* first_query; int Out; } ;
struct conn_query {double start_time; } ;


 double VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 double FUNC_0 () ;
 int FUNC_1 (struct connection*,int) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int ,char*,int,scalar_t__,scalar_t__,double,double,double,double,double,int) ;
 double VAR_10 ;
 double VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5 (struct connection *VAR_14) {
  double VAR_15 = 0;
  double VAR_16 = VAR_11 - VAR_14->last_query_timeout;

  if (VAR_14->status == VAR_3 || (VAR_14->last_response_time == 0 && (VAR_14->status == VAR_5 || VAR_14->status == VAR_4))) {
    if (VAR_14->last_query_sent_time < VAR_16 - VAR_0) {
      FUNC_1 (VAR_14, -6);
      return VAR_14->ready = VAR_6;
    }
    return VAR_14->ready = VAR_7;
  }

  if (VAR_14->last_query_sent_time < VAR_16 - VAR_10 - VAR_14->last_query_time && VAR_14->first_query == (struct conn_query *) VAR_14) {
    FUNC_4 (&VAR_14->Out, "version\r\n", 9);
    VAR_14->last_query_sent_time = VAR_11;
    VAR_14->last_query_time = FUNC_0() * 0.1;
    FUNC_2 (VAR_14);
  }
  if (VAR_14->first_query != (struct conn_query *) VAR_14) {
    VAR_15 = VAR_14->first_query->start_time;
  }
  if (VAR_14->last_response_time < VAR_16 - VAR_10*2 || (VAR_15 > 0 && VAR_15 < VAR_16 - VAR_2) || VAR_14->unreliability > 5000) {
    if (VAR_13 > 1 && VAR_14->ready != VAR_6) {
      FUNC_3 (VAR_12, "changing connection %d readiness from %ld to %ld [FAILED] fq=%.03f lq=%.03f lqt=%.03f lr=%.03f now=%.03f unr=%d\n", VAR_14->fd, VAR_14->ready, VAR_6, VAR_15, VAR_14->last_query_sent_time, VAR_14->last_query_timeout, VAR_14->last_response_time, VAR_11, VAR_14->unreliability);
    }
    FUNC_1 (VAR_14, -5);
    return VAR_14->ready = VAR_6;
  }
  if (VAR_14->last_response_time < VAR_16 - VAR_10 - 3 || (VAR_15 > 0 && VAR_15 < VAR_16 - 3) || VAR_14->unreliability > 2000) {
    if (VAR_13 > 1 && VAR_14->ready != VAR_9) {
      FUNC_3 (VAR_12, "changing connection %d readiness from %ld to %ld [STOPPED] fq=%.03f lq=%.03f lqt=%.03f lr=%.03f now=%.03f unr=%d\n", VAR_14->fd, VAR_14->ready, VAR_9, VAR_15, VAR_14->last_query_sent_time, VAR_14->last_query_timeout, VAR_14->last_response_time, VAR_11, VAR_14->unreliability);
    }
    return VAR_14->ready = VAR_9;
  }

  if (!(VAR_14->flags & VAR_1) && VAR_14->last_response_time > 0 && (VAR_14->status == VAR_5 || VAR_14->status == VAR_4)) {
    if (VAR_13 > 1 && VAR_14->ready != VAR_8) {
      FUNC_3 (VAR_12, "changing connection %d readiness from %ld to %ld [OK] fq=%.03f lq=%.03f lqt=%.03f lr=%.03f now=%.03f unr=%d\n", VAR_14->fd, VAR_14->ready, VAR_8, VAR_15, VAR_14->last_query_sent_time, VAR_14->last_query_timeout, VAR_14->last_response_time, VAR_11, VAR_14->unreliability);
    }
    return VAR_14->ready = VAR_8;
  }

  return VAR_14->ready = VAR_6;
}
