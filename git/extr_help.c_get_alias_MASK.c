
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_2__ {int util; } ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 TYPE_1__* FUNC_1 (struct string_list*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct string_list *VAR_3 = VAR_2;

 if (FUNC_0(VAR_0, "alias.", &VAR_0))
  FUNC_1(VAR_3, VAR_0)->util = FUNC_2(VAR_1);

 return 0;
}
