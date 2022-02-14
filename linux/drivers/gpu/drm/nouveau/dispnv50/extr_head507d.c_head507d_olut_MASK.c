
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; int load; } ;
struct TYPE_3__ {int cpp; } ;
struct nv50_head_atom {TYPE_2__ olut; TYPE_1__ base; } ;
struct nv50_head {int dummy; } ;


 int VAR_0 ;

void
FUNC_0(struct nv50_head *VAR_1, struct nv50_head_atom *VAR_2)
{
 if (VAR_2->base.cpp == 1)
  VAR_2->olut.mode = 0;
 else
  VAR_2->olut.mode = 1;

 VAR_2->olut.load = VAR_0;
}
