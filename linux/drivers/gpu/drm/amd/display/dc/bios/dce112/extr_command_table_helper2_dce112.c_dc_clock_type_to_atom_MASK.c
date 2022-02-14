
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum bp_dce_clock_type { ____Placeholder_bp_dce_clock_type } bp_dce_clock_type ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(
  enum bp_dce_clock_type VAR_2,
  uint32_t *VAR_3)
{
 bool VAR_4 = 1;

 if (VAR_3 != ((void*)0)) {
  switch (VAR_2) {
  case 129:
   *VAR_3 = VAR_0;
   break;

  case 128:
   *VAR_3 = VAR_1;
   break;

  default:
   FUNC_0(0);
   break;
  }
 }

 return VAR_4;
}
