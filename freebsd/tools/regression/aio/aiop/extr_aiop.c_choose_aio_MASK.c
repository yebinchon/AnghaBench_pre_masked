
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iot_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static iot_t
FUNC_1(iot_t VAR_2)
{

 if (VAR_2 == VAR_0)
  return VAR_0;
 else if (VAR_2 == VAR_1)
  return VAR_1;
 return (FUNC_0() & 0x01 ? VAR_0 : VAR_1);
}
