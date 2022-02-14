
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int incs; } ;
struct TYPE_4__ {int timeout; int inc; int maxinc; } ;
struct TYPE_5__ {TYPE_1__ dial; } ;
struct datalink {TYPE_3__ dial; TYPE_2__ cfg; } ;



int
FUNC_0(struct datalink *VAR_0)
{
  int VAR_1 = VAR_0->cfg.dial.timeout + VAR_0->dial.incs * VAR_0->cfg.dial.inc;

  if (VAR_0->dial.incs < VAR_0->cfg.dial.maxinc)
    VAR_0->dial.incs++;

  return VAR_1;
}
