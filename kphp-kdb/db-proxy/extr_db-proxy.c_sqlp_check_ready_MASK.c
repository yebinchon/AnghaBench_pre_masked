
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct connection {scalar_t__ status; int fd; int error; int ready; int flags; scalar_t__ last_query_sent_time; scalar_t__ last_query_time; scalar_t__ last_response_time; TYPE_1__ In; } ;
struct TYPE_4__ {int extra_flags; int response_state; scalar_t__ auth_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct connection*,int) ;
 int FUNC_2 (int ,char*,int,scalar_t__,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_3 (struct connection *VAR_14) {
  if (VAR_14->status == VAR_4 && VAR_14->In.total_bytes > 0) {
    FUNC_2 (VAR_12, "have %d bytes in outbound sql connection %ld in state ready, closing connection\n", VAR_14->In.total_bytes, VAR_14->fd);
    VAR_14->status = VAR_2;
    VAR_14->error = -3;
    FUNC_1 (VAR_14, -3);
    return VAR_14->ready = VAR_7;
  }
  if (VAR_14->status == VAR_2) {
    VAR_14->error = -4;
    FUNC_1 (VAR_14, -4);
    return VAR_14->ready = VAR_7;
  }
  if (VAR_14->status == VAR_5 || VAR_14->status == VAR_3) {
    if (!(VAR_14->flags & VAR_0) && VAR_14->last_query_sent_time < VAR_10 - VAR_1 - VAR_14->last_query_time && VAR_14->last_response_time < VAR_10 - VAR_1 - VAR_14->last_query_time && !(FUNC_0(VAR_14)->extra_flags & 1)) {
      if (VAR_13 > 0) {
        FUNC_2 (VAR_12, "failing outbound connection %d, status=%ld, response_status=%d, last_response=%.6ld, last_query=%.6ld, now=%.6ld\n", VAR_14->fd, VAR_14->status, FUNC_0(VAR_14)->response_state, VAR_14->last_response_time, VAR_14->last_query_sent_time, VAR_10);
      }
      VAR_14->error = -5;
      FUNC_1 (VAR_14, -5);
      return VAR_14->ready = VAR_7;
    }
  }
  return VAR_14->ready = (VAR_14->status == VAR_4 ? VAR_8 : (FUNC_0(VAR_14)->auth_state == VAR_11 ? VAR_9 : VAR_6));
}
