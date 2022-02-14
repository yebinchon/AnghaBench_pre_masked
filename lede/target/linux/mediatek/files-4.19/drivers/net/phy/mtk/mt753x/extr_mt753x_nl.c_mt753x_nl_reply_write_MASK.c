
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct gsw_mt753x {int (* mmd_write ) (struct gsw_mt753x*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;int (* mii_write ) (struct gsw_mt753x*,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct genl_info {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct genl_info*,int ,int) ;
 scalar_t__ FUNC_1 (struct genl_info*,int ,scalar_t__*) ;
 int FUNC_2 (struct genl_info*,int ,struct sk_buff**) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct gsw_mt753x*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct gsw_mt753x*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct gsw_mt753x*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct genl_info *VAR_5, struct gsw_mt753x *VAR_6)
{
 struct sk_buff *VAR_7 = ((void*)0);
 s32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;

 VAR_8 = FUNC_0(VAR_5, VAR_1, -1);
 VAR_9 = FUNC_0(VAR_5, VAR_0, -1);
 VAR_10 = FUNC_0(VAR_5, VAR_2, -1);

 if (FUNC_1(VAR_5, VAR_3, &VAR_11))
  goto err;

 if (VAR_10 < 0)
  goto err;

 VAR_12 = FUNC_2(VAR_5, VAR_4, &VAR_7);
 if (VAR_12 < 0)
  goto err;

 if (VAR_8 >= 0) {
  if (VAR_9 < 0)
   VAR_6->mii_write(VAR_6, VAR_8, VAR_10, VAR_11);
  else
   VAR_6->mmd_write(VAR_6, VAR_8, VAR_9, VAR_10, VAR_11);
 } else {
  FUNC_4(VAR_6, VAR_10, VAR_11);
 }

 VAR_12 = FUNC_5(VAR_7, VAR_2, VAR_10);
 if (VAR_12 < 0)
  goto err;

 VAR_12 = FUNC_5(VAR_7, VAR_3, VAR_11);
 if (VAR_12 < 0)
  goto err;

 return FUNC_3(VAR_7, VAR_5);

err:
 if (VAR_7)
  FUNC_6(VAR_7);

 return VAR_12;
}
