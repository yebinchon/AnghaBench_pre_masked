
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;




 char const VAR_0 ;
 char const VAR_1 ;
 int FUNC_0 (struct sk_buff*,...) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_2, u8 VAR_3)
{
 const char VAR_4[2] = { 128, VAR_0 };
 const char VAR_5[2] = { 128, VAR_1 };

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_2, &VAR_4, 2);
  break;
 case 128:
  FUNC_0(VAR_2, &VAR_5, 2);
  break;
 default:
  FUNC_0(VAR_2, &VAR_3, 1);
 }
}
