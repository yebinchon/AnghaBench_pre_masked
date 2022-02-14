
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct TYPE_3__ {int refcnt; } ;
struct ipfw_iface {int gencnt; TYPE_1__ no; int ifindex; scalar_t__ resolved; int ifname; } ;
struct dump_iface_args {int sd; } ;
struct TYPE_4__ {int gencnt; int refcnt; int ifindex; int flags; int ifname; } ;
typedef TYPE_2__ ipfw_iface_info ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct namedobj_instance *VAR_1, struct named_object *VAR_2,
    void *VAR_3)
{
 ipfw_iface_info *VAR_4;
 struct dump_iface_args *VAR_5;
 struct ipfw_iface *VAR_6;

 VAR_5 = (struct dump_iface_args *)VAR_3;

 VAR_4 = (ipfw_iface_info *)FUNC_1(VAR_5->sd, sizeof(*VAR_4));
 FUNC_0(VAR_4 != ((void*)0), ("previously checked buffer is not enough"));

 VAR_6 = (struct ipfw_iface *)VAR_2;

 FUNC_2(VAR_4->ifname, VAR_6->ifname, sizeof(VAR_4->ifname));
 if (VAR_6->resolved)
  VAR_4->flags |= VAR_0;
 VAR_4->ifindex = VAR_6->ifindex;
 VAR_4->refcnt = VAR_6->no.refcnt;
 VAR_4->gencnt = VAR_6->gencnt;
 return (0);
}
