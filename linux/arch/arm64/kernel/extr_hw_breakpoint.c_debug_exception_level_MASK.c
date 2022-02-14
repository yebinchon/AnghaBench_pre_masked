
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dbg_active_el { ____Placeholder_dbg_active_el } dbg_active_el ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static enum dbg_active_el FUNC_1(int VAR_3)
{
 switch (VAR_3) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 default:
  FUNC_0("invalid breakpoint privilege level %d\n", VAR_3);
  return -VAR_2;
 }
}
