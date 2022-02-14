
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(int VAR_1, char **VAR_2, int *VAR_3)
{
 int VAR_4;

 if (*VAR_3 < VAR_1 && (VAR_4 = FUNC_1(VAR_2[*VAR_3])) != -1) {
  (*VAR_3)++;
  FUNC_0(VAR_0, "\033[=%dF", VAR_4);
  if (*VAR_3 < VAR_1
      && (VAR_4 = FUNC_1(VAR_2[*VAR_3])) != -1) {
   (*VAR_3)++;
   FUNC_0(VAR_0, "\033[=%dG", VAR_4);
  }
 }
}
