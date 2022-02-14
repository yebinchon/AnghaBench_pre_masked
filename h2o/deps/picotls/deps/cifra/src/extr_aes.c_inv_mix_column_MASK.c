
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static uint32_t FUNC_2(uint32_t VAR_0)
{
  uint32_t VAR_1 = FUNC_0(VAR_0),
           VAR_2 = FUNC_0(VAR_1),
           VAR_3 = VAR_0 ^ FUNC_0(VAR_2),
           VAR_4 = VAR_1 ^ VAR_3,
           VAR_5 = VAR_2 ^ VAR_3;

  return VAR_0 ^ VAR_1 ^ VAR_5 ^ FUNC_1(VAR_4, 24) ^ FUNC_1(VAR_5, 16) ^ FUNC_1(VAR_3, 8);
}
