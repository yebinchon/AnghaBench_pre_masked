
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,int*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int*,void const*,int) ;

int FUNC_5(struct hci_dev *VAR_1, u8 VAR_2, u32 VAR_3,
   const void *VAR_4)
{
 while (VAR_3 > 0) {
  struct sk_buff *VAR_5;
  u8 VAR_6[253], VAR_7 = (VAR_3 > 252) ? 252 : VAR_3;

  VAR_6[0] = VAR_2;
  FUNC_4(VAR_6 + 1, VAR_4, VAR_7);

  VAR_5 = FUNC_2(VAR_1, 0xfc09, VAR_7 + 1,
         VAR_6, VAR_0);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);

  FUNC_3(VAR_5);

  VAR_3 -= VAR_7;
  VAR_4 += VAR_7;
 }

 return 0;
}
