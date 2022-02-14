
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int set; } ;
struct nptv6_cfg {int flags; TYPE_1__ no; int plen; int external; int if_name; int internal; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {int flags; int name; int set; int plen; int external; int if_name; int internal; } ;
typedef TYPE_2__ ipfw_nptv6_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ip_fw_chain *VAR_3, struct nptv6_cfg *VAR_4,
    ipfw_nptv6_cfg *VAR_5)
{

 VAR_5->internal = VAR_4->internal;
 if (VAR_4->flags & VAR_1)
  FUNC_0(VAR_5->if_name, VAR_4->if_name, VAR_0);
 else
  VAR_5->external = VAR_4->external;
 VAR_5->plen = VAR_4->plen;
 VAR_5->flags = VAR_4->flags & VAR_2;
 VAR_5->set = VAR_4->no.set;
 FUNC_1(VAR_5->name, VAR_4->no.name, sizeof(VAR_5->name));
}
