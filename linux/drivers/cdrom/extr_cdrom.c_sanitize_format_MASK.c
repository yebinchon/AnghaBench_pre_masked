
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame; int second; int minute; } ;
union cdrom_addr {int lba; TYPE_1__ msf; } ;
typedef scalar_t__ u_char ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static
void FUNC_0(union cdrom_addr *VAR_1,
       u_char * VAR_2, u_char VAR_3)
{
 if (*VAR_2 == VAR_3)
  return;
 if (VAR_3 == VAR_0) {
  VAR_1->lba = (int) VAR_1->msf.frame +
   75 * (VAR_1->msf.second - 2 + 60 * VAR_1->msf.minute);
 } else {
  int VAR_4 = VAR_1->lba;
  VAR_1->msf.frame = VAR_4 % 75;
  VAR_4 /= 75;
  VAR_4 += 2;
  VAR_1->msf.second = VAR_4 % 60;
  VAR_1->msf.minute = VAR_4 / 60;
 }
 *VAR_2 = VAR_3;
}
