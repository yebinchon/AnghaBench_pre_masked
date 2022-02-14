
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int flags; scalar_t__ status; int ready; scalar_t__ last_query_sent_time; } ;
struct TYPE_2__ {int in_packet_num; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct connection*,int) ;
 double const VAR_10 ;

int FUNC_3 (struct connection *VAR_11) {
  if ((VAR_11->flags & VAR_0) || VAR_11->status == VAR_2) {
    return VAR_11->ready = VAR_7;
  }

  const double VAR_12 = 3.0;
  if (VAR_11->status == VAR_1 || FUNC_0(VAR_11)->in_packet_num < 0) {
    if (FUNC_0(VAR_11)->in_packet_num == -1 && VAR_11->status == VAR_5) {
      return VAR_11->ready = VAR_9;
    }

    FUNC_1 (VAR_11->last_query_sent_time != 0);
    if (VAR_11->last_query_sent_time < VAR_10 - VAR_12) {
      FUNC_2 (VAR_11, -6);
      return VAR_11->ready = VAR_7;
    }
    return VAR_11->ready = VAR_8;
  }

  if (VAR_11->status == VAR_6 || VAR_11->status == VAR_4 || VAR_11->status == VAR_3) {
    return VAR_11->ready = VAR_9;
  }

  return VAR_11->ready = VAR_7;
}
