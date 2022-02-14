
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockopt_data {int valsize; scalar_t__ kbuf; } ;
struct TYPE_6__ {int cnt; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;
struct nat64clat_cfg {TYPE_3__ base; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {scalar_t__ set; int name; } ;
struct TYPE_8__ {TYPE_1__ ntlv; } ;
typedef TYPE_4__ ipfw_obj_header ;
typedef int ip_fw3_opheader ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 struct nat64clat_cfg* FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct ip_fw_chain *VAR_4, ip_fw3_opheader *VAR_5,
    struct sockopt_data *VAR_6)
{
 struct nat64clat_cfg *VAR_7;
 ipfw_obj_header *VAR_8;

 if (VAR_6->valsize != sizeof(*VAR_8))
  return (VAR_0);
 VAR_8 = (ipfw_obj_header *)VAR_6->kbuf;
 if (FUNC_4(VAR_8->ntlv.name) != 0 ||
     VAR_8->ntlv.set >= VAR_2)
  return (VAR_0);

 FUNC_2(VAR_4);
 VAR_7 = FUNC_5(FUNC_0(VAR_4), VAR_8->ntlv.name, VAR_8->ntlv.set);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_4);
  return (VAR_1);
 }
 FUNC_1(VAR_7->base.stats.cnt, VAR_3);
 FUNC_3(VAR_4);
 return (0);
}
