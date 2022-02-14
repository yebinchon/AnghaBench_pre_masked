
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct hci_dev {int dummy; } ;
struct btmtkuart_dev {int * rx_skb; int hdev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int ,int *,unsigned char const*,int,int ,int ) ;
 struct btmtkuart_dev* FUNC_5 (struct hci_dev*) ;
 int VAR_0 ;
 unsigned char* FUNC_6 (struct btmtkuart_dev*,unsigned char const*,int,int*) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 struct btmtkuart_dev *VAR_4 = FUNC_5(VAR_1);
 const unsigned char *VAR_5 = VAR_2, *VAR_6;
 int VAR_7 = VAR_3, VAR_8, VAR_9;
 int VAR_10;

 while (VAR_7 > 0) {
  VAR_6 = FUNC_6(VAR_4, VAR_5, VAR_7, &VAR_8);
  if (!VAR_6)
   break;

  VAR_9 = VAR_6 - VAR_5;
  VAR_7 -= VAR_9;
  VAR_5 += VAR_9;

  VAR_4->rx_skb = FUNC_4(VAR_4->hdev, VAR_4->rx_skb, VAR_6,
        VAR_8, VAR_0,
        FUNC_0(VAR_0));
  if (FUNC_1(VAR_4->rx_skb)) {
   VAR_10 = FUNC_2(VAR_4->rx_skb);
   FUNC_3(VAR_4->hdev,
       "Frame reassembly failed (%d)", VAR_10);
   VAR_4->rx_skb = ((void*)0);
   return VAR_10;
  }

  VAR_7 -= VAR_8;
  VAR_5 += VAR_8;
 }

 return 0;
}
