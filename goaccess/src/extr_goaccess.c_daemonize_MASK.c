
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {int pidfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int,int) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12 (void)
{
  pid_t VAR_8, VAR_9;
  int VAR_10;


  VAR_8 = FUNC_5 ();

  if (VAR_8 < 0)
    FUNC_4 (VAR_0);
  if (VAR_8 > 0) {
    FUNC_11 (VAR_6.pidfile, VAR_8);
    FUNC_7 ("Daemonized GoAccess: %d\n", VAR_8);
    FUNC_4 (VAR_1);
  }

  FUNC_10 (0);

  VAR_9 = FUNC_8 ();
  if (VAR_9 < 0) {
    FUNC_0 (("Unable to setsid: %s.\n", FUNC_9 (VAR_7)));
    FUNC_4 (VAR_0);
  }



  if (FUNC_1 ("/") < 0) {
    FUNC_0 (("Unable to set chdir: %s.\n", FUNC_9 (VAR_7)));
    FUNC_4 (VAR_0);
  }



  if ((VAR_10 = FUNC_6 ("/dev/null", VAR_2, 0)) == -1) {
    FUNC_0 (("Unable to open /dev/null: %s.\n", FUNC_9 (VAR_7)));
    FUNC_4 (VAR_0);
  }

  FUNC_3 (VAR_10, VAR_4);
  FUNC_3 (VAR_10, VAR_5);
  FUNC_3 (VAR_10, VAR_3);
  if (VAR_10 > VAR_3) {
    FUNC_2 (VAR_10);
  }
}
