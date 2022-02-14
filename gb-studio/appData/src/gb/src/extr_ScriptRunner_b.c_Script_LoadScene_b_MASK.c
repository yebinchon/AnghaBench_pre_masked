
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {int x; int y; } ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_2()
{
  VAR_6 = (VAR_8[0] * 256) + VAR_8[1];
  VAR_4 = VAR_6 + 1;

  VAR_3.x = 0;
  VAR_3.x = (VAR_8[2] << 3) + 8;
  VAR_3.y = 0;
  VAR_3.y = (VAR_8[3] << 3) + 8;
  VAR_2.x = VAR_8[4] == 2 ? -1 : VAR_8[4] == 4 ? 1 : 0;
  VAR_2.y = VAR_8[4] == 8 ? -1 : VAR_8[4] == 1 ? 1 : 0;

  VAR_11 = VAR_1;
  VAR_5 = VAR_0;
  VAR_7 = VAR_0;

  FUNC_1(VAR_8[5]);
  FUNC_0();

  VAR_10 += 1 + VAR_9;
}
