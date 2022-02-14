
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct sockopt_data {int valsize; TYPE_1__* sopt; } ;
struct TYPE_9__ {scalar_t__ plat_plen; scalar_t__ clat_plen; int flags; int clat_prefix; int plat_prefix; } ;
struct nat64clat_cfg {TYPE_3__ base; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_8__ {scalar_t__ set; int name; } ;
struct TYPE_10__ {TYPE_2__ ntlv; } ;
typedef TYPE_4__ ipfw_obj_header ;
struct TYPE_11__ {scalar_t__ plat_plen; scalar_t__ clat_plen; int flags; int clat_prefix; int plat_prefix; } ;
typedef TYPE_5__ ipfw_nat64clat_cfg ;
typedef int ip_fw3_opheader ;
struct TYPE_7__ {scalar_t__ sopt_dir; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 int FUNC_5 (struct ip_fw_chain*) ;
 int FUNC_6 (struct ip_fw_chain*) ;
 int FUNC_7 (struct ip_fw_chain*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct sockopt_data*,int) ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (struct ip_fw_chain*,struct nat64clat_cfg*,TYPE_5__*) ;
 struct nat64clat_cfg* FUNC_12 (struct namedobj_instance*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct ip_fw_chain *VAR_7, ip_fw3_opheader *VAR_8,
    struct sockopt_data *VAR_9)
{
 ipfw_obj_header *VAR_10;
 ipfw_nat64clat_cfg *VAR_11;
 struct nat64clat_cfg *VAR_12;
 struct namedobj_instance *VAR_13;
 uint32_t VAR_14;

 if (VAR_9->valsize != sizeof(*VAR_10) + sizeof(*VAR_11))
  return (VAR_0);

 VAR_10 = (ipfw_obj_header *)FUNC_9(VAR_9,
     sizeof(*VAR_10) + sizeof(*VAR_11));
 VAR_11 = (ipfw_nat64clat_cfg *)(VAR_10 + 1);

 if (FUNC_8(VAR_10->ntlv.name) != 0 ||
     VAR_10->ntlv.set >= VAR_2)
  return (VAR_0);

 VAR_13 = FUNC_0(VAR_7);
 if (VAR_9->sopt->sopt_dir == VAR_6) {
  FUNC_2(VAR_7);
  VAR_12 = FUNC_12(VAR_13, VAR_10->ntlv.name, VAR_10->ntlv.set);
  if (VAR_12 == ((void*)0)) {
   FUNC_3(VAR_7);
   return (VAR_1);
  }
  FUNC_11(VAR_7, VAR_12, VAR_11);
  FUNC_3(VAR_7);
  return (0);
 }

 FUNC_4(VAR_7);
 VAR_12 = FUNC_12(VAR_13, VAR_10->ntlv.name, VAR_10->ntlv.set);
 if (VAR_12 == ((void*)0)) {
  FUNC_5(VAR_7);
  return (VAR_1);
 }





 VAR_14 = 0;
 if (VAR_11->plat_plen != VAR_12->base.plat_plen ||
     !FUNC_1(&VAR_11->plat_prefix, &VAR_12->base.plat_prefix)) {
  if (FUNC_10(&VAR_11->plat_prefix, VAR_11->plat_plen) != 0) {
   FUNC_5(VAR_7);
   return (VAR_0);
  }
  VAR_14 |= VAR_5;
 }

 if (VAR_11->clat_plen != VAR_12->base.clat_plen ||
     !FUNC_1(&VAR_11->clat_prefix, &VAR_12->base.clat_prefix)) {
  if (FUNC_10(&VAR_11->clat_prefix, VAR_11->clat_plen) != 0) {
   FUNC_5(VAR_7);
   return (VAR_0);
  }
  VAR_14 |= VAR_4;
 }

 if (VAR_14 != 0) {
  FUNC_6(VAR_7);
  if (VAR_14 & VAR_5) {
   VAR_12->base.plat_prefix = VAR_11->plat_prefix;
   VAR_12->base.plat_plen = VAR_11->plat_plen;
  }
  if (VAR_14 & VAR_4) {
   VAR_12->base.clat_prefix = VAR_11->clat_prefix;
   VAR_12->base.clat_plen = VAR_11->clat_plen;
  }
  FUNC_7(VAR_7);
 }

 VAR_12->base.flags &= ~VAR_3;
 VAR_12->base.flags |= VAR_11->flags & VAR_3;

 FUNC_5(VAR_7);
 return (0);
}
