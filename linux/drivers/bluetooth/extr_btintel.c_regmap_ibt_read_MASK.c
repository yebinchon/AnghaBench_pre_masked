
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct regmap_ibt_context {int hdev; int op_read; } ;
struct ibt_rp_reg_access {scalar_t__ addr; int data; } ;
struct ibt_cp_reg_access {scalar_t__ addr; size_t len; int mode; } ;
typedef int cp ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 struct sk_buff* FUNC_4 (int ,int ,int,struct ibt_cp_reg_access*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*,int ,size_t) ;

__attribute__((used)) static int FUNC_8(void *VAR_5, const void *VAR_6, size_t VAR_7,
      void *VAR_8, size_t VAR_9)
{
 struct regmap_ibt_context *VAR_10 = VAR_5;
 struct ibt_cp_reg_access VAR_11;
 struct ibt_rp_reg_access *VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14 = 0;

 if (VAR_7 != sizeof(__le32))
  return -VAR_0;

 switch (VAR_9) {
 case 1:
  VAR_11.mode = VAR_4;
  break;
 case 2:
  VAR_11.mode = VAR_2;
  break;
 case 4:
  VAR_11.mode = VAR_3;
  break;
 default:
  return -VAR_0;
 }


 VAR_11.addr = *(__le32 *)VAR_6;
 VAR_11.len = VAR_9;

 FUNC_2(VAR_10->hdev, "Register (0x%x) read", FUNC_6(VAR_11.addr));

 VAR_13 = FUNC_4(VAR_10->hdev, VAR_10->op_read, sizeof(VAR_11), &VAR_11,
      VAR_1);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  FUNC_3(VAR_10->hdev, "regmap: Register (0x%x) read error (%d)",
      FUNC_6(VAR_11.addr), VAR_14);
  return VAR_14;
 }

 if (VAR_13->len != sizeof(*VAR_12) + VAR_9) {
  FUNC_3(VAR_10->hdev, "regmap: Register (0x%x) read error, bad len",
      FUNC_6(VAR_11.addr));
  VAR_14 = -VAR_0;
  goto done;
 }

 VAR_12 = (struct ibt_rp_reg_access *)VAR_13->data;

 if (VAR_12->addr != VAR_11.addr) {
  FUNC_3(VAR_10->hdev, "regmap: Register (0x%x) read error, bad addr",
      FUNC_6(VAR_12->addr));
  VAR_14 = -VAR_0;
  goto done;
 }

 FUNC_7(VAR_8, VAR_12->data, VAR_9);

done:
 FUNC_5(VAR_13);
 return VAR_14;
}
