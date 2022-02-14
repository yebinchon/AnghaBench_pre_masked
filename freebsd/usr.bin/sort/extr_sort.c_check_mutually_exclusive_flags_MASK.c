
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char,int,int ) ;
 int FUNC_1 (int) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_2(char VAR_2, bool *VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6, VAR_7;

 VAR_6 = VAR_7 = 0;
 VAR_4 = 0;

 for (int VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_5 = VAR_1[VAR_8];

  if (VAR_5 != VAR_2) {
   if (VAR_3[VAR_8]) {
    if (VAR_7)
     FUNC_0(1, "%c:%c: %s", VAR_2, VAR_5, FUNC_1(1));
    VAR_6 = 1;
    VAR_4 = VAR_8;
   }
  } else {
   if (VAR_6)
    FUNC_0(1, "%c:%c: %s", VAR_2, VAR_1[VAR_4], FUNC_1(1));
   VAR_3[VAR_8] = 1;
   VAR_7 = 1;
  }
 }
}
