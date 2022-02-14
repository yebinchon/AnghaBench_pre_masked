
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int kidx; } ;
struct TYPE_5__ {int flags; } ;
struct nat64stl_cfg {TYPE_4__ no; TYPE_1__ base; int map64; int map46; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_6__ {int ntlv6; int ntlv4; } ;
typedef TYPE_2__ ipfw_nat64stl_cfg ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct ip_fw_chain*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_5, struct nat64stl_cfg *VAR_6,
    ipfw_nat64stl_cfg *VAR_7)
{

 FUNC_1(VAR_5);

 if (FUNC_3(FUNC_0(VAR_5), &VAR_6->no.kidx) != 0)
  return (VAR_1);
 VAR_6->base.flags |= VAR_4;

 if (FUNC_4(VAR_5, &VAR_7->ntlv4, &VAR_6->map46) != 0)
  return (VAR_0);
 VAR_6->base.flags |= VAR_2;

 if (FUNC_4(VAR_5, &VAR_7->ntlv6, &VAR_6->map64) != 0)
  return (VAR_0);
 VAR_6->base.flags |= VAR_3;

 FUNC_2(FUNC_0(VAR_5), &VAR_6->no);

 return (0);
}
