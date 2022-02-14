
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int name; } ;
typedef int buf ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 long FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int,int*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_3, const bdaddr_t *VAR_4)
{
 struct sk_buff *VAR_5;
 long VAR_6;
 u8 VAR_7[8];

 VAR_7[0] = VAR_2;
 VAR_7[1] = sizeof(bdaddr_t);
 FUNC_5(VAR_7 + 2, VAR_4, sizeof(bdaddr_t));

 VAR_5 = FUNC_3(VAR_3, VAR_0, sizeof(VAR_7), VAR_7,
        VAR_1);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  FUNC_0("%s: changing btmrvl device address failed (%ld)",
         VAR_3->name, VAR_6);
  return VAR_6;
 }
 FUNC_4(VAR_5);

 return 0;
}
