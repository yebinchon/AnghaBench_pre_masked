
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; int * util; } ;


 scalar_t__ FUNC_0 (char const*,int ,char const**) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0,
        const struct string_list_item *VAR_1)
{
 int VAR_2 = 0;
 if (VAR_1->util == ((void*)0)) {
  if (!FUNC_1(VAR_1->string, VAR_0, 0))
   VAR_2 = 1;
 } else {
  const char *VAR_3;
  if (FUNC_0(VAR_0, VAR_1->string, &VAR_3) &&
      (!*VAR_3 || *VAR_3 == '/'))
   VAR_2 = 1;
 }
 return VAR_2;
}
