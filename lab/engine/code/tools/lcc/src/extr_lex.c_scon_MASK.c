
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 char FUNC_3 () ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void *FUNC_6(int VAR_7, void *VAR_8(int VAR_9, void *VAR_10), void *VAR_11) {
 int VAR_12 = 0, VAR_13 = 0;

 do {
  VAR_4++;
  while (*VAR_4 != VAR_7) {
   int VAR_14;
   if (VAR_6[*VAR_4]&VAR_3) {
    if (VAR_4 < VAR_5)
     break;
    VAR_4++;
    FUNC_4();
    if (VAR_4 == VAR_5)
     break;
    continue;
   }
   VAR_14 = *VAR_4++;
   if (VAR_14 == '\\') {
    if (VAR_6[*VAR_4]&VAR_3) {
     if (VAR_4 < VAR_5)
      break;
     VAR_4++;
     FUNC_4();
    }
    if (VAR_5 - VAR_4 < VAR_2)
     FUNC_2();
    VAR_14 = FUNC_0(VAR_7);
   } else if (VAR_14 < 0 || VAR_14 > 255 || VAR_6[VAR_14] == 0)
    VAR_13++;
   if (VAR_12++ < VAR_1)
    VAR_11 = VAR_8(VAR_14, VAR_11);
  }
  if (*VAR_4 == VAR_7)
   VAR_4++;
  else
   FUNC_1("missing %c\n", VAR_7);
 } while (VAR_7 == '"' && FUNC_3() == '"');
 VAR_11 = VAR_8(0, VAR_11);
 if (VAR_12 >= VAR_1)
  FUNC_1("%s literal too long\n", VAR_7 == '"' ? "string" : "character");
 if (VAR_0 >= 2 && VAR_7 == '"' && VAR_12 > 509)
  FUNC_5("more than 509 characters in a string literal\n");
 if (VAR_0 >= 2 && VAR_13 > 0)
  FUNC_5("%s literal contains non-portable characters\n",
   VAR_7 == '"' ? "string" : "character");
 return VAR_11;
}
