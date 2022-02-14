
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct epoll_event {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct epoll_event*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int *,int ,int *,int ,struct timespec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void* VAR_5) {
  int VAR_6;
  int VAR_7;
  int VAR_8;

  while (!VAR_2) {
    VAR_7 = FUNC_3(FUNC_5());
    VAR_8 = FUNC_4(FUNC_5());

    do {
    } while (VAR_6 == -1 && VAR_4 == VAR_0);
    FUNC_2(&VAR_1);
    FUNC_6(&VAR_3);
  }
}
