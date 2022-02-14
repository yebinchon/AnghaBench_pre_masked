
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct hci_uart {struct bcsp_struct* priv; } ;
struct bcsp_struct {int rx_state; int rx_count; TYPE_1__* rx_skb; int message_crc; int rx_esc_state; } ;
struct TYPE_4__ {int* data; int len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;





 int FUNC_1 (char*,struct hci_uart*,int,int,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (struct bcsp_struct*,unsigned char const) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bcsp_struct*) ;
 TYPE_1__* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10(struct hci_uart *VAR_2, const void *VAR_3, int VAR_4)
{
 struct bcsp_struct *VAR_5 = VAR_2->priv;
 const unsigned char *VAR_6;

 FUNC_1("hu %p count %d rx_state %d rx_count %ld",
        VAR_2, VAR_4, VAR_5->rx_state, VAR_5->rx_count);

 VAR_6 = VAR_3;
 while (VAR_4) {
  if (VAR_5->rx_count) {
   if (*VAR_6 == 0xc0) {
    FUNC_2("Short BCSP packet");
    FUNC_8(VAR_5->rx_skb);
    VAR_5->rx_state = 128;
    VAR_5->rx_count = 0;
   } else
    FUNC_4(VAR_5, *VAR_6);

   VAR_6++; VAR_4--;
   continue;
  }

  switch (VAR_5->rx_state) {
  case 132:
   if ((0xff & (u8)~(VAR_5->rx_skb->data[0] + VAR_5->rx_skb->data[1] +
       VAR_5->rx_skb->data[2])) != VAR_5->rx_skb->data[3]) {
    FUNC_2("Error in BCSP hdr checksum");
    FUNC_8(VAR_5->rx_skb);
    VAR_5->rx_state = 129;
    VAR_5->rx_count = 0;
    continue;
   }
   VAR_5->rx_state = 130;
   VAR_5->rx_count = (VAR_5->rx_skb->data[1] >> 4) +
     (VAR_5->rx_skb->data[2] << 4);
   continue;

  case 130:
   if (VAR_5->rx_skb->data[0] & 0x40) {
    VAR_5->rx_state = 131;
    VAR_5->rx_count = 2;
   } else
    FUNC_3(VAR_2);
   continue;

  case 131:
   if (FUNC_5(VAR_5->message_crc) != FUNC_6(VAR_5)) {
    FUNC_2("Checksum failed: computed %04x received %04x",
           FUNC_5(VAR_5->message_crc),
           FUNC_6(VAR_5));

    FUNC_8(VAR_5->rx_skb);
    VAR_5->rx_state = 129;
    VAR_5->rx_count = 0;
    continue;
   }
   FUNC_9(VAR_5->rx_skb, VAR_5->rx_skb->len - 2);
   FUNC_3(VAR_2);
   continue;

  case 129:
   switch (*VAR_6) {
   case 0xc0:
    VAR_5->rx_state = 128;
    break;
   default:

    break;
   }
   VAR_6++; VAR_4--;
   break;

  case 128:
   switch (*VAR_6) {
   case 0xc0:
    VAR_6++; VAR_4--;
    break;

   default:
    VAR_5->rx_state = 132;
    VAR_5->rx_count = 4;
    VAR_5->rx_esc_state = VAR_0;
    FUNC_0(VAR_5->message_crc);






    VAR_5->rx_skb = FUNC_7(0x1005, VAR_1);
    if (!VAR_5->rx_skb) {
     FUNC_2("Can't allocate mem for new packet");
     VAR_5->rx_state = 129;
     VAR_5->rx_count = 0;
     return 0;
    }
    break;
   }
   break;
  }
 }
 return VAR_4;
}
