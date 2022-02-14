
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int color_scheme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_4)
{
  int VAR_5 = 0;

  FUNC_0 ();
  if (FUNC_2 ("Green", VAR_4) == 0) {
    VAR_3.color_scheme = VAR_2;
    VAR_5 = 1;
  } else if (FUNC_2 ("Monochrome", VAR_4) == 0) {
    VAR_3.color_scheme = VAR_0;
    VAR_5 = 1;
  } else if (FUNC_2 ("Monokai", VAR_4) == 0) {
    VAR_3.color_scheme = VAR_1;
    VAR_5 = 1;
  } else if (FUNC_2 ("Custom Scheme", VAR_4) == 0) {
    VAR_5 = 0;
  }
  FUNC_1 (VAR_5);
}
