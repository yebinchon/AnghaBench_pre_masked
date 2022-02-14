
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int * (*) (char const*,char const*)) ;
 int VAR_2 ;
 int * VAR_3 ;
 void* VAR_4 ;
 int * VAR_5 ;
 void* VAR_6 ;
 int * FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

FILE *FUNC_4(const char *VAR_7, const char *VAR_8) {
  FUNC_0(FUNC_4);
  VAR_3 = VAR_5 = VAR_6 = VAR_4 = 0;
  FILE *VAR_9 = FUNC_1(VAR_7, VAR_8);
  VAR_2 = VAR_0;
  if (FUNC_2(VAR_7, "fail_read") == 0) {
    VAR_3 = VAR_5 = VAR_9;
  } else if (FUNC_3(VAR_7, "fail_write", sizeof("fail_write") - 1) == 0) {

    VAR_3 = VAR_6 = VAR_9;
    if (FUNC_2(VAR_7, "fail_write_enospc") == 0)
      VAR_2 = VAR_1;
  } else if (FUNC_3(VAR_7, "fail_close", sizeof("fail_close") - 1) == 0) {
    VAR_3 = VAR_4 = VAR_9;
    if (FUNC_2(VAR_7, "fail_close_enospc") == 0)
      VAR_2 = VAR_1;
  }
  return VAR_9;
}
