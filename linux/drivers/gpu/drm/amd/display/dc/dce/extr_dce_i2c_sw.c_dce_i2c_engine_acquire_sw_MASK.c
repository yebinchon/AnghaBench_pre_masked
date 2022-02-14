
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ddc {int dummy; } ;
struct dce_i2c_sw {int dummy; } ;


 int FUNC_0 (struct dce_i2c_sw*,struct ddc*) ;
 int FUNC_1 (int) ;

bool FUNC_2(
 struct dce_i2c_sw *VAR_0,
 struct ddc *VAR_1)
{
 uint32_t VAR_2 = 0;
 bool VAR_3;

 do {

  VAR_3 = FUNC_0(
    VAR_0, VAR_1);

  if (VAR_3)
   break;



  FUNC_1(10);

  ++VAR_2;
 } while (VAR_2 < 2);

 return VAR_3;
}
