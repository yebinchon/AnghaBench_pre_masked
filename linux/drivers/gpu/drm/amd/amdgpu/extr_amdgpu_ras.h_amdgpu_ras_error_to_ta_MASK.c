
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ta_ras_error_type { ____Placeholder_ta_ras_error_type } ta_ras_error_type ;
typedef enum amdgpu_ras_error_type { ____Placeholder_amdgpu_ras_error_type } amdgpu_ras_error_type ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static inline enum ta_ras_error_type
FUNC_1(enum amdgpu_ras_error_type VAR_5) {
 switch (VAR_5) {
 case 131:
  return VAR_1;
 case 130:
  return VAR_2;
 case 128:
  return VAR_4;
 case 132:
  return VAR_0;
 case 129:
  return VAR_3;
 default:
  FUNC_0(1, "RAS ERROR: unexpected error type %d\n", VAR_5);
  return VAR_1;
 }
}
