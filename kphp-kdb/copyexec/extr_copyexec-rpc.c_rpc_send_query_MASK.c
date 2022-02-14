
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_2__ {int (* flush_packet ) (struct connection*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,int*,int) ;

int FUNC_7 (void *VAR_2, struct connection *VAR_3) {
  int *VAR_4 = VAR_2;
  FUNC_5 (4, "sending query... len = %d, op = %x\n", VAR_4[0], VAR_4[2]);
  FUNC_5 (6, "c = %p, server_check_ready = %d (cr_ok = %d)\n", VAR_3, FUNC_3 (VAR_3), VAR_1);
  FUNC_1 (VAR_3 && FUNC_3 (VAR_3) == VAR_1);
  FUNC_1 (VAR_4[0] <= VAR_0 && VAR_4[0] >= 16 && VAR_4[0] % 4 == 0);
  VAR_4[(VAR_4[0] >> 2) - 1] = FUNC_2 (VAR_4, VAR_4[0] - 4);
  FUNC_6 (&VAR_3->Out, VAR_4, VAR_4[0]);
  FUNC_0(VAR_3)->flush_packet (VAR_3);
  FUNC_5 (4, "message_sent\n");
  return 0;
}
