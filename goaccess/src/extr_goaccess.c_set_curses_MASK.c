
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_color; scalar_t__ read_stdin; scalar_t__ load_conf_dlg; int color_scheme; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 char* FUNC_12 () ;

__attribute__((used)) static void
FUNC_13 (int *VAR_7)
{
  const char *VAR_8 = ((void*)0);

  FUNC_9 ();
  FUNC_8 ();
  if (VAR_2.no_color || FUNC_2 () == VAR_0) {
    VAR_2.color_scheme = VAR_1;
    VAR_2.no_color = 1;
  } else {
    FUNC_10 ();
  }
  FUNC_3 (0);
  FUNC_4 (&VAR_4, &VAR_5);
  FUNC_7 (VAR_6);


  if (!VAR_2.read_stdin && (FUNC_12 () || VAR_2.load_conf_dlg)) {
    FUNC_5 ();
    *VAR_7 = FUNC_6 (VAR_3, VAR_6);
    FUNC_1 ();
  }

  else if (VAR_2.read_stdin && (VAR_8 = FUNC_12 ())) {
    FUNC_0 ("%s", VAR_8);
  }

  else {
    FUNC_11 (VAR_6);
  }
}
