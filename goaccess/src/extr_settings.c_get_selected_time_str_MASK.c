
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec; int usec; int fmt24; } ;
 char* FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;

char *
FUNC_1 (size_t VAR_1)
{
  char *VAR_2 = ((void*)0);
  switch (VAR_1) {
  case 137:
  case 135:
  case 133:
  case 132:
  case 130:
  case 129:
  case 128:
  case 136:
    VAR_2 = FUNC_0 (VAR_0.fmt24);
    break;
  case 134:
    VAR_2 = FUNC_0 (VAR_0.usec);
    break;
  case 131:
    VAR_2 = FUNC_0 (VAR_0.sec);
    break;
  }

  return VAR_2;
}
