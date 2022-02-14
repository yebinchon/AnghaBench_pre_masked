
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl8366_smi*,int,int,int) ;
 struct rtl8366_smi* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_5,
        const struct switch_attr *VAR_6,
        struct switch_val *VAR_7)
{
 struct rtl8366_smi *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 if (VAR_7->port_vlan >= VAR_3)
  return -VAR_0;

 if (VAR_7->port_vlan == VAR_4) {
  VAR_11 = VAR_1;
  VAR_10 = 0xF << 4;
  VAR_9 = VAR_7->value.i << 4;
 } else {
  VAR_11 = VAR_2;
  VAR_10 = 0xF << (VAR_7->port_vlan * 4),
  VAR_9 = VAR_7->value.i << (VAR_7->port_vlan * 4);
 }

 return FUNC_0(VAR_8, VAR_11, VAR_10, VAR_9);
}
