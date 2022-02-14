
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1,
     const char *VAR_2, const char *VAR_3)
{
 int VAR_4 = VAR_1 - VAR_0;
 int VAR_5 = VAR_3 - VAR_2;
 int VAR_6 = VAR_4 < VAR_5 ? VAR_4 : VAR_5;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_2, VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_4 - VAR_5;
}
