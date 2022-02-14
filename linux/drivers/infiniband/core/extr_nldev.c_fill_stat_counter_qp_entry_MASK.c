
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, u32 VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_3(VAR_3, VAR_1, VAR_4))
  goto err;

 FUNC_1(VAR_3, VAR_5);
 return 0;

err:
 FUNC_0(VAR_3, VAR_5);
 return -VAR_0;
}
