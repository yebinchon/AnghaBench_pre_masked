
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hour_spec_min; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (char *VAR_1, char *VAR_2)
{

  if (VAR_0.hour_spec_min && VAR_1[1] != '\0') {
    VAR_1[2] = '\0';
    return;
  }


  if ((VAR_1 - VAR_2) > 0)
    *VAR_1 = '\0';
}
