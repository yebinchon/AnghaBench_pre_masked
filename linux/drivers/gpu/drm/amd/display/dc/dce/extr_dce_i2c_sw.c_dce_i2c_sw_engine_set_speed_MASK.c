
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_i2c_sw {int speed; int clock_delay; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1(
 struct dce_i2c_sw *VAR_1,
 uint32_t VAR_2)
{
 FUNC_0(VAR_2);

 VAR_1->speed = VAR_2 ? VAR_2 : VAR_0;

 VAR_1->clock_delay = 1000 / VAR_1->speed;

 if (VAR_1->clock_delay < 12)
  VAR_1->clock_delay = 12;
}
