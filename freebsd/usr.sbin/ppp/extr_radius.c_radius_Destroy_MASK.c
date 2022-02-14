
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fd; int rad; int timer; } ;
struct TYPE_3__ {scalar_t__ sendkeylen; int * sendkey; scalar_t__ recvkeylen; int * recvkey; } ;
struct radius {TYPE_2__ cx; TYPE_1__ mppe; int * errstr; int * ipv6prefix; int * repstr; int * msrepstr; int * filterid; int ipv6routes; int routes; scalar_t__ valid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct radius *VAR_1)
{
  VAR_1->valid = 0;
  FUNC_1(VAR_0, "Radius: radius_Destroy\n");
  FUNC_4(&VAR_1->cx.timer);
  FUNC_3(&VAR_1->routes);

  FUNC_3(&VAR_1->ipv6routes);

  FUNC_0(VAR_1->filterid);
  VAR_1->filterid = ((void*)0);
  FUNC_0(VAR_1->msrepstr);
  VAR_1->msrepstr = ((void*)0);
  FUNC_0(VAR_1->repstr);
  VAR_1->repstr = ((void*)0);

  FUNC_0(VAR_1->ipv6prefix);
  VAR_1->ipv6prefix = ((void*)0);

  FUNC_0(VAR_1->errstr);
  VAR_1->errstr = ((void*)0);
  FUNC_0(VAR_1->mppe.recvkey);
  VAR_1->mppe.recvkey = ((void*)0);
  VAR_1->mppe.recvkeylen = 0;
  FUNC_0(VAR_1->mppe.sendkey);
  VAR_1->mppe.sendkey = ((void*)0);
  VAR_1->mppe.sendkeylen = 0;
  if (VAR_1->cx.fd != -1) {
    VAR_1->cx.fd = -1;
    FUNC_2(VAR_1->cx.rad);
  }
}
