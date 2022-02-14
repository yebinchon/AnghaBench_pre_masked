
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static inline void FUNC_5(char *VAR_0)
{
 char *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 != VAR_0)
  FUNC_1(VAR_0, VAR_1, FUNC_4(VAR_1));
 while (*VAR_0) {
  if (!FUNC_0(*VAR_0++))
   continue;
  if (FUNC_0(*VAR_0)) {
   VAR_1 = FUNC_2(VAR_0);
   FUNC_1(VAR_0, VAR_1, FUNC_4(VAR_1) + 1);
  }
 }
}
