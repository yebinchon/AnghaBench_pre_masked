
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int dummy; } ;
struct lexer_param {int dummy; } ;
typedef int block ;
typedef int YYLTYPE ;


 int FUNC_0 (struct locfile*,int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

void FUNC_2(YYLTYPE* VAR_0, block* VAR_1, int* VAR_2,
             struct locfile* VAR_3, struct lexer_param* VAR_4, const char *VAR_5){
  (*VAR_2)++;
  if (FUNC_1(VAR_5, "unexpected")) {



      FUNC_0(VAR_3, *VAR_0, "jq: error: %s (Unix shell quoting issues?)", VAR_5);

  } else {
      FUNC_0(VAR_3, *VAR_0, "jq: error: %s", VAR_5);
  }
}
