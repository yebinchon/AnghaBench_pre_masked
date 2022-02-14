
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsm {TYPE_1__* link; int LogLevel; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,int ) ;

int
FUNC_1(struct fsm *VAR_0)
{
  FUNC_0(VAR_0->LogLevel, "%s: Oops - received unexpected reset req\n",
            VAR_0->link->name);
  return 1;
}
