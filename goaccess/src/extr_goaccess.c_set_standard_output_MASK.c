
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ output_format_idx; scalar_t__ daemonize; scalar_t__ real_time_html; } ;
struct TYPE_5__ {int fd; } ;


 int FUNC_0 (char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  int VAR_4 = 0;
  VAR_2 = FUNC_4 ();
  VAR_1 = FUNC_3 ();


  if (FUNC_2 (((void*)0), "html", 0) == 0 || VAR_0.output_format_idx == 0)
    VAR_4 = 1;


  if (VAR_4 && VAR_0.real_time_html) {

    if ((VAR_1->fd = FUNC_5 ()) == -1) {
      FUNC_0 (("Unable to open FIFO for read.\n"));
      return;
    }

    if (VAR_0.daemonize)
      FUNC_1 ();
    FUNC_7 (VAR_2, VAR_1);
  }
  FUNC_6 ();


  FUNC_8 (VAR_3);
}
