
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rman_res_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

rman_res_t
FUNC_0(int VAR_3, rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6)
{

 if (VAR_4 + VAR_6 - 1 != VAR_5) {
  if (VAR_3 == VAR_1 && VAR_4 < VAR_2)
   VAR_4 = VAR_2;
  if (VAR_3 == VAR_0 && VAR_4 < 0x1000)
   VAR_4 = 0x1000;
 }
 return (VAR_4);
}
