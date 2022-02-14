
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum intel_dram_type { ____Placeholder_intel_dram_type } intel_dram_type ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static enum intel_dram_type FUNC_2(u32 VAR_6)
{
 if (!FUNC_1(VAR_6))
  return VAR_5;

 switch (VAR_6 & VAR_0) {
 case 131:
  return VAR_1;
 case 129:
  return VAR_3;
 case 130:
  return VAR_2;
 case 128:
  return VAR_4;
 default:
  FUNC_0(VAR_6);
  return VAR_5;
 }
}
