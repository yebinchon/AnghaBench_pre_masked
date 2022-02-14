
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; int * data; int * head; } ;
struct idt77252_dev {int cmd_lock; int * fbq; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct idt77252_dev*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct idt77252_dev *VAR_4, struct sk_buff *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_5->data = VAR_5->head;
 FUNC_6(VAR_5);
 VAR_5->len = 0;

 FUNC_5(VAR_5, 16);

 switch (VAR_6) {
 case 0:
  FUNC_4(VAR_5, VAR_0);
  break;
 case 1:
  FUNC_4(VAR_5, VAR_1);
  break;
 case 2:
  FUNC_4(VAR_5, VAR_2);
  break;
 case 3:
  FUNC_4(VAR_5, VAR_3);
  break;
 default:
  return -1;
 }

 if (FUNC_2(VAR_4, VAR_6))
  return -1;

 FUNC_3(&VAR_5->data[(VAR_5->len & ~(0x3f)) - 64], 0, 2 * sizeof(u32));

 VAR_8 = FUNC_1(VAR_5);
 VAR_9 = FUNC_0(VAR_5);

 FUNC_7(&VAR_4->cmd_lock, VAR_7);
 FUNC_9(VAR_8, VAR_4->fbq[VAR_6]);
 FUNC_9(VAR_9, VAR_4->fbq[VAR_6]);
 FUNC_8(&VAR_4->cmd_lock, VAR_7);

 return 0;
}
