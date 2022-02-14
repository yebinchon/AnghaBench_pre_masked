
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,...) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0, u8 VAR_1)
{
 const char VAR_2[2] = { 0xdb, 0xdc };
 const char VAR_3[2] = { 0xdb, 0xdd };

 switch (VAR_1) {
 case 0xc0:
  FUNC_0(VAR_0, &VAR_2, 2);
  break;
 case 0xdb:
  FUNC_0(VAR_0, &VAR_3, 2);
  break;
 default:
  FUNC_0(VAR_0, &VAR_1, 1);
 }
}
