
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switch_dev {int id; int vlans; int ports; int cpu_port; TYPE_1__* portmap; scalar_t__ name; scalar_t__ alias; scalar_t__ devname; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int virt; scalar_t__ s; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_13, u32 VAR_14, u32 VAR_15, int VAR_16,
  const struct switch_dev *VAR_17)
{
 struct nlattr *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 void *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_3(VAR_13, VAR_14, VAR_15, &VAR_12, VAR_16,
   VAR_9);
 if (FUNC_0(VAR_20))
  return -1;

 if (FUNC_7(VAR_13, VAR_4, VAR_17->id))
  goto nla_put_failure;
 if (FUNC_6(VAR_13, VAR_3, VAR_17->devname))
  goto nla_put_failure;
 if (FUNC_6(VAR_13, VAR_1, VAR_17->alias))
  goto nla_put_failure;
 if (FUNC_6(VAR_13, VAR_5, VAR_17->name))
  goto nla_put_failure;
 if (FUNC_7(VAR_13, VAR_8, VAR_17->vlans))
  goto nla_put_failure;
 if (FUNC_7(VAR_13, VAR_7, VAR_17->ports))
  goto nla_put_failure;
 if (FUNC_7(VAR_13, VAR_2, VAR_17->cpu_port))
  goto nla_put_failure;

 VAR_19 = FUNC_5(VAR_13, VAR_6);
 if (!VAR_19)
  goto nla_put_failure;
 for (VAR_21 = 0; VAR_21 < VAR_17->ports; VAR_21++) {
  VAR_18 = FUNC_5(VAR_13, VAR_7);
  if (!VAR_18)
   continue;
  if (VAR_17->portmap[VAR_21].s) {
   if (FUNC_6(VAR_13, VAR_10,
      VAR_17->portmap[VAR_21].s))
    goto nla_put_failure;
   if (FUNC_7(VAR_13, VAR_11,
      VAR_17->portmap[VAR_21].virt))
    goto nla_put_failure;
  }
  FUNC_4(VAR_13, VAR_18);
 }
 FUNC_4(VAR_13, VAR_19);
 FUNC_2(VAR_13, VAR_20);
 return VAR_13->len;
nla_put_failure:
 FUNC_1(VAR_13, VAR_20);
 return -VAR_0;
}
