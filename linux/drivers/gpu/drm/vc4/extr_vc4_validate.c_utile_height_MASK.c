
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(int VAR_0)
{
 switch (VAR_0) {
 case 1:
  return 8;
 case 2:
 case 4:
 case 8:
  return 4;
 default:
  FUNC_0("unknown cpp: %d\n", VAR_0);
  return 1;
 }
}
