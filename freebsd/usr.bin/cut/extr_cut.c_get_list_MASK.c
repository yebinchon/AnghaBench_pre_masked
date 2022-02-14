
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 size_t VAR_2 ;
 int FUNC_2 (char*,char,size_t) ;
 int FUNC_3 (size_t) ;
 char* VAR_3 ;
 char* FUNC_4 (char**,char*) ;
 size_t FUNC_5 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_6(char *VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 char *VAR_8;
 char *VAR_9;







 for (; (VAR_9 = FUNC_4(&VAR_4, ", \t")) != ((void*)0);) {
  VAR_5 = VAR_6 = VAR_7 = 0;
  if (*VAR_9 == '-') {
   ++VAR_9;
   VAR_5 = 1;
  }
  if (FUNC_1((unsigned char)*VAR_9)) {
   VAR_6 = VAR_7 = FUNC_5(VAR_9, &VAR_9, 10);
   if (VAR_5 && VAR_6 > VAR_0)
    VAR_0 = VAR_6;
  }
  if (*VAR_9 == '-') {
   if (FUNC_1((unsigned char)VAR_9[1]))
    VAR_7 = FUNC_5(VAR_9 + 1, &VAR_9, 10);
   if (*VAR_9 == '-') {
    ++VAR_9;
    if (!VAR_1 || VAR_1 > VAR_7)
     VAR_1 = VAR_7;
   }
  }
  if (*VAR_9)
   FUNC_0(1, "[-bcf] list: illegal list value");
  if (!VAR_7 || !VAR_6)
   FUNC_0(1, "[-bcf] list: values may not include zero");
  if (VAR_2 < VAR_7) {
   VAR_2 = VAR_7;
   FUNC_3(VAR_2 + 1);
  }
  for (VAR_8 = VAR_3 + VAR_6; VAR_6++ <= VAR_7; *VAR_8++ = 1);
 }


 if (VAR_1 && VAR_2 > VAR_1) {
  VAR_2 = VAR_1;
  FUNC_3(VAR_2 + 1);
 }


 if (VAR_2 < VAR_0) {
  VAR_2 = VAR_0;
  FUNC_3(VAR_2 + 1);
 }


 if (VAR_0)
  FUNC_2(VAR_3 + 1, '1', VAR_0);
}
