
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nptv6_cfg {int flags; int mask; int internal; int external; int if_name; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int kidx; } ;
struct ip_fw_chain {int dummy; } ;
struct ifaddr_event_args {scalar_t__ event; TYPE_1__* ifp; int * addr; } ;
struct TYPE_3__ {int if_flags; int if_xname; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ip_fw_chain*,int ) ;
 struct ip_fw_chain VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct ip_fw_chain*,struct nptv6_cfg*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct namedobj_instance *VAR_6, struct named_object *VAR_7,
    void *VAR_8)
{
 struct ifaddr_event_args *VAR_9;
 struct ip_fw_chain *VAR_10;
 struct nptv6_cfg *VAR_11;

 VAR_10 = &VAR_5;
 VAR_11 = (struct nptv6_cfg *)FUNC_2(VAR_10, VAR_7->kidx);
 if ((VAR_11->flags & VAR_3) == 0)
  return (0);

 VAR_9 = VAR_8;

 if (FUNC_6(VAR_9->ifp->if_xname, VAR_11->if_name, VAR_2))
  return (0);
 if (VAR_9->ifp->if_flags & VAR_1) {
  VAR_11->flags &= ~VAR_4;
  return (0);
 }
 if (VAR_9->event == VAR_0) {

  if ((VAR_11->flags & VAR_4) == 0)
   return (0);

  if (FUNC_0(&VAR_11->external, VAR_9->addr,
      &VAR_11->mask) != 0)
   return (0);

  VAR_11->flags &= ~VAR_4;
 } else {

  if (VAR_11->flags & VAR_4)
   return (0);

  if (FUNC_4(VAR_9->addr) ||
      FUNC_0(VAR_9->addr, &VAR_11->internal,
      &VAR_11->mask))
   return (0);

 }
 FUNC_1(!(VAR_11->flags & VAR_4));

 FUNC_3(VAR_9->ifp);
 FUNC_5(VAR_10, VAR_11, VAR_9->ifp);
 return (0);
}
