
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_smi {int vlan_enabled; int vlan4k_enabled; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_vlan ) (struct rtl8366_smi*,int) ;int (* enable_vlan4k ) (struct rtl8366_smi*,int) ;} ;


 int FUNC_0 (struct rtl8366_smi*,int) ;
 int FUNC_1 (struct rtl8366_smi*,int) ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1) {
  VAR_2 = VAR_0->ops->enable_vlan(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_0->vlan_enabled = VAR_1;
 }

 VAR_2 = VAR_0->ops->enable_vlan4k(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_0->vlan4k_enabled = VAR_1;
 return 0;
}
