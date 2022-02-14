
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_2__ {int (* flush_packet ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*,int*,int) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int,char*,int,int,long long) ;
 int FUNC_5 (int *,int*,int) ;

void FUNC_6 (struct connection *VAR_0, int VAR_1, long long VAR_2, int *VAR_3, int VAR_4) {
  VAR_3[2] = VAR_1;
  if (VAR_2 != -1) {
    *(long long *)(VAR_3 + 3) = VAR_2;
  }

  FUNC_2 (VAR_0, VAR_3, VAR_4);

  FUNC_4 (4, "send_rpc_query: [len = %d] [op = %08x] [rpc_id = <%lld>]\n", VAR_3[0], VAR_1, VAR_2);
  FUNC_1 (FUNC_5 (&VAR_0->Out, VAR_3, VAR_3[0]) == VAR_3[0]);

  FUNC_0(VAR_0)->flush_packet (VAR_0);
}
