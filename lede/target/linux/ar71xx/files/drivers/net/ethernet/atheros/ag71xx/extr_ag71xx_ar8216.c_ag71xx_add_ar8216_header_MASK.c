
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct ag71xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;

void FUNC_1(struct ag71xx *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 VAR_2->data[0] = 0x10;
 VAR_2->data[1] = 0x80;
}
