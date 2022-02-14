
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
struct pollfd {int fd; int revents; int events; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct pollfd*,int,int ) ;

int FUNC_2(uv_loop_t* VAR_6, int VAR_7) {
  struct pollfd VAR_8[1];
  int VAR_9;

  VAR_8[0].fd = VAR_7;
  VAR_8[0].events = VAR_2;

  do
    VAR_9 = FUNC_1(VAR_8, 1, 0);
  while (VAR_9 == -1 && (VAR_5 == VAR_1 || VAR_5 == VAR_0));

  if (VAR_9 == -1)
    return FUNC_0(VAR_5);

  if (VAR_8[0].revents & VAR_3)
    return VAR_4;

  return 0;
}
