
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uma_keg {int uk_align; } ;
 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(struct uma_keg *VAR_0, const char *VAR_1)
{

 switch(VAR_0->uk_align) {
 case 129:
  FUNC_0("%suk_align = UMA_ALIGN_PTR;\n", VAR_1);
  break;
 case 128:
  FUNC_0("%suk_align = UMA_ALIGN_SHORT;\n", VAR_1);
  break;

 case 132:
  FUNC_0("%suk_align = UMA_ALIGN_CHAR;\n", VAR_1);
  break;

 case 133:
  FUNC_0("%suk_align = UMA_ALIGN_CACHE;\n", VAR_1);
  break;

 default:
  FUNC_0("%suk_align = %d\n", VAR_1, VAR_0->uk_align);
 }
}
