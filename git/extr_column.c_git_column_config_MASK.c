
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,char const*,unsigned int*) ;
 int FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (char const*,char const*) ;

int FUNC_3(const char *VAR_0, const char *VAR_1,
        const char *VAR_2, unsigned int *VAR_3)
{
 const char *VAR_4;

 if (!FUNC_1(VAR_0, "column.", &VAR_4))
  return 0;

 if (!FUNC_2(VAR_4, "ui"))
  return FUNC_0(VAR_0, VAR_1, "ui", VAR_3);

 if (VAR_2 && !FUNC_2(VAR_4, VAR_2))
  return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);

 return 0;
}
