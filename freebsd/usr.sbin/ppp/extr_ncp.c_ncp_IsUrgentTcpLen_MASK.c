
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct TYPE_4__ {TYPE_1__ urgent; } ;
struct ncp {TYPE_2__ cfg; } ;



int
FUNC_0(struct ncp *VAR_0, int VAR_1)
{
  if (VAR_1 < VAR_0->cfg.urgent.len)
    return 1;
  else
    return 0;
}
