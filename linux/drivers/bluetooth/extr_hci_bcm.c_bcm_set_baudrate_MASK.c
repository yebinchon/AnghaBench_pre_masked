
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_uart {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct bcm_write_uart_clock_setting {unsigned int type; int baud_rate; int zero; } ;
struct bcm_update_uart_baud_rate {unsigned int type; int baud_rate; int zero; } ;
typedef int param ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,struct bcm_write_uart_clock_setting*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,unsigned int) ;
 int FUNC_4 (struct hci_dev*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct hci_uart *VAR_2, unsigned int VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hdev;
 struct sk_buff *VAR_5;
 struct bcm_update_uart_baud_rate VAR_6;

 if (VAR_3 > 3000000) {
  struct bcm_write_uart_clock_setting VAR_7;

  VAR_7.type = VAR_0;

  FUNC_3(VAR_4, "Set Controller clock (%d)", VAR_7.type);




  VAR_5 = FUNC_2(VAR_4, 0xfc45, 1, &VAR_7, VAR_1);
  if (FUNC_0(VAR_5)) {
   int VAR_8 = FUNC_1(VAR_5);
   FUNC_4(VAR_4, "BCM: failed to write clock (%d)",
       VAR_8);
   return VAR_8;
  }

  FUNC_7(VAR_5);
 }

 FUNC_3(VAR_4, "Set Controller UART speed to %d bit/s", VAR_3);

 VAR_6.zero = FUNC_5(0);
 VAR_6.baud_rate = FUNC_6(VAR_3);




 VAR_5 = FUNC_2(VAR_4, 0xfc18, sizeof(VAR_6), &VAR_6,
        VAR_1);
 if (FUNC_0(VAR_5)) {
  int VAR_9 = FUNC_1(VAR_5);
  FUNC_4(VAR_4, "BCM: failed to write update baudrate (%d)",
      VAR_9);
  return VAR_9;
 }

 FUNC_7(VAR_5);

 return 0;
}
