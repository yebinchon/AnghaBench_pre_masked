
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_dev {unsigned long def_global; unsigned long def_vlan; unsigned long def_port; TYPE_1__* ops; } ;
struct switch_attrlist {int n_attr; TYPE_2__* attr; } ;
struct switch_attr {int dummy; } ;
struct swconfig_callback {int* args; scalar_t__ msg; int fill; struct genl_info* info; } ;
struct sk_buff {int dummy; } ;
struct genlmsghdr {int cmd; } ;
struct genl_info {int nlhdr; } ;
typedef int cb ;
struct TYPE_4__ {scalar_t__ disabled; } ;
struct TYPE_3__ {struct switch_attrlist attr_port; struct switch_attrlist attr_vlan; struct switch_attrlist attr_global; } ;


 int FUNC_0 (struct switch_attr*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int) ;
 struct switch_attr* VAR_2 ;
 struct switch_attr* VAR_3 ;
 struct switch_attr* VAR_4 ;
 int FUNC_2 (scalar_t__,struct genl_info*) ;
 int FUNC_3 (struct swconfig_callback*,int ,int) ;
 struct genlmsghdr* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 struct switch_dev* FUNC_6 (struct genl_info*) ;
 int FUNC_7 (struct switch_dev*) ;
 int FUNC_8 (struct swconfig_callback*,void*) ;
 int FUNC_9 (int,unsigned long*) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct genlmsghdr *VAR_8 = FUNC_4(VAR_7->nlhdr);
 const struct switch_attrlist *VAR_9;
 struct switch_dev *VAR_10;
 struct swconfig_callback VAR_11;
 int VAR_12 = -VAR_0;
 int VAR_13;


 struct switch_attr *VAR_14;
 unsigned long *VAR_15;
 int VAR_16;

 VAR_10 = FUNC_6(VAR_7);
 if (!VAR_10)
  return -VAR_0;

 switch (VAR_8->cmd) {
 case 130:
  VAR_9 = &VAR_10->ops->attr_global;
  VAR_14 = VAR_2;
  VAR_15 = &VAR_10->def_global;
  VAR_16 = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_9 = &VAR_10->ops->attr_vlan;
  VAR_14 = VAR_4;
  VAR_15 = &VAR_10->def_vlan;
  VAR_16 = FUNC_0(VAR_4);
  break;
 case 129:
  VAR_9 = &VAR_10->ops->attr_port;
  VAR_14 = VAR_3;
  VAR_15 = &VAR_10->def_port;
  VAR_16 = FUNC_0(VAR_3);
  break;
 default:
  FUNC_1(1);
  goto out;
 }

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.info = VAR_7;
 VAR_11.fill = VAR_5;
 for (VAR_13 = 0; VAR_13 < VAR_9->n_attr; VAR_13++) {
  if (VAR_9->attr[VAR_13].disabled)
   continue;
  VAR_11.args[0] = VAR_13;
  VAR_12 = FUNC_8(&VAR_11, (void *) &VAR_9->attr[VAR_13]);
  if (VAR_12 < 0)
   goto error;
 }


 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  if (!FUNC_9(VAR_13, VAR_15))
   continue;
  VAR_11.args[0] = VAR_1 + VAR_13;
  VAR_12 = FUNC_8(&VAR_11, (void *) &VAR_14[VAR_13]);
  if (VAR_12 < 0)
   goto error;
 }
 FUNC_7(VAR_10);

 if (!VAR_11.msg)
  return 0;

 return FUNC_2(VAR_11.msg, VAR_7);

error:
 if (VAR_11.msg)
  FUNC_5(VAR_11.msg);
out:
 FUNC_7(VAR_10);
 return VAR_12;
}
