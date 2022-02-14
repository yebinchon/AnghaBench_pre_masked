
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int text; } ;
struct tl_compiler {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tl_compiler*,char*,int ) ;
 int FUNC_2 (int,char*,char*) ;

int FUNC_3 (struct tl_compiler *VAR_0, struct tl_expression *VAR_1, char *VAR_2) {
  FUNC_2 (4, "tl_expression_remove_sugar (\"%s\")\n", VAR_2);
  char *VAR_3;
  int VAR_4 = 0;
  for (VAR_3 = VAR_2; *VAR_3; VAR_3++) {
    if (*VAR_3 == '<') {
      *VAR_3 = ' ';
      VAR_4++;
    } else if (*VAR_3 == '>') {
      *VAR_3 = ' ';
      if (--VAR_4 < 0) {
        return FUNC_1 (VAR_0, "tl_expression_remove_sugar: too many '>', expr: %s", VAR_1->text);
      }
    } else if (*VAR_3 == ',') {
      if (VAR_4 > 0) {
        *VAR_3 = ' ';
      }
    }
  }
  if (VAR_4 > 0) {
    return FUNC_1 (VAR_0, "tl_expression_remove_sugar: too many '<', expr: %s", VAR_1->text);
  }
  FUNC_0 (VAR_2);
  FUNC_2 (4, "after removing sugar: %s\n", VAR_2);
  return 0;
}
