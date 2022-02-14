
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const char *VAR_3)
{
 if (!FUNC_2(VAR_2, "mailmap.file"))
  return FUNC_0(&VAR_1, VAR_2, VAR_3);
 if (!FUNC_2(VAR_2, "mailmap.blob"))
  return FUNC_1(&VAR_0, VAR_2, VAR_3);


 return 0;
}
