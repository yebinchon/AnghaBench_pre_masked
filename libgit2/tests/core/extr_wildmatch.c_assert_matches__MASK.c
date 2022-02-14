
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,size_t,char*,char const*,int) ;
 char FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, const char *VAR_3,
  char VAR_4, char VAR_5,
  char VAR_6, char VAR_7,
  const char *VAR_8, size_t VAR_9)
{
 if (FUNC_1(VAR_3, VAR_2, VAR_1) == VAR_4)
  FUNC_0(VAR_8, VAR_9, "Test failed (wildmatch).", VAR_2, 1);
 if (FUNC_1(VAR_3, VAR_2, VAR_1|VAR_0) == VAR_5)
  FUNC_0(VAR_8, VAR_9, "Test failed (iwildmatch).", VAR_2, 1);
 if (FUNC_1(VAR_3, VAR_2, 0) == VAR_6)
  FUNC_0(VAR_8, VAR_9, "Test failed (pathmatch).", VAR_2, 1);
 if (FUNC_1(VAR_3, VAR_2, VAR_0) == VAR_7)
  FUNC_0(VAR_8, VAR_9, "Test failed (ipathmatch).", VAR_2, 1);
}
