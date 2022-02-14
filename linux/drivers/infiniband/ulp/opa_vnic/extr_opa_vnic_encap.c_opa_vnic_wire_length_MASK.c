
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct sk_buff *VAR_1)
{
 u32 VAR_2;


 VAR_2 = -(VAR_1->len + VAR_0) & 0x7;
 VAR_2 += VAR_0;

 return (VAR_1->len + VAR_2) >> 3;
}
