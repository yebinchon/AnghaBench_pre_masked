
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsc2007 {int x_plate_ohms; } ;
struct ts_event {int x; int z1; int z2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

u32 FUNC_1(struct tsc2007 *VAR_1, struct ts_event *VAR_2)
{
 u32 VAR_3 = 0;


 if (VAR_2->x == VAR_0)
  VAR_2->x = 0;

 if (FUNC_0(VAR_2->x && VAR_2->z1)) {

  VAR_3 = VAR_2->z2 - VAR_2->z1;
  VAR_3 *= VAR_2->x;
  VAR_3 *= VAR_1->x_plate_ohms;
  VAR_3 /= VAR_2->z1;
  VAR_3 = (VAR_3 + 2047) >> 12;
 }

 return VAR_3;
}
