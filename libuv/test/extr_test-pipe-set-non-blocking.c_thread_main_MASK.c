
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_ctx {int fd; int barrier; } ;
typedef int ssize_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void* VAR_2) {
  struct thread_ctx* VAR_3;
  char VAR_4[4096];
  ssize_t VAR_5;

  VAR_3 = VAR_2;
  FUNC_2(&VAR_3->barrier);

  do
    VAR_5 = FUNC_1(VAR_3->fd, VAR_4, sizeof(VAR_4));
  while (VAR_5 > 0 || (VAR_5 == -1 && VAR_1 == VAR_0));

  FUNC_0(VAR_5 == 0);
}
