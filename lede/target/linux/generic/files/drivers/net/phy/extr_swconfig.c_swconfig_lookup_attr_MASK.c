
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_val {struct switch_attr const* attr; void* port_vlan; } ;
struct switch_dev {unsigned long def_global; unsigned long def_vlan; unsigned long def_port; void* ports; TYPE_1__* ops; void* vlans; } ;
struct switch_attrlist {unsigned int n_attr; struct switch_attr* attr; } ;
struct switch_attr {scalar_t__ disabled; } ;
struct genlmsghdr {int cmd; } ;
struct genl_info {int * attrs; int nlhdr; } ;
struct TYPE_2__ {struct switch_attrlist attr_port; struct switch_attrlist attr_vlan; struct switch_attrlist attr_global; } ;


 int FUNC_0 (struct switch_attr*) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;






 int FUNC_1 (int) ;
 struct switch_attr* VAR_4 ;
 struct switch_attr* VAR_5 ;
 struct switch_attr* VAR_6 ;
 void* FUNC_2 (int ) ;
 struct genlmsghdr* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned int,unsigned long*) ;

__attribute__((used)) static const struct switch_attr *
FUNC_6(struct switch_dev *VAR_7, struct genl_info *VAR_8,
  struct switch_val *VAR_9)
{
 struct genlmsghdr *VAR_10 = FUNC_3(VAR_8->nlhdr);
 const struct switch_attrlist *VAR_11;
 const struct switch_attr *VAR_12 = ((void*)0);
 unsigned int VAR_13;


 struct switch_attr *VAR_14;
 unsigned long *VAR_15;
 int VAR_16;

 if (!VAR_8->attrs[VAR_1])
  goto done;

 switch (VAR_10->cmd) {
 case 130:
 case 133:
  VAR_11 = &VAR_7->ops->attr_global;
  VAR_14 = VAR_4;
  VAR_15 = &VAR_7->def_global;
  VAR_16 = FUNC_0(VAR_4);
  break;
 case 128:
 case 131:
  VAR_11 = &VAR_7->ops->attr_vlan;
  VAR_14 = VAR_6;
  VAR_15 = &VAR_7->def_vlan;
  VAR_16 = FUNC_0(VAR_6);
  if (!VAR_8->attrs[VAR_3])
   goto done;
  VAR_9->port_vlan = FUNC_2(VAR_8->attrs[VAR_3]);
  if (VAR_9->port_vlan >= VAR_7->vlans)
   goto done;
  break;
 case 129:
 case 132:
  VAR_11 = &VAR_7->ops->attr_port;
  VAR_14 = VAR_5;
  VAR_15 = &VAR_7->def_port;
  VAR_16 = FUNC_0(VAR_5);
  if (!VAR_8->attrs[VAR_2])
   goto done;
  VAR_9->port_vlan = FUNC_2(VAR_8->attrs[VAR_2]);
  if (VAR_9->port_vlan >= VAR_7->ports)
   goto done;
  break;
 default:
  FUNC_1(1);
  goto done;
 }

 if (!VAR_11)
  goto done;

 VAR_13 = FUNC_2(VAR_8->attrs[VAR_1]);
 if (VAR_13 >= VAR_0) {
  VAR_13 -= VAR_0;
  if (VAR_13 >= VAR_16)
   goto done;
  if (!FUNC_5(VAR_13, VAR_15))
   goto done;
  VAR_12 = &VAR_14[VAR_13];
 } else {
  if (VAR_13 >= VAR_11->n_attr)
   goto done;
  VAR_12 = &VAR_11->attr[VAR_13];
 }

 if (VAR_12->disabled)
  VAR_12 = ((void*)0);

done:
 if (!VAR_12)
  FUNC_4("attribute lookup failed\n");
 VAR_9->attr = VAR_12;
 return VAR_12;
}
