
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int ofs; } ;
struct rtl8366_smi {int vlan4k_enabled; int vlan_enabled; } ;


 int VAR_0 ;
 struct rtl8366_smi* FUNC_0 (struct switch_dev*) ;

int FUNC_1(struct switch_dev *VAR_1,
          const struct switch_attr *VAR_2,
          struct switch_val *VAR_3)
{
 struct rtl8366_smi *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2->ofs > 2)
  return -VAR_0;

 if (VAR_2->ofs == 1)
  VAR_3->value.i = VAR_4->vlan_enabled;
 else
  VAR_3->value.i = VAR_4->vlan4k_enabled;

 return 0;
}
