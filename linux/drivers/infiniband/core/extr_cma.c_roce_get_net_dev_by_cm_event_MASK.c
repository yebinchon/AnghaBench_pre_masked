
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ib_gid_attr {int dummy; } ;
struct TYPE_5__ {struct ib_gid_attr* sgid_attr; } ;
struct TYPE_4__ {struct ib_gid_attr* ppath_sgid_attr; } ;
struct TYPE_6__ {TYPE_2__ sidr_req_rcvd; TYPE_1__ req_rcvd; } ;
struct ib_cm_event {scalar_t__ event; TYPE_3__ param; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net_device* FUNC_4 (struct ib_gid_attr const*) ;

__attribute__((used)) static struct net_device *
FUNC_5(const struct ib_cm_event *VAR_2)
{
 const struct ib_gid_attr *VAR_3 = ((void*)0);
 struct net_device *VAR_4;

 if (VAR_2->event == VAR_0)
  VAR_3 = VAR_2->param.req_rcvd.ppath_sgid_attr;
 else if (VAR_2->event == VAR_1)
  VAR_3 = VAR_2->param.sidr_req_rcvd.sgid_attr;

 if (!VAR_3)
  return ((void*)0);

 FUNC_2();
 VAR_4 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_4))
  VAR_4 = ((void*)0);
 else
  FUNC_1(VAR_4);
 FUNC_3();
 return VAR_4;
}
