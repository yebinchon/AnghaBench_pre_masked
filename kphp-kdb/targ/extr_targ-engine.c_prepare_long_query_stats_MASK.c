
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int ,int ,int ,int ) ;
 char* VAR_6 ;

__attribute__((used)) static int FUNC_1 (void) {
  char *VAR_7 = VAR_6;
  int VAR_8;
  for (VAR_8 = VAR_5 - 1; VAR_8 >= 0; VAR_8--) {
    VAR_7 += FUNC_0 (VAR_7, "%.3lf %.6lf %d %.120s\n", VAR_4[VAR_8], VAR_3[VAR_8], VAR_2[VAR_8], VAR_1[VAR_8]);
  }
  for (VAR_8 = VAR_0 - 1; VAR_8 >= VAR_5; VAR_8--) {
    VAR_7 += FUNC_0 (VAR_7, "%.3lf %.6lf %d %.120s\n", VAR_4[VAR_8], VAR_3[VAR_8], VAR_2[VAR_8], VAR_1[VAR_8]);
  }
  return VAR_7 - VAR_6;
}
