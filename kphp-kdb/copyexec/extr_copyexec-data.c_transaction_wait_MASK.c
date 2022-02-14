
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transaction_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct timespec*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3 (transaction_t *VAR_1) {
  while (FUNC_0 (VAR_1) && !VAR_0) {
    if (FUNC_1 ()) {
      return 0;
    }
    struct timespec VAR_2;
    VAR_2.tv_sec = 0;
    VAR_2.tv_nsec = 50000000;
    FUNC_2 (&VAR_2, ((void*)0));
  }
  return 0;
}
