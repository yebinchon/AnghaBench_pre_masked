
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* label; } ;
struct bundle {TYPE_1__ cfg; } ;



const char *
FUNC_0(struct bundle *VAR_0)
{
  return *VAR_0->cfg.label ? VAR_0->cfg.label : ((void*)0);
}
