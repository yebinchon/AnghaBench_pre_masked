
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,char const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
         const char *VAR_6, u64 VAR_7)
{
 struct nlattr *VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_3(VAR_5, VAR_3,
      VAR_6))
  goto err;
 if (FUNC_4(VAR_5, VAR_4,
         VAR_7, VAR_1))
  goto err;

 FUNC_1(VAR_5, VAR_8);
 return 0;

err:
 FUNC_0(VAR_5, VAR_8);
 return -VAR_0;
}
