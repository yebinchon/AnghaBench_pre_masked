
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {char* file; } ;
struct TYPE_11__ {scalar_t__ sendkeylen; int * sendkey; scalar_t__ recvkeylen; int * recvkey; scalar_t__ types; scalar_t__ policy; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_8__ {int fd; int * auth; int timer; int * rad; } ;
struct TYPE_7__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct radius {TYPE_6__ cfg; TYPE_5__ mppe; int * errstr; int * ipv6routes; int * ipv6prefix; int * repstr; int * msrepstr; int mtu; int * routes; TYPE_4__ mask; TYPE_3__ ip; scalar_t__ vj; scalar_t__ valid; TYPE_2__ cx; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_2(struct radius *VAR_9)
{
  VAR_9->desc.type = VAR_4;
  VAR_9->desc.UpdateSet = VAR_7;
  VAR_9->desc.IsSet = VAR_5;
  VAR_9->desc.Read = VAR_6;
  VAR_9->desc.Write = VAR_8;
  VAR_9->cx.fd = -1;
  VAR_9->cx.rad = ((void*)0);
  FUNC_1(&VAR_9->cx.timer, '\0', sizeof VAR_9->cx.timer);
  VAR_9->cx.auth = ((void*)0);
  VAR_9->valid = 0;
  VAR_9->vj = 0;
  VAR_9->ip.s_addr = VAR_1;
  VAR_9->mask.s_addr = VAR_2;
  VAR_9->routes = ((void*)0);
  VAR_9->mtu = VAR_0;
  VAR_9->msrepstr = ((void*)0);
  VAR_9->repstr = ((void*)0);

  VAR_9->ipv6prefix = ((void*)0);
  VAR_9->ipv6routes = ((void*)0);

  VAR_9->errstr = ((void*)0);
  VAR_9->mppe.policy = 0;
  VAR_9->mppe.types = 0;
  VAR_9->mppe.recvkey = ((void*)0);
  VAR_9->mppe.recvkeylen = 0;
  VAR_9->mppe.sendkey = ((void*)0);
  VAR_9->mppe.sendkeylen = 0;
  *VAR_9->cfg.file = '\0';
  FUNC_0(VAR_3, "Radius: radius_Init\n");
}
