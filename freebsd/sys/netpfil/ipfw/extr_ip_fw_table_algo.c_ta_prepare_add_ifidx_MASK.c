
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tentry_info {scalar_t__ paddr; } ;
struct ta_buf_ifidx {struct ifentry* ife; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_6__ {TYPE_2__* iface; struct ifentry* cbdata; int cb; } ;
struct TYPE_4__ {int name; } ;
struct ifentry {TYPE_3__ ic; TYPE_1__ no; } ;
struct TYPE_5__ {int ifname; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifentry*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ip_fw_chain*,char*,TYPE_3__*) ;
 struct ifentry* FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_6, struct tentry_info *VAR_7,
    void *VAR_8)
{
 struct ta_buf_ifidx *VAR_9;
 char *VAR_10;
 struct ifentry *VAR_11;

 VAR_9 = (struct ta_buf_ifidx *)VAR_8;


 VAR_10 = (char *)VAR_7->paddr;
 if (FUNC_3(VAR_10, VAR_1) == VAR_1)
  return (VAR_0);

 VAR_11 = FUNC_2(sizeof(struct ifentry), VAR_2, VAR_3 | VAR_4);
 VAR_11->ic.cb = VAR_5;
 VAR_11->ic.cbdata = VAR_11;

 if (FUNC_1(VAR_6, VAR_10, &VAR_11->ic) != 0) {
  FUNC_0(VAR_11, VAR_2);
  return (VAR_0);
 }


 VAR_11->no.name = VAR_11->ic.iface->ifname;

 VAR_9->ife = VAR_11;

 return (0);
}
