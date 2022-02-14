
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int key_ctrl; int key_data; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;

void FUNC_1(const char *VAR_2, int VAR_3)
{
 u_char VAR_4;

 if ((VAR_3 < 1) || (VAR_3 > 7))
  FUNC_0("ikbd: maximum string length exceeded");
 while (VAR_3) {
  VAR_4 = VAR_1.key_ctrl;
  if (VAR_4 & VAR_0) {
   VAR_1.key_data = *VAR_2++;
   VAR_3--;
  }
 }
}
