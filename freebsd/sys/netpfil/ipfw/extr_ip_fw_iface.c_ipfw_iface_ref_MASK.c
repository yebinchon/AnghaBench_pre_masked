
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct namedobj_instance {int dummy; } ;
struct ipfw_ifc {struct ipfw_iface* iface; } ;
struct TYPE_2__ {int refcnt; int name; } ;
struct ipfw_iface {scalar_t__ ifindex; int resolved; TYPE_1__ no; int ifname; int consumers; } ;
struct ip_fw_chain {int dummy; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ipfw_iface*,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (struct namedobj_instance*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct namedobj_instance*,int ,char*) ;
 struct ipfw_iface* FUNC_8 (int,int ,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct ip_fw_chain*) ;

int
FUNC_12(struct ip_fw_chain *VAR_4, char *VAR_5,
    struct ipfw_ifc *VAR_6)
{
 struct namedobj_instance *VAR_7;
 struct ipfw_iface *VAR_8, *VAR_9;

 if (FUNC_10(VAR_5) >= sizeof(VAR_8->ifname))
  return (VAR_0);

 FUNC_1(VAR_4);

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == ((void*)0)) {





  FUNC_2(VAR_4);
  FUNC_11(VAR_4);
  FUNC_1(VAR_4);
  VAR_7 = FUNC_0(VAR_4);
 }

 VAR_8 = (struct ipfw_iface *)FUNC_7(VAR_7, 0, VAR_5);

 if (VAR_8 != ((void*)0)) {
  VAR_8->no.refcnt++;
  VAR_6->iface = VAR_8;
  FUNC_2(VAR_4);
  return (0);
 }

 FUNC_2(VAR_4);


 VAR_8 = FUNC_8(sizeof(struct ipfw_iface), VAR_1, VAR_2 | VAR_3);
 FUNC_3(&VAR_8->consumers);
 VAR_8->no.name = VAR_8->ifname;
 FUNC_9(VAR_8->ifname, VAR_5, sizeof(VAR_8->ifname));







 VAR_8->no.refcnt = 1;
 FUNC_1(VAR_4);

 VAR_9 = (struct ipfw_iface *)FUNC_7(VAR_7, 0, VAR_5);
 if (VAR_9 != ((void*)0)) {

  VAR_9->no.refcnt++;
  VAR_6->iface = VAR_9;
  FUNC_2(VAR_4);
  FUNC_4(VAR_8, VAR_1);
  return (0);
 }

 VAR_8->ifindex = FUNC_5(VAR_5);
 if (VAR_8->ifindex != 0)
  VAR_8->resolved = 1;

 FUNC_6(VAR_7, &VAR_8->no);
 VAR_6->iface = VAR_8;

 FUNC_2(VAR_4);

 return (0);
}
