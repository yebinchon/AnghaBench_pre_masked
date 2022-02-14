
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(uint VAR_0)
{

 if (VAR_0 > 3600) {
  FUNC_0("%u:", VAR_0 / 3600);
 }
 if (VAR_0 > 60) {
  VAR_0 %= 3600;
  FUNC_0("%02u:%02u", VAR_0 / 60, VAR_0 % 60);
 } else {
  FUNC_0("%us", VAR_0);
 }
}
