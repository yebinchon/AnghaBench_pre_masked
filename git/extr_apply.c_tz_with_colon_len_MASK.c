
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2, *VAR_3;

 if (VAR_1 < FUNC_1(" +08:00") || VAR_0[VAR_1 - FUNC_1(":00")] != ':')
  return 0;
 VAR_2 = VAR_0 + VAR_1 - FUNC_1(" +08:00");

 if (VAR_2[0] != ' ' || (VAR_2[1] != '+' && VAR_2[1] != '-'))
  return 0;
 VAR_3 = VAR_2 + 2;
 if (!FUNC_0(*VAR_3++) || !FUNC_0(*VAR_3++) || *VAR_3++ != ':' ||
     !FUNC_0(*VAR_3++) || !FUNC_0(*VAR_3++))
  return 0;

 return VAR_0 + VAR_1 - VAR_2;
}
