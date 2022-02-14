
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_2 (DSL_DEV_Device_t *VAR_2, int VAR_3)
{
 DSL_DEV_MeiError_t VAR_4;
 switch (VAR_3) {
 case 0:
  VAR_4 = VAR_1;
  FUNC_0 (VAR_2);
  break;
 case 1:
  FUNC_1 (VAR_2);
  VAR_4 = VAR_1;
  break;
 default:
  VAR_4 = VAR_0;
  break;

 }
 return VAR_4;
}
