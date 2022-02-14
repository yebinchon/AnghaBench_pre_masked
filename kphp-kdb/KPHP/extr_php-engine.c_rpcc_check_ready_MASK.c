
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int flags; scalar_t__ status; scalar_t__ ready; int fd; double last_query_sent_time; double last_response_time; } ;
struct TYPE_2__ {int in_packet_num; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct connection*,int) ;
 int FUNC_3 (int ,char*,int,scalar_t__,scalar_t__,double,double,double) ;
 int FUNC_4 () ;
 int FUNC_5 (struct connection*,int ) ;
 double VAR_15 ;
 double VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_6 (struct connection *VAR_19) {
  if ((VAR_19->flags & VAR_0) || VAR_19->status == VAR_5) {
    if (VAR_18 > 1 && VAR_19->ready != VAR_11) {
      FUNC_3 (VAR_17, "changing connection %d readiness from %ld to %ld [FAILED] lq=%.03f lr=%.03f now=%.03f\n", VAR_19->fd, VAR_19->ready, VAR_11, VAR_19->last_query_sent_time, VAR_19->last_response_time, VAR_15);
    }
    return VAR_19->ready = VAR_11;
  }

  if (FUNC_0(VAR_19)->in_packet_num < 0) {
    if (FUNC_0(VAR_19)->in_packet_num == -1 && VAR_19->status == VAR_8) {
      if (VAR_18 > 1 && VAR_19->ready != VAR_13) {
        FUNC_3 (VAR_17, "changing connection %d readiness from %ld to %ld [OK] lq=%.03f lr=%.03f now=%.03f\n", VAR_19->fd, VAR_19->ready, VAR_13, VAR_19->last_query_sent_time, VAR_19->last_response_time, VAR_15);
      }
      return VAR_19->ready = VAR_13;
    }

    FUNC_1 (VAR_19->last_query_sent_time != 0);
    if (VAR_19->last_query_sent_time < VAR_15 - VAR_1) {
      FUNC_2 (VAR_19, -6);
      return VAR_19->ready = VAR_11;
    }
    return VAR_19->ready = VAR_12;
  }
  FUNC_1 (VAR_19->status != VAR_4);

  if (VAR_19->last_query_sent_time < VAR_15 - VAR_16) {
    FUNC_5 (VAR_19, FUNC_4());
    VAR_19->last_query_sent_time = VAR_15;
  }

  FUNC_1 (VAR_19->last_response_time != 0);
  if (VAR_19->last_response_time < VAR_15 - VAR_2) {
    if (VAR_18 > 1 && VAR_19->ready != VAR_11) {
      FUNC_3 (VAR_17, "changing connection %d readiness from %ld to %ld [FAILED] lq=%.03f lr=%.03f now=%.03f\n", VAR_19->fd, VAR_19->ready, VAR_11, VAR_19->last_query_sent_time, VAR_19->last_response_time, VAR_15);
    }
    FUNC_2 (VAR_19, -5);
    return VAR_19->ready = VAR_11;
  }

  if (VAR_19->last_response_time < VAR_15 - VAR_3) {
    if (VAR_18 > 1 && VAR_19->ready != VAR_14) {
      FUNC_3 (VAR_17, "changing connection %d readiness from %ld to %ld [STOPPED] lq=%.03f lr=%.03f now=%.03f\n", VAR_19->fd, VAR_19->ready, VAR_14, VAR_19->last_query_sent_time, VAR_19->last_response_time, VAR_15);
    }
    return VAR_19->ready = VAR_14;
  }

  if (VAR_19->status == VAR_9 || VAR_19->status == VAR_6 || VAR_19->status == VAR_7) {
    if (VAR_18 > 1 && VAR_19->ready != VAR_13) {
      FUNC_3 (VAR_17, "changing connection %d readiness from %ld to %ld [OK] lq=%.03f lr=%.03f now=%.03f\n", VAR_19->fd, VAR_19->ready, VAR_13, VAR_19->last_query_sent_time, VAR_19->last_response_time, VAR_15);
    }
    return VAR_19->ready = VAR_13;
  }

  if (VAR_19->status == VAR_8) {
    if (VAR_18 > 1 && VAR_19->ready != VAR_10) {
      FUNC_3 (VAR_17, "changing connection %d readiness from %ld to %ld [BUSY] lq=%.03f lr=%.03f now=%.03f\n", VAR_19->fd, VAR_19->ready, VAR_10, VAR_19->last_query_sent_time, VAR_19->last_response_time, VAR_15);
    }
    return VAR_19->ready = VAR_10;
  }

  FUNC_1 (0);
  return VAR_19->ready = VAR_11;
}
