
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int self_pipe; int pipeout; int pipein; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_7__ {char const* host; char const* port; scalar_t__ use_ssl; scalar_t__ strict; int * sslkey; int * sslcert; int * pipeout; int * pipein; int * origin; int max_frm_size; int * accesslog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

WSServer *
FUNC_5 (const char *VAR_2, const char *VAR_3, void (*VAR_4) (void))
{
  WSServer *VAR_5 = FUNC_3 ();
  VAR_5->pipein = FUNC_1 ();
  VAR_5->pipeout = FUNC_2 ();
  FUNC_0 (VAR_5->self_pipe, 0, sizeof (VAR_5->self_pipe));

  VAR_1.accesslog = ((void*)0);
  VAR_1.host = VAR_2;
  VAR_1.max_frm_size = VAR_0;
  VAR_1.origin = ((void*)0);
  VAR_1.pipein = ((void*)0);
  VAR_1.pipeout = ((void*)0);
  VAR_1.sslcert = ((void*)0);
  VAR_1.sslkey = ((void*)0);
  VAR_1.port = VAR_3;
  VAR_1.strict = 0;
  VAR_1.use_ssl = 0;

  VAR_4 ();
  FUNC_4 (VAR_5);

  return VAR_5;
}
