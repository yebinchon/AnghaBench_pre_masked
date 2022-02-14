
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {TYPE_1__* server_options; } ;
struct TYPE_2__ {int nr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct transport *VAR_0)
{
 if (!VAR_0->server_options || !VAR_0->server_options->nr)
  return;
 FUNC_1(FUNC_0("see protocol.version in 'git help config' for more details"));
 FUNC_2(FUNC_0("server options require protocol version 2 or later"));
}
