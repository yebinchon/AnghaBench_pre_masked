
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ debug_log; scalar_t__ invalid_requests_log; int output_stdout; scalar_t__ list_agents; } ;
struct TYPE_8__ {scalar_t__ pipe; } ;


 int FUNC_0 (char*) ;
 TYPE_7__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 () ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_1__* VAR_5 ;
 int FUNC_14 () ;

__attribute__((used)) static void
FUNC_15 (void)
{






  FUNC_12 ();


  if (VAR_1 && !VAR_0.output_stdout) {
    FUNC_8 (VAR_1);
    FUNC_14 ();
  }







  if (VAR_2->pipe)
    FUNC_2 (VAR_2->pipe);
  FUNC_10 (VAR_2);
  FUNC_3 (VAR_2);


  if (VAR_0.invalid_requests_log) {
    FUNC_0 (("Closing invalid requests log.\n"));
    FUNC_13 ();
  }


  FUNC_9 ();
  FUNC_5 ();
  if (VAR_0.debug_log) {
    FUNC_0 (("Bye.\n"));
    FUNC_1 ();
  }


  FUNC_3 (VAR_5);

  FUNC_7 ();

  FUNC_6 ();

  FUNC_3 (VAR_4);

  FUNC_3 (VAR_3);
}
