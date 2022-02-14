
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int present; void* id_shift; } ;


 int FUNC_0 (int,int,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int*) ;
 void* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 u_int VAR_3[4];
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_1 < 0x4) {






  VAR_0[0].id_shift = VAR_2;
  VAR_0[0].present = 1;
  VAR_0[1].id_shift = VAR_2;
  VAR_0[1].present = 1;
  return;
 }

 for (VAR_7 = 0; ; VAR_7++) {
  FUNC_1(0x4, VAR_7, VAR_3);
  VAR_6 = VAR_3[0] & 0x1f;
  VAR_4 = (VAR_3[0] >> 5) & 0x7;
  VAR_5 = 1 + ((VAR_3[0] >> 14) & 0xfff);

  if (!FUNC_0(VAR_6, VAR_4, VAR_5))
   break;
 }
}
