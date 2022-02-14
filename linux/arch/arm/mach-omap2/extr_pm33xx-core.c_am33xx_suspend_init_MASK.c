
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2;

 VAR_1 = FUNC_1("gfx_l4ls_gfx_clkdm");

 if (!VAR_1) {
  FUNC_2("PM: Cannot lookup gfx_l4ls_clkdm clockdomains\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_0();

 return VAR_2;
}
