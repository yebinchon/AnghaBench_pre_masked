
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config_type; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(void)
{


 if (VAR_0->config_type != 0) {
  VAR_4 = 1;
  switch (VAR_0->config_type) {
  case 1:
  case 2:
  case 3:
  case 4:
   VAR_3 = 1;
   break;
  case 5:
  case 6:
  case 7:
   VAR_3 = 2;
   break;
  default:
   FUNC_1("Unknown pre-defined MP Table config type %d",
       VAR_0->config_type);
  }
  VAR_2 = VAR_3 - 1;
 } else
  FUNC_0(VAR_1, ((void*)0));
}
