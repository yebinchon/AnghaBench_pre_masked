
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockopt_data {int valsize; TYPE_1__* sopt; } ;
struct TYPE_9__ {int flags; } ;
struct nat64stl_cfg {TYPE_3__ base; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_8__ {scalar_t__ set; int name; } ;
struct TYPE_10__ {TYPE_2__ ntlv; } ;
typedef TYPE_4__ ipfw_obj_header ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_5__ ipfw_nat64stl_cfg ;
typedef int ip_fw3_opheader ;
struct TYPE_7__ {scalar_t__ sopt_dir; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sockopt_data*,int) ;
 int FUNC_7 (struct ip_fw_chain*,struct nat64stl_cfg*,TYPE_5__*) ;
 struct nat64stl_cfg* FUNC_8 (struct namedobj_instance*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct ip_fw_chain *VAR_5, ip_fw3_opheader *VAR_6,
    struct sockopt_data *VAR_7)
{
 ipfw_obj_header *VAR_8;
 ipfw_nat64stl_cfg *VAR_9;
 struct nat64stl_cfg *VAR_10;
 struct namedobj_instance *VAR_11;

 if (VAR_7->valsize != sizeof(*VAR_8) + sizeof(*VAR_9))
  return (VAR_1);

 VAR_8 = (ipfw_obj_header *)FUNC_6(VAR_7,
     sizeof(*VAR_8) + sizeof(*VAR_9));
 VAR_9 = (ipfw_nat64stl_cfg *)(VAR_8 + 1);

 if (FUNC_5(VAR_8->ntlv.name) != 0 ||
     VAR_8->ntlv.set >= VAR_2)
  return (VAR_1);

 VAR_11 = FUNC_0(VAR_5);
 if (VAR_7->sopt->sopt_dir == VAR_4) {
  FUNC_1(VAR_5);
  VAR_10 = FUNC_8(VAR_11, VAR_8->ntlv.name, VAR_8->ntlv.set);
  if (VAR_10 == ((void*)0)) {
   FUNC_2(VAR_5);
   return (VAR_0);
  }
  FUNC_7(VAR_5, VAR_10, VAR_9);
  FUNC_2(VAR_5);
  return (0);
 }

 FUNC_3(VAR_5);
 VAR_10 = FUNC_8(VAR_11, VAR_8->ntlv.name, VAR_8->ntlv.set);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_5);
  return (VAR_0);
 }





 VAR_10->base.flags &= ~VAR_3;
 VAR_10->base.flags |= VAR_9->flags & VAR_3;

 FUNC_4(VAR_5);
 return (0);
}
