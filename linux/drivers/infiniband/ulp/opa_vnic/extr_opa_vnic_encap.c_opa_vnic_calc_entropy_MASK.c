
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;

u8 FUNC_1(struct sk_buff *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0);


 VAR_1 ^= VAR_1 >> 8;
 VAR_1 ^= VAR_1 >> 16;


 return (u8)(VAR_1 & 0xFF);
}
