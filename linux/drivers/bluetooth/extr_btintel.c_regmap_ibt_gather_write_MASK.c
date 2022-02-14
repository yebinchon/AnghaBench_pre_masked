
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct regmap_ibt_context {int hdev; int op_write; } ;
struct ibt_cp_reg_access {size_t len; int addr; int data; int mode; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 struct sk_buff* FUNC_4 (int ,int ,int,struct ibt_cp_reg_access*,int ) ;
 int FUNC_5 (struct ibt_cp_reg_access*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct ibt_cp_reg_access* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,void const*,size_t) ;

__attribute__((used)) static int FUNC_10(void *VAR_7,
       const void *VAR_8, size_t VAR_9,
       const void *VAR_10, size_t VAR_11)
{
 struct regmap_ibt_context *VAR_12 = VAR_7;
 struct ibt_cp_reg_access *VAR_13;
 struct sk_buff *VAR_14;
 int VAR_15 = sizeof(*VAR_13) + VAR_11;
 u8 VAR_16;
 int VAR_17 = 0;

 if (VAR_9 != sizeof(__le32))
  return -VAR_0;

 switch (VAR_11) {
 case 1:
  VAR_16 = VAR_6;
  break;
 case 2:
  VAR_16 = VAR_4;
  break;
 case 4:
  VAR_16 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_7(VAR_15, VAR_2);
 if (!VAR_13)
  return -VAR_1;


 VAR_13->addr = *(__le32 *)VAR_8;
 VAR_13->mode = VAR_16;
 VAR_13->len = VAR_11;
 FUNC_9(&VAR_13->data, VAR_10, VAR_11);

 FUNC_2(VAR_12->hdev, "Register (0x%x) write", FUNC_8(VAR_13->addr));

 VAR_14 = FUNC_4(VAR_12->hdev, VAR_12->op_write, VAR_15, VAR_13, VAR_3);
 if (FUNC_0(VAR_14)) {
  VAR_17 = FUNC_1(VAR_14);
  FUNC_3(VAR_12->hdev, "regmap: Register (0x%x) write error (%d)",
      FUNC_8(VAR_13->addr), VAR_17);
  goto done;
 }
 FUNC_6(VAR_14);

done:
 FUNC_5(VAR_13);
 return VAR_17;
}
