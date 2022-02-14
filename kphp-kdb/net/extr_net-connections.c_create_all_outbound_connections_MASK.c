
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcnt; scalar_t__ ready_outbound_connections; scalar_t__ type; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_2 (void) {
  int VAR_4 = 0, VAR_5;
  FUNC_1 ();
  VAR_2 = VAR_3 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    if (VAR_0[VAR_5].type && VAR_0[VAR_5].refcnt > 0) {
      VAR_4 += FUNC_0 (&VAR_0[VAR_5]);
      if (VAR_0[VAR_5].ready_outbound_connections) {
        VAR_2 += VAR_0[VAR_5].ready_outbound_connections;
        VAR_3++;
      }
    }
  }
  return VAR_4;
}
