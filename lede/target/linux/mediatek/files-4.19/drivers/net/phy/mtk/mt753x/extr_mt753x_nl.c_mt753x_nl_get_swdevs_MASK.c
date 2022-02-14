
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct gsw_mt753x {int dummy; } ;
struct genl_info {int dummy; } ;
typedef int dev_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct genl_info*,int ,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*,int ,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct genl_info *VAR_3, struct gsw_mt753x *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 char VAR_6[512];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, sizeof(VAR_6));
 if (!VAR_7) {
  FUNC_5("No switch registered\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_2, &VAR_5);
 if (VAR_7 < 0)
  goto err;

 VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_6);
 if (VAR_7 < 0)
  goto err;

 return FUNC_2(VAR_5, VAR_3);

err:
 if (VAR_5)
  FUNC_4(VAR_5);

 return VAR_7;
}
