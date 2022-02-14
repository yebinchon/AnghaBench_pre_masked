
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_server_status {char* wptr; char* rptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct repl_server_status*,char**) ;

int FUNC_1 (struct repl_server_status *VAR_1) {
  char *VAR_2 = VAR_1->wptr;
  int VAR_3 = 0, VAR_4 = 0, VAR_5;
  for (VAR_5 = 0; VAR_5 < 36 && VAR_2 != VAR_1->rptr; VAR_5++) {
    VAR_3 = (VAR_3 << 8) | FUNC_0 (VAR_1, &VAR_2);
    if (VAR_3 == VAR_0) {
      VAR_4 = VAR_5 + 1;
    }
  }
  return VAR_4;
}
