
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1,
         unsigned char *VAR_2, unsigned char *VAR_3)
{
 if (!VAR_0 || (VAR_2 && VAR_3 && !FUNC_0(VAR_2, VAR_3)))
  return 0;
 FUNC_1(VAR_0, "refs/heads/", &VAR_0);
 if (!FUNC_1(VAR_1, "refs/heads/", &VAR_1))
  FUNC_1(VAR_1, "heads/", &VAR_1);
 return !FUNC_2(VAR_0, VAR_1);
}
