
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_args {int argc_start; int argc; char** argv; void* lvar; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t const) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, char **VAR_3, struct strip_args *VAR_4)
{
  int VAR_5;

  VAR_4->argc_start = 0;
  VAR_4->argc = VAR_2;
  VAR_4->argv = VAR_3;
  VAR_4->lvar = VAR_0;

  for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5) {
    const size_t VAR_6 = FUNC_0(VAR_3[VAR_5]);
    if (VAR_6 >= 2 && VAR_3[VAR_5][0] == '-') {
      switch (VAR_3[VAR_5][1]) {
      case 'l':
        VAR_4->lvar = VAR_1;
        break;
      case '-':
        if (FUNC_1((*VAR_3) + 2, "lvar", VAR_6) == 0) {
          VAR_4->lvar = VAR_1;
          break;
        }
      default:
        return -1;
      }
    }
    else {
      break;
    }
  }

  VAR_4->argc_start = VAR_5;
  return VAR_5;
}
