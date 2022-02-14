
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nbd_device {int index; int config_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct nbd_device *VAR_4, struct sk_buff *VAR_5)
{
 struct nlattr *VAR_6;
 u8 VAR_7 = 0;
 int VAR_8;
 if (FUNC_4(&VAR_4->config_refs))
  VAR_7 = 1;
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_5, VAR_2, VAR_4->index);
 if (VAR_8)
  return -VAR_0;
 VAR_8 = FUNC_3(VAR_5, VAR_1,
    VAR_7);
 if (VAR_8)
  return -VAR_0;
 FUNC_0(VAR_5, VAR_6);
 return 0;
}
