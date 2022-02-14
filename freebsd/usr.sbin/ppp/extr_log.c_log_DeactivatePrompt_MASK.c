
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {scalar_t__ active; } ;


 int FUNC_0 () ;

void
FUNC_1(struct prompt *VAR_0)
{
  if (VAR_0->active) {
    VAR_0->active = 0;
    FUNC_0();
  }
}
