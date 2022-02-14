
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,char const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, const char *VAR_4)
{
 struct nlattr *VAR_5;
 int VAR_6 = -VAR_1;

 if (!VAR_4 || !VAR_4[0])
  return 0;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_5)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_3, VAR_5);
  return VAR_6;
 } else
  FUNC_1(VAR_3, VAR_5);
 return 0;
}
