
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int last_query_sent_time; scalar_t__ Tmp; int Out; } ;
struct conn_target {int custom_field; } ;
struct conn_query {int custom_type; } ;
struct TYPE_2__ {scalar_t__ get_timeout; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct connection*,scalar_t__) ;
 int FUNC_1 (int) ;
 struct conn_query* FUNC_2 (struct connection*,struct connection*,scalar_t__) ;
 int FUNC_3 (struct connection*) ;
 struct connection** VAR_2 ;
 struct conn_target** VAR_3 ;
 struct connection* FUNC_4 (struct conn_target*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,char*,int) ;

struct connection *FUNC_6 (struct conn_target *VAR_6, struct connection *VAR_7) {
  struct connection *VAR_8;
  int VAR_9;
  if (VAR_6->custom_field) {
    VAR_9 = VAR_6->custom_field;
    if (VAR_9 < 0) {
      VAR_9 = -VAR_9;
    }
    VAR_9--;
    FUNC_1 ((unsigned) VAR_9 < (unsigned) VAR_4);
    FUNC_1 (VAR_3[VAR_9] == VAR_6);
    VAR_8 = VAR_2[VAR_9];
    if (VAR_6->custom_field > 0) {
      VAR_6->custom_field = - VAR_6->custom_field;
      FUNC_5 (&VAR_8->Out, "\r\n", 2);

      struct conn_query *VAR_10 = FUNC_2 (VAR_8, VAR_7, VAR_0->get_timeout + 0.2);
      if ( VAR_7->Tmp) {
        VAR_10->custom_type |= 0x1000;
      }
      FUNC_3 (VAR_8);
      VAR_8->last_query_sent_time = VAR_5;
      FUNC_0 (VAR_8, VAR_0->get_timeout);
    } else {
    }
  } else {
    VAR_8 = FUNC_4 (VAR_6);
    if (!VAR_8) {
      return 0;
    }
    FUNC_1 (VAR_4 < VAR_1);
    VAR_9 = VAR_4++;
    VAR_6->custom_field = -(VAR_9+1);
    VAR_3[VAR_9] = VAR_6;
    VAR_2[VAR_9] = VAR_8;
  }
  return VAR_8;
}
