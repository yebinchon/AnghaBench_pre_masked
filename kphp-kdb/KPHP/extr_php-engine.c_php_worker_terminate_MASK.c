
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int terminate_flag; char const* error_message; int * conn; } ;
typedef TYPE_1__ php_worker ;


 int FUNC_0 (int ,char*) ;

void FUNC_1 (php_worker *VAR_0, int VAR_1, const char *VAR_2) {
  VAR_0->terminate_flag = 1;
  VAR_0->error_message = VAR_2;
  if (VAR_1) {
    FUNC_0 (0, "php_worker_terminate\n");
    VAR_0->conn = ((void*)0);
  }
}
