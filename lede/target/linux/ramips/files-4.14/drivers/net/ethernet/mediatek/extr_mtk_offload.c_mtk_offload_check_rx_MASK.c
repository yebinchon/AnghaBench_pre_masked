
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct fe_priv {int dummy; } ;


 int FUNC_0 (int ,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fe_priv*,unsigned int) ;

int FUNC_2(struct fe_priv *VAR_2, struct sk_buff *VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;

 switch (FUNC_0(VAR_0, VAR_4)) {
 case 129:
 case 130:
 case 131:
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  FUNC_1(VAR_2, VAR_5);
  return -1;
 case 128:
  return -1;
 default:
  return 0;
 }
}
