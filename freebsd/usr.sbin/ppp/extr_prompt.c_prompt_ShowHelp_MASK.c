
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int dummy; } ;


 int FUNC_0 (struct prompt*,char*) ;

__attribute__((used)) static void
FUNC_1(struct prompt *VAR_0)
{
  FUNC_0(VAR_0, "The following commands are available:\n");
  FUNC_0(VAR_0, " ~p\tEnter Packet mode\n");
  FUNC_0(VAR_0, " ~t\tShow timers\n");
  FUNC_0(VAR_0, " ~m\tShow memory map\n");
  FUNC_0(VAR_0, " ~.\tTerminate program\n");
  FUNC_0(VAR_0, " ~?\tThis help\n");
}
