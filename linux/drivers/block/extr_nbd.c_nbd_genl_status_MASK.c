
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nbd_device {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_1 (size_t,int ) ;
 void* FUNC_2 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 struct nbd_device* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_11 (struct sk_buff*,int ) ;
 size_t FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct nbd_device*,struct sk_buff*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct nlattr *VAR_12;
 struct sk_buff *VAR_13;
 void *VAR_14;
 size_t VAR_15;
 int VAR_16 = -1;
 int VAR_17 = -VAR_0;

 if (VAR_11->attrs[VAR_3])
  VAR_16 = FUNC_9(VAR_11->attrs[VAR_3]);

 FUNC_6(&VAR_7);

 VAR_15 = FUNC_12(FUNC_8(sizeof(u32)) +
      FUNC_8(sizeof(u8)));
 VAR_15 *= (VAR_16 == -1) ? VAR_8 : 1;

 VAR_13 = FUNC_1(VAR_15, VAR_1);
 if (!VAR_13)
  goto out;
 VAR_14 = FUNC_2(VAR_13, VAR_11, &VAR_5, 0,
           VAR_4);
 if (!VAR_14) {
  FUNC_13(VAR_13);
  goto out;
 }

 VAR_12 = FUNC_11(VAR_13, VAR_2);
 if (VAR_16 == -1) {
  VAR_17 = FUNC_5(&VAR_6, &VAR_9, VAR_13);
  if (VAR_17) {
   FUNC_13(VAR_13);
   goto out;
  }
 } else {
  struct nbd_device *VAR_18;
  VAR_18 = FUNC_4(&VAR_6, VAR_16);
  if (VAR_18) {
   VAR_17 = FUNC_14(VAR_18, VAR_13);
   if (VAR_17) {
    FUNC_13(VAR_13);
    goto out;
   }
  }
 }
 FUNC_10(VAR_13, VAR_12);
 FUNC_0(VAR_13, VAR_14);
 VAR_17 = FUNC_3(VAR_13, VAR_11);
out:
 FUNC_7(&VAR_7);
 return VAR_17;
}
