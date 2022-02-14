
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*,int) ;

int FUNC_2(const char *VAR_0, int VAR_1, int VAR_2,
      const char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_1 < VAR_4 ? VAR_1 : VAR_4, VAR_7;
 unsigned char VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_0, VAR_3, VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_1 == VAR_4)
  return 0;
 VAR_8 = VAR_0[VAR_6];
 if (!VAR_8 && FUNC_0(VAR_2))
  VAR_8 = '/';
 VAR_9 = VAR_3[VAR_6];
 if (!VAR_9 && FUNC_0(VAR_5))
  VAR_9 = '/';
 if (VAR_8 == '/' && !VAR_9)
  return 0;
 if (VAR_9 == '/' && !VAR_8)
  return 0;
 return VAR_8 - VAR_9;
}
