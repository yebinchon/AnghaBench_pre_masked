
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kp_band { ____Placeholder_kp_band } kp_band ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 unsigned long** VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_4, enum kp_band VAR_5)
{
 int VAR_6;

 if (VAR_4 < VAR_3[0][0])
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4 >= VAR_3[VAR_6][0] &&
      VAR_4 < VAR_3[VAR_6][1])
   return VAR_2[VAR_5][VAR_6];
 }
 return -VAR_0;
}
