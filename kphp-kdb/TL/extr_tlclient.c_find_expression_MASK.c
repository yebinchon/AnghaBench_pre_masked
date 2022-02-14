
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char*,int,int) ;
 int FUNC_2 (char) ;
 char* VAR_3 ;
 struct tl_expression* FUNC_3 (int *,int ,char*,int *) ;

struct tl_expression *FUNC_4 (int VAR_4) {
  int VAR_5 = 0, VAR_6 = VAR_4;
  while (VAR_6 >= 0 && (VAR_3[VAR_6] != '(' || VAR_5 > 0)) {
    if (VAR_3[VAR_6] == '(') {
      VAR_5--;
    }
    if (VAR_3[VAR_6] == ')') {
      VAR_5++;
    }
    VAR_6--;
  }

  if (VAR_6 >= 0 && VAR_3[VAR_6] == '(') {
    int VAR_7 = VAR_6 + 1;
    while (!FUNC_2 (VAR_3[VAR_7])) {
      VAR_7++;
    }
    char *VAR_8 = FUNC_1 (VAR_3, VAR_6 + 1, VAR_7);
    struct tl_expression *VAR_9 = FUNC_3 (&VAR_2, VAR_6 ? VAR_1 : VAR_0, VAR_8, ((void*)0));
    FUNC_0 (&VAR_8);
    return VAR_9;
  }
  return ((void*)0);
}
