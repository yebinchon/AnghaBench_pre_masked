
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int rman_res_t ;


 int FUNC_0 (char*,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(uint8_t VAR_0, rman_res_t VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 1, VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if ((VAR_0 & (1 << VAR_2)) != 0) {
   FUNC_0("%s0x%jx-0x%jx", VAR_3 ? "" : ", ",
       VAR_2 * VAR_1, (VAR_2 + 1) * VAR_1 - 1);
   VAR_3 = 0;
  }
 }
}
