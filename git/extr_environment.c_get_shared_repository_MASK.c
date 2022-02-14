
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const**) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_2(void)
{
 if (VAR_0) {
  const char *VAR_2 = "core.sharedrepository";
  const char *VAR_3;
  if (!FUNC_0(VAR_2, &VAR_3))
   VAR_1 = FUNC_1(VAR_2, VAR_3);
  VAR_0 = 0;
 }
 return VAR_1;
}
