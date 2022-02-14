
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int push_cert; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const**) ;
 int FUNC_2 (char const*,char const*,void*) ;
 int FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 FUNC_3(VAR_4, VAR_5, ((void*)0));

 if (!FUNC_6(VAR_4, "push.gpgsign")) {
  const char *VAR_7;
  if (!FUNC_1("push.gpgsign", &VAR_7)) {
   switch (FUNC_4(VAR_7)) {
   case 0:
    VAR_3.push_cert = VAR_2;
    break;
   case 1:
    VAR_3.push_cert = VAR_0;
    break;
   default:
    if (VAR_7 && !FUNC_5(VAR_7, "if-asked"))
     VAR_3.push_cert = VAR_1;
    else
     return FUNC_0("Invalid value for '%s'", VAR_4);
   }
  }
 }
 return FUNC_2(VAR_4, VAR_5, VAR_6);
}
