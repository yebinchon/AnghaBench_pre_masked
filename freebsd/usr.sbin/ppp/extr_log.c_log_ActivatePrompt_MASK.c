
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int active; int logmask; } ;


 int VAR_0 ;

void
FUNC_0(struct prompt *VAR_1)
{
  VAR_1->active = 1;
  VAR_0 |= VAR_1->logmask;
}
