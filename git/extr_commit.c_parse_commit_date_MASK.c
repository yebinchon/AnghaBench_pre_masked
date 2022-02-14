
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static timestamp_t FUNC_2(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 if (VAR_0 + 6 >= VAR_1)
  return 0;
 if (FUNC_0(VAR_0, "author", 6))
  return 0;
 while (VAR_0 < VAR_1 && *VAR_0++ != '\n')
            ;
 if (VAR_0 + 9 >= VAR_1)
  return 0;
 if (FUNC_0(VAR_0, "committer", 9))
  return 0;
 while (VAR_0 < VAR_1 && *VAR_0++ != '>')
            ;
 if (VAR_0 >= VAR_1)
  return 0;
 VAR_2 = VAR_0;
 while (VAR_0 < VAR_1 && *VAR_0++ != '\n')
            ;
 if (VAR_0 >= VAR_1)
  return 0;

 return FUNC_1(VAR_2, ((void*)0), 10);
}
