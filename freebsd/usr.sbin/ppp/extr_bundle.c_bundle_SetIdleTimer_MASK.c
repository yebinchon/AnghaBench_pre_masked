
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int timeout; unsigned int min_timeout; } ;
struct TYPE_4__ {TYPE_1__ idle; } ;
struct bundle {int ncp; TYPE_2__ cfg; } ;


 int FUNC_0 (struct bundle*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct bundle *VAR_0, unsigned VAR_1,
      unsigned VAR_2)
{
  VAR_0->cfg.idle.timeout = VAR_1;
  VAR_0->cfg.idle.min_timeout = VAR_2;
  if (FUNC_1(&VAR_0->ncp))
    FUNC_0(VAR_0, 0);
}
