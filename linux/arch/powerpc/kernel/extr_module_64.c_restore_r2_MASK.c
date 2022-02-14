
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct module {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__*) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, u32 *VAR_3, struct module *VAR_4)
{
 u32 *VAR_5 = VAR_3 - 1;

 if (FUNC_1(VAR_2, VAR_5))
  return 1;






 if (!FUNC_0(*VAR_5))
  return 1;

 if (*VAR_3 != VAR_1) {
  FUNC_2("%s: Expected nop after call, got %08x at %pS\n",
   VAR_4->name, *VAR_3, VAR_3);
  return 0;
 }

 *VAR_3 = VAR_0;
 return 1;
}
