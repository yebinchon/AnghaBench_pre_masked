
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*,int) ;

int FUNC_2(const char *VAR_0, int VAR_1, int VAR_2,
        const char *VAR_3, int VAR_4, int VAR_5)
{
 unsigned char VAR_6, VAR_7;
 int VAR_8 = VAR_1 < VAR_4 ? VAR_1 : VAR_4;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_0, VAR_3, VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_6 = VAR_0[VAR_8];
 VAR_7 = VAR_3[VAR_8];
 if (!VAR_6 && FUNC_0(VAR_2))
  VAR_6 = '/';
 if (!VAR_7 && FUNC_0(VAR_5))
  VAR_7 = '/';
 return (VAR_6 < VAR_7) ? -1 : (VAR_6 > VAR_7) ? 1 : 0;
}
