
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,int) ;


 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3 (DSL_DEV_Device_t * VAR_2, int VAR_3)
{
 u32 VAR_4 = 0x0;

 FUNC_1 (VAR_2, (u32) VAR_1, &VAR_4);
 switch (VAR_3) {
 case 129:
  VAR_4 &= ~(VAR_0);
  break;
 case 128:
  VAR_4 |= (VAR_0);
  break;
 default:
  FUNC_0 ("IFX_MEI_ControlModeSet: unkonwn mode [%d]\n", VAR_3);
  return;
 }
 FUNC_2 (VAR_2, (u32) VAR_1, VAR_4);
}
