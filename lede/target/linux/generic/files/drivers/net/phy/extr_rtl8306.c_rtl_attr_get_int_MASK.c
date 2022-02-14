
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int id; int ofs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct switch_dev*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_2, const struct switch_attr *VAR_3, struct switch_val *VAR_4)
{
 int VAR_5 = VAR_3->id + (VAR_4->port_vlan * VAR_3->ofs);

 if (VAR_5 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4->value.i = FUNC_1(VAR_2, VAR_5);
 return 0;
}
