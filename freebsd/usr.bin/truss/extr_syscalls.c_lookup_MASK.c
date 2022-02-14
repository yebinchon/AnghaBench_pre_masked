
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlat {char const* str; int val; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct xlat *VAR_0, int VAR_1, int VAR_2)
{
 static char VAR_3[16];

 for (; VAR_0->str != ((void*)0); VAR_0++)
  if (VAR_0->val == VAR_1)
   return (VAR_0->str);
 switch (VAR_2) {
  case 8:
   FUNC_1(VAR_3, "0%o", VAR_1);
   break;
  case 16:
   FUNC_1(VAR_3, "0x%x", VAR_1);
   break;
  case 10:
   FUNC_1(VAR_3, "%u", VAR_1);
   break;
  default:
   FUNC_0(1,"Unknown lookup base");
   break;
 }
 return (VAR_3);
}
