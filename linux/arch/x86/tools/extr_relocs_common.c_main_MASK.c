
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*,char const*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (unsigned char**,int,int,int *) ;
 int FUNC_4 (int *,int,int,int,int,int) ;
 int FUNC_5 (int *,int,int,int,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

int FUNC_10(int VAR_4, char **VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 const char *VAR_11;
 FILE *VAR_12;
 int VAR_13;
 unsigned char VAR_14[VAR_1];

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 VAR_11 = ((void*)0);
 for (VAR_13 = 1; VAR_13 < VAR_4; VAR_13++) {
  char *VAR_15 = VAR_5[VAR_13];
  if (*VAR_15 == '-') {
   if (FUNC_7(VAR_15, "--abs-syms") == 0) {
    VAR_6 = 1;
    continue;
   }
   if (FUNC_7(VAR_15, "--abs-relocs") == 0) {
    VAR_7 = 1;
    continue;
   }
   if (FUNC_7(VAR_15, "--reloc-info") == 0) {
    VAR_8 = 1;
    continue;
   }
   if (FUNC_7(VAR_15, "--text") == 0) {
    VAR_9 = 1;
    continue;
   }
   if (FUNC_7(VAR_15, "--realmode") == 0) {
    VAR_10 = 1;
    continue;
   }
  }
  else if (!VAR_11) {
   VAR_11 = VAR_15;
   continue;
  }
  FUNC_9();
 }
 if (!VAR_11) {
  FUNC_9();
 }
 VAR_12 = FUNC_2(VAR_11, "r");
 if (!VAR_12) {
  FUNC_0("Cannot open %s: %s\n", VAR_11, FUNC_8(VAR_3));
 }
 if (FUNC_3(&VAR_14, 1, VAR_1, VAR_12) != VAR_1) {
  FUNC_0("Cannot read %s: %s", VAR_11, FUNC_8(VAR_3));
 }
 FUNC_6(VAR_12);
 if (VAR_14[VAR_0] == VAR_2)
  FUNC_5(VAR_12, VAR_10, VAR_9,
      VAR_6, VAR_7,
      VAR_8);
 else
  FUNC_4(VAR_12, VAR_10, VAR_9,
      VAR_6, VAR_7,
      VAR_8);
 FUNC_1(VAR_12);
 return 0;
}
