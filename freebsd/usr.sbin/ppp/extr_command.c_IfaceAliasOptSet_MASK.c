
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {TYPE_2__* bundle; } ;
struct TYPE_3__ {unsigned long long optmask; } ;
struct TYPE_4__ {TYPE_1__ cfg; int NatEnabled; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cmdargs const*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct cmdargs const *VAR_2)
{
  unsigned long long VAR_3 = VAR_2->bundle->cfg.optmask;
  int VAR_4 = FUNC_1(VAR_2);

  if (VAR_4 == 0)
    if (FUNC_0(VAR_2->bundle, VAR_1) && !VAR_2->bundle->NatEnabled) {
      VAR_2->bundle->cfg.optmask = VAR_3;
      FUNC_2(VAR_0, "Cannot enable iface-alias without NAT\n");
      VAR_4 = 2;
    }

  return VAR_4;
}
