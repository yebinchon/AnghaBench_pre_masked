
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {scalar_t__ port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int,int) ;
 struct rtl8366_smi* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_3(struct switch_dev *VAR_9,
        const struct switch_attr *VAR_10,
        struct switch_val *VAR_11)
{
 struct rtl8366_smi *VAR_12 = FUNC_2(VAR_9);

 if (VAR_11->port_vlan >= VAR_7)
  return -VAR_0;

 if (VAR_11->value.i > 0 && VAR_11->value.i < VAR_2)
  VAR_11->value.i = (VAR_11->value.i - 1) / VAR_3;
 else
  VAR_11->value.i = VAR_1;

 return FUNC_1(VAR_12, FUNC_0(VAR_11->port_vlan),
  VAR_4 | VAR_5,
  VAR_11->value.i |
  (VAR_8 << VAR_6));

}
