
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stdout_file; } ;
typedef TYPE_1__ process_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (char*,size_t,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(process_info_t *VAR_1,
                           char* VAR_2,
                           size_t VAR_3) {
  char* VAR_4;

  int VAR_5 = FUNC_2(VAR_1->stdout_file, 0, VAR_0);
  if (VAR_5 < 0) {
    FUNC_3("fseek");
    return -1;
  }

  VAR_2[0] = '\0';

  while (FUNC_1(VAR_2, VAR_3, VAR_1->stdout_file) != ((void*)0)) {
    for (VAR_4 = VAR_2; *VAR_4 && *VAR_4 != '\r' && *VAR_4 != '\n'; VAR_4++);
    *VAR_4 = '\0';
  }

  if (FUNC_0(VAR_1->stdout_file)) {
    FUNC_3("read");
    VAR_2[0] = '\0';
    return -1;
  }
  return 0;
}
