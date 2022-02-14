
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; } ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char const*,char const*,void*) ;
 int FUNC_3 (char const*,char const*) ;
 int VAR_1 ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 if (!FUNC_4(VAR_2, "showbranch.default")) {
  if (!VAR_3)
   return FUNC_1(VAR_2);




  if (!VAR_0.argc)
   FUNC_0(&VAR_0, "show-branch");
  FUNC_0(&VAR_0, VAR_3);
  return 0;
 }

 if (!FUNC_4(VAR_2, "color.showbranch")) {
  VAR_1 = FUNC_3(VAR_2, VAR_3);
  return 0;
 }

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
