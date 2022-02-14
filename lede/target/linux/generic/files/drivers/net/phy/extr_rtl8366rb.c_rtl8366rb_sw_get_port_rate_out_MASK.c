
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {scalar_t__ port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int*) ;
 struct rtl8366_smi* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_3(struct switch_dev *VAR_4,
        const struct switch_attr *VAR_5,
        struct switch_val *VAR_6)
{
 struct rtl8366_smi *VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8;

 if (VAR_6->port_vlan >= VAR_3)
  return -VAR_0;

 FUNC_1(VAR_7, FUNC_0(VAR_6->port_vlan), &VAR_8);
 VAR_8 &= VAR_2;
 if (VAR_8 < VAR_2)
  VAR_8 += 1;

 VAR_6->value.i = (int)VAR_8 * VAR_1;

 return 0;
}
