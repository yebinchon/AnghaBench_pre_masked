
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct kevent {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int *,int ,struct kevent*,int,struct timespec*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, time_t VAR_3)
{
 struct timespec VAR_4;
 struct kevent VAR_5;
 int VAR_6;

 if (VAR_3 != -1) {
  FUNC_0(VAR_3 > 0);
  VAR_4.tv_sec = VAR_3;
  VAR_4.tv_nsec = 0;

  FUNC_2("waiting for filesystem event for %ld seconds",
      (long)VAR_3);
  VAR_6 = FUNC_1(VAR_2, ((void*)0), 0, &VAR_5, 1, &VAR_4);
 } else {
  FUNC_2("waiting for filesystem event");
  VAR_6 = FUNC_1(VAR_2, ((void*)0), 0, &VAR_5, 1, ((void*)0));
 }
 if (VAR_6 < 0) {
  if (VAR_1 == VAR_0)
   return;
  FUNC_3(1, "kevent");
 }

 if (VAR_6 == 0) {
  FUNC_2("timeout reached");
  FUNC_0(VAR_3 > 0);
 } else {
  FUNC_2("got filesystem event");
 }
}
