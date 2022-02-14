
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void) {
 if (*VAR_1 == 0) {
  VAR_1 = VAR_2;
  *VAR_1 = 0;
  if (FUNC_0(VAR_2, sizeof VAR_2, VAR_3) == ((void*)0))
   return VAR_0;
  VAR_5++;
  while (VAR_2[0] == '%' && VAR_2[1] == '{' && VAR_2[2] == '\n') {
   for (;;) {
    if (FUNC_0(VAR_2, sizeof VAR_2, VAR_3) == ((void*)0)) {
     FUNC_3("unterminated %{...%}\n");
     return VAR_0;
    }
    VAR_5++;
    if (FUNC_2(VAR_2, "%}\n") == 0)
     break;
    FUNC_1(VAR_2, VAR_4);
   }
   if (FUNC_0(VAR_2, sizeof VAR_2, VAR_3) == ((void*)0))
    return VAR_0;
   VAR_5++;
  }
 }
 return *VAR_1++;
}
