
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int colist; scalar_t__ closing; int pipeout; int (* onclose ) (int ,TYPE_2__*) ;} ;
typedef TYPE_1__ WSServer ;
struct TYPE_15__ {int status; int * ssl; int end_proc; } ;
typedef TYPE_2__ WSClient ;
struct TYPE_16__ {scalar_t__ accesslog; int echomode; scalar_t__ strict; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_13 (int VAR_3, WSClient * VAR_4, WSServer * VAR_5)
{





  FUNC_5 (VAR_3, VAR_0);

  if (VAR_5->onclose && VAR_2.strict && !VAR_2.echomode)
    (*VAR_5->onclose) (VAR_5->pipeout, VAR_4);


  FUNC_3 (&VAR_4->end_proc, ((void*)0));
  if (VAR_2.accesslog)
    FUNC_2 (VAR_4, 200);


  if (VAR_4->status & VAR_1) {
    FUNC_8 (VAR_4);
    FUNC_10 (VAR_4);
    FUNC_11 (VAR_4);
  }

  VAR_5->closing = 0;
  FUNC_9 (VAR_3);
  FUNC_12 (VAR_4, VAR_5);
  FUNC_0 (("Active: %d\n", FUNC_4 (VAR_5->colist)));
}
