
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct rtl8366_vlan_mc {int vid; void* fid; void* untag; void* member; } ;
struct rtl8366_vlan_4k {void* fid; void* untag; void* member; } ;
struct rtl8366_smi {int num_vlan_mc; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_vlan_4k ) (struct rtl8366_smi*,int,struct rtl8366_vlan_4k*) ;int (* set_vlan_4k ) (struct rtl8366_smi*,struct rtl8366_vlan_4k*) ;int (* get_vlan_mc ) (struct rtl8366_smi*,int,struct rtl8366_vlan_mc*) ;int (* set_vlan_mc ) (struct rtl8366_smi*,int,struct rtl8366_vlan_mc*) ;} ;


 int FUNC_0 (struct rtl8366_smi*,int,struct rtl8366_vlan_4k*) ;
 int FUNC_1 (struct rtl8366_smi*,struct rtl8366_vlan_4k*) ;
 int FUNC_2 (struct rtl8366_smi*,int,struct rtl8366_vlan_mc*) ;
 int FUNC_3 (struct rtl8366_smi*,int,struct rtl8366_vlan_mc*) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_0, int VAR_1, u32 VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 struct rtl8366_vlan_4k VAR_5;
 int VAR_6;
 int VAR_7;


 VAR_6 = VAR_0->ops->get_vlan_4k(VAR_0, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5.member = VAR_2;
 VAR_5.untag = VAR_3;
 VAR_5.fid = VAR_4;
 VAR_6 = VAR_0->ops->set_vlan_4k(VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;


 for (VAR_7 = 0; VAR_7 < VAR_0->num_vlan_mc; VAR_7++) {
  struct rtl8366_vlan_mc VAR_8;

  VAR_6 = VAR_0->ops->get_vlan_mc(VAR_0, VAR_7, &VAR_8);
  if (VAR_6)
   return VAR_6;

  if (VAR_1 == VAR_8.vid) {

   VAR_8.member = VAR_2;
   VAR_8.untag = VAR_3;
   VAR_8.fid = VAR_4;

   VAR_6 = VAR_0->ops->set_vlan_mc(VAR_0, VAR_7, &VAR_8);
   break;
  }
 }

 return VAR_6;
}
