
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
typedef int buf ;
typedef int bdaddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 long FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,int*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,long) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1,
        const bdaddr_t *VAR_2)
{
 struct sk_buff *VAR_3;
 u8 VAR_4[8];
 long VAR_5;

 VAR_4[0] = 0xfe;
 VAR_4[1] = sizeof(bdaddr_t);
 FUNC_5(VAR_4 + 2, VAR_2, sizeof(bdaddr_t));

 VAR_3 = FUNC_2(VAR_1, 0xfc22, sizeof(VAR_4), VAR_4, VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);
  FUNC_3(VAR_1, "changing Marvell device address failed (%ld)",
      VAR_5);
  return VAR_5;
 }
 FUNC_4(VAR_3);

 return 0;
}
