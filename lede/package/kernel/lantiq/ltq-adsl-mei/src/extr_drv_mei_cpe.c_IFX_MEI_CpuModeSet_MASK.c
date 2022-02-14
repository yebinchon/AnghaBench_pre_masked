
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;
typedef int DSL_DEV_CpuMode_t ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_3 (DSL_DEV_Device_t *VAR_1,
     DSL_DEV_CpuMode_t VAR_2)
{
 DSL_DEV_MeiError_t VAR_3 = VAR_0;
 switch (VAR_2) {
 case 130:
  VAR_3 = FUNC_0 (VAR_1);
  break;
 case 128:
  VAR_3 = FUNC_2 (VAR_1);
  break;
 case 129:
  VAR_3 = FUNC_1 (VAR_1);
  break;
 default:
  break;
 }
 return VAR_3;
}
