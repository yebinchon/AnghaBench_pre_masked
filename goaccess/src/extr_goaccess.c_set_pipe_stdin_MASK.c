
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int real_time_html; scalar_t__ output_stdout; } ;
struct TYPE_3__ {int * pipe; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_4 (int,int ,int) ;
 int * FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_9 (char**) ;
 int * VAR_6 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (void)
{
  char *VAR_7 = ((void*)0);
  FILE *VAR_8 = VAR_6;
  int VAR_9, VAR_10;







  if ((VAR_9 = FUNC_9 (&VAR_7)) == -1)
    goto out;

  if ((VAR_10 = FUNC_2 (FUNC_6 (VAR_6))) == -1)
    FUNC_0 ("Unable to dup stdin: %s", FUNC_10 (VAR_4));

  VAR_8 = FUNC_5 (VAR_10, "r");
  if (FUNC_8 (VAR_7, "r", VAR_6) == 0)
    FUNC_0 ("Unable to open input from TTY");
  if (FUNC_6 (VAR_6) != 0)
    (void) FUNC_3 (FUNC_6 (VAR_6), 0);

  FUNC_1 ();


  if (VAR_3.output_stdout && !VAR_3.real_time_html)
    goto out;


  if (FUNC_4 (VAR_10, VAR_1, FUNC_4 (VAR_10, VAR_0, 0) | VAR_2) == -1)
    FUNC_0 ("Unable to set fd as non-blocking: %s.", FUNC_10 (VAR_4));
out:

  VAR_5->pipe = VAR_8;
  FUNC_7 (VAR_7);
}
