
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;
typedef int rlim_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;

__attribute__((used)) static size_t FUNC_3(void) {

  struct rlimit VAR_3;

  if (FUNC_2(VAR_1, &VAR_3))
    FUNC_0();

  if (VAR_3.rlim_cur != VAR_2) {

    VAR_3.rlim_cur -= VAR_3.rlim_cur % (rlim_t) FUNC_1();
    if (VAR_3.rlim_cur >= 8192)
      if (VAR_3.rlim_cur >= VAR_0)
        return VAR_3.rlim_cur;
  }







  return 2 << 20;

}
