
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
struct pollfd {int fd; int revents; int events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pollfd*,int,int ) ;

int FUNC_2(uv_loop_t* VAR_4, int VAR_5) {
  struct pollfd VAR_6[1];
  int VAR_7;

  VAR_6[0].fd = VAR_5;
  VAR_6[0].events = VAR_1;

  do
    VAR_7 = FUNC_1(VAR_6, 1, 0);
  while (VAR_7 == -1 && VAR_3 == VAR_0);

  if (VAR_7 == -1)
    FUNC_0();

  if (VAR_6[0].revents & VAR_2)
    return -1;

  return 0;
}
