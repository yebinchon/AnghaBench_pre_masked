
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlxcpld_led_platform_types { ____Placeholder_mlxcpld_led_platform_types } mlxcpld_led_platform_types ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (char const*,int ) ;

__attribute__((used)) static enum
mlxcpld_led_platform_types FUNC_3(void)
{
 const char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return VAR_1;

 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (FUNC_2(VAR_3, VAR_2[VAR_4]))
   return VAR_4;
 }

 return VAR_1;
}
