
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int errors; scalar_t__* error_msg; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int,char*,struct tl_compiler*,int) ;

int FUNC_2 (struct tl_compiler *VAR_0, int VAR_1) {
  FUNC_1 (5, "tl_success (%p, %d)\n", VAR_0, VAR_1);
  while (VAR_0->errors > VAR_1) {
    VAR_0->errors--;
    if (VAR_0->error_msg[VAR_0->errors]) {
      FUNC_0 (&VAR_0->error_msg[VAR_0->errors]);
    }
  }
  return 0;
}
