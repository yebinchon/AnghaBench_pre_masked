
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int errors; char** error_msg; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;

void FUNC_1 (struct tl_compiler *VAR_0, FILE *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->errors; VAR_2++) {
    FUNC_0 (VAR_1, "%s\n", VAR_0->error_msg[VAR_2]);
  }
}
