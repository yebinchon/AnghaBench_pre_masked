
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repl_client_status {int handshake_id; TYPE_1__* rb; } ;
struct TYPE_2__ {int targets; struct repl_client_status** client; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,int ) ;

int FUNC_3 (struct repl_client_status *VAR_1) {
  int VAR_2;
  FUNC_2 (1, "destroyed client %d\n", VAR_1->handshake_id);
  for (VAR_2 = 0; VAR_2 < VAR_1->rb->targets; VAR_2++) {
    if (VAR_1->rb->client[VAR_2] == VAR_1) {
      VAR_1->rb->client[VAR_2] = 0;
    }
  }
  FUNC_1 (VAR_1->handshake_id, -1);
  FUNC_0 (--VAR_0 >= 0);
  return 0;
}
