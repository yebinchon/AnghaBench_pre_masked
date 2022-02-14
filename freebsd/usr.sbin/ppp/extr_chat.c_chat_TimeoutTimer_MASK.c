
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chat {int TimedOut; int timeout; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
  struct chat *VAR_1 = (struct chat *)VAR_0;
  FUNC_0(&VAR_1->timeout);
  VAR_1->TimedOut = 1;
}
