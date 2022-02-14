
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;
typedef scalar_t__ flag ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

float32 FUNC_3(float32 VAR_0, float32 VAR_1)
{
 flag VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_2 == VAR_3) {
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 } else {
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 }

}
