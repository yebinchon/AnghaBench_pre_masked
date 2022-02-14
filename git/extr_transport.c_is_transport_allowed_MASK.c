
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;


 int FUNC_0 (char*) ;



 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int) ;
 struct string_list* FUNC_3 () ;
 int FUNC_4 (struct string_list const*,char const*) ;

int FUNC_5(const char *VAR_0, int VAR_1)
{
 const struct string_list *VAR_2 = FUNC_3();
 if (VAR_2)
  return FUNC_4(VAR_2, VAR_0);

 switch (FUNC_1(VAR_0)) {
 case 130:
  return 1;
 case 129:
  return 0;
 case 128:
  if (VAR_1 < 0)
   VAR_1 = FUNC_2("GIT_PROTOCOL_FROM_USER", 1);
  return VAR_1;
 }

 FUNC_0("invalid protocol_allow_config type");
}
