
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int last_query_sent_time; scalar_t__ Tmp; int Out; int status; } ;
struct conn_query {int custom_type; } ;
struct TYPE_4__ {scalar_t__ get_timeout; } ;
struct TYPE_3__ {int custom_field; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct connection*,scalar_t__) ;
 int VAR_1 ;
 struct conn_query* FUNC_1 (struct connection*,struct connection*,scalar_t__) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct connection*) ;
 struct connection** VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct connection*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,char*,int) ;

int FUNC_7 (struct connection *VAR_8, int VAR_9) {
  int VAR_10;
  struct connection *VAR_11;
  if (VAR_7 > 1) {
    FUNC_3 (VAR_6, "proxy_get_end (%d)\n", VAR_9);
  }
  if (!VAR_4) {
    FUNC_4 (VAR_8);
    FUNC_6 (&VAR_8->Out, "END\r\n", 5);
    return 0;
  }
  VAR_8->status = VAR_1;

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
    struct conn_query *VAR_12;
    int VAR_13 = VAR_3[VAR_10]->custom_field;
    VAR_3[VAR_10]->custom_field = 0;

    if (VAR_13 > 0) {
      VAR_11 = VAR_2[VAR_10];
      FUNC_6 (&VAR_11->Out, "\r\n", 2);

      VAR_12 = FUNC_1 (VAR_11, VAR_8, VAR_0->get_timeout + 0.2);
      if ( VAR_8->Tmp) {
        VAR_12->custom_type |= 0x1000;
      }
      FUNC_2 (VAR_11);
      VAR_11->last_query_sent_time = VAR_5;
      FUNC_0 (VAR_11, VAR_0->get_timeout);
    }
  }
  FUNC_5 (VAR_8, VAR_0->get_timeout);
  FUNC_4 (VAR_8);
  return 0;
}
