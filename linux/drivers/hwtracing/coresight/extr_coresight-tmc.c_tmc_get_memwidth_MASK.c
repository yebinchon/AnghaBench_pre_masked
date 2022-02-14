
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum tmc_mem_intf_width { ____Placeholder_tmc_mem_intf_width } tmc_mem_intf_width ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum tmc_mem_intf_width FUNC_1(u32 VAR_4)
{
 enum tmc_mem_intf_width VAR_5;
 switch (FUNC_0(VAR_4, 8, 10)) {
 case 0x2:
  VAR_5 = VAR_2;
  break;
 case 0x3:
  VAR_5 = VAR_3;
  break;
 case 0x4:
  VAR_5 = VAR_0;
  break;
 case 0x5:
  VAR_5 = VAR_1;
  break;
 default:
  VAR_5 = 0;
 }

 return VAR_5;
}
