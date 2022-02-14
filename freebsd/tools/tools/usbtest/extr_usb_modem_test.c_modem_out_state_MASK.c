
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {int out_state; int c0; scalar_t__ modem_at_mode; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(uint8_t *VAR_1)
{
 if (VAR_0.modem_at_mode) {
  switch (VAR_0.out_state & 3) {
  case 0:
   *VAR_1 = 'A';
   break;
  case 1:
   *VAR_1 = 'T';
   break;
  case 2:
   *VAR_1 = '\r';
   break;
  default:
   *VAR_1 = '\n';
   VAR_0.c0++;
   break;
  }
  VAR_0.out_state++;
 } else {
  *VAR_1 = VAR_0.out_state;
  VAR_0.out_state++;
  VAR_0.out_state %= 255;
 }
}
