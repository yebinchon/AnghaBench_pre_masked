
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bundle* bundle; } ;
struct ipcp {TYPE_1__ fsm; } ;
struct iface_addr {int dummy; } ;
struct bundle {int dummy; } ;


 scalar_t__ FUNC_0 (struct bundle*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipcp*,int ,struct iface_addr const*) ;

void
FUNC_2(struct ipcp *VAR_3, const struct iface_addr *VAR_4)
{
  struct bundle *VAR_5 = VAR_3->fsm.bundle;

  if (FUNC_0(VAR_5, VAR_0) || FUNC_0(VAR_5, VAR_1))
    FUNC_1(VAR_3, VAR_2, VAR_4);
}
