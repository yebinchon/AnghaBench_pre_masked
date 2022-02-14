
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int self_pipe; int onopen; } ;
struct TYPE_4__ {TYPE_2__* server; } ;
typedef TYPE_1__ GWSWriter ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_2)
{
  GWSWriter *VAR_3 = (GWSWriter *) VAR_2;

  VAR_3->server->onopen = VAR_0;
  FUNC_1 (VAR_3->server->self_pipe);


  FUNC_2 (VAR_3->server);
  FUNC_0 (VAR_1, "Stopping WebSocket server...\n");
  FUNC_3 (VAR_3->server);
}
