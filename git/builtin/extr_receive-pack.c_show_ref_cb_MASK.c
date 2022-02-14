
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int dummy; } ;
struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (struct oidset*,struct object_id const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,struct object_id const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const struct object_id *VAR_1,
         int VAR_2, void *VAR_3)
{
 struct oidset *VAR_4 = VAR_3;
 const char *VAR_5 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_5, VAR_0))
  return 0;






 if (!VAR_5) {
  if (FUNC_0(VAR_4, VAR_1))
   return 0;
  VAR_5 = ".have";
 } else {
  FUNC_0(VAR_4, VAR_1);
 }
 FUNC_2(VAR_5, VAR_1);
 return 0;
}
