
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (char const*,char const**) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
 const char *VAR_1;
 timestamp_t VAR_2;

 if (!FUNC_2(VAR_0, &VAR_1) && VAR_1) {
  if (FUNC_3(VAR_1, &VAR_2))
   FUNC_1(FUNC_0("failed to parse '%s' value '%s'"), VAR_0, VAR_1);
  return VAR_2 == 0;
 }
 return 0;
}
