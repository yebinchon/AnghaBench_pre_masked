
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {scalar_t__ port_vlan; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2, const struct switch_attr *VAR_3, struct switch_val *VAR_4)
{
 if (VAR_4->port_vlan >= VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
