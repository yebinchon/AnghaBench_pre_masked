
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char* FUNC_0 (char*,char,size_t) ;

__attribute__((used)) static inline char *
FUNC_1(char *VAR_1, size_t VAR_2)
{




 char *VAR_3, *VAR_4, *VAR_5;
 VAR_3 = VAR_1+VAR_2;
 while (VAR_1 < VAR_3) {
  size_t VAR_6 = (VAR_1 + 128 < VAR_3) ? 128 : (VAR_3 - VAR_1);
  VAR_4 = FUNC_0(VAR_1, '\r', VAR_6);
  VAR_5 = FUNC_0(VAR_1, '\n', VAR_6);
  if (VAR_4) {
   if (VAR_5 && VAR_5 < VAR_4)
    return VAR_5;
   return VAR_4;
  } else if (VAR_5) {
   return VAR_5;
  }
  VAR_1 += 128;
 }

 return ((void*)0);

}
