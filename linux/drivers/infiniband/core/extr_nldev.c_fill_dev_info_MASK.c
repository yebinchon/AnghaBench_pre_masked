
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sys_image_guid; int device_cap_flags; } ;
struct ib_device {int use_cq_dim; int node_type; TYPE_1__ attrs; int node_guid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
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
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ib_device*) ;
 int FUNC_3 (struct ib_device*,char*) ;
 int FUNC_4 (struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct ib_device*,int ) ;
 int FUNC_9 (struct ib_device*) ;
 scalar_t__ FUNC_10 (struct ib_device*,int ) ;
 scalar_t__ FUNC_11 (struct ib_device*,int ) ;
 scalar_t__ FUNC_12 (struct ib_device*,int ) ;
 scalar_t__ FUNC_13 (struct ib_device*,int ) ;
 int FUNC_14 (struct ib_device*) ;
 scalar_t__ FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_11, struct ib_device *VAR_12)
{
 char VAR_13[VAR_1];
 int VAR_14 = 0;
 u8 VAR_15;

 if (FUNC_2(VAR_11, VAR_12))
  return -VAR_0;

 if (FUNC_5(VAR_11, VAR_9, FUNC_9(VAR_12)))
  return -VAR_0;

 FUNC_0(sizeof(VAR_12->attrs.device_cap_flags) != sizeof(u64));
 if (FUNC_6(VAR_11, VAR_2,
         VAR_12->attrs.device_cap_flags,
         VAR_8))
  return -VAR_0;

 FUNC_3(VAR_12, VAR_13);

 if (FUNC_15(VAR_13) && FUNC_4(VAR_11, VAR_6, VAR_13))
  return -VAR_0;

 if (FUNC_6(VAR_11, VAR_7,
         FUNC_1(VAR_12->node_guid),
         VAR_8))
  return -VAR_0;
 if (FUNC_6(VAR_11, VAR_10,
         FUNC_1(VAR_12->attrs.sys_image_guid),
         VAR_8))
  return -VAR_0;
 if (FUNC_7(VAR_11, VAR_4, VAR_12->node_type))
  return -VAR_0;
 if (FUNC_7(VAR_11, VAR_3, VAR_12->use_cq_dim))
  return -VAR_0;






 VAR_15 = FUNC_14(VAR_12);
 if (FUNC_8(VAR_12, VAR_15))
  VAR_14 = FUNC_4(VAR_11, VAR_5, "opa");
 else if (FUNC_10(VAR_12, VAR_15))
  VAR_14 = FUNC_4(VAR_11, VAR_5, "ib");
 else if (FUNC_11(VAR_12, VAR_15))
  VAR_14 = FUNC_4(VAR_11, VAR_5, "iw");
 else if (FUNC_12(VAR_12, VAR_15))
  VAR_14 = FUNC_4(VAR_11, VAR_5, "roce");
 else if (FUNC_13(VAR_12, VAR_15))
  VAR_14 = FUNC_4(VAR_11, VAR_5,
         "usnic");
 return VAR_14;
}
