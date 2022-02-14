
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct bcsp_struct {int rx_esc_state; int rx_count; int rx_state; TYPE_1__* rx_skb; int message_crc; } ;
struct TYPE_3__ {int* data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,int) ;

__attribute__((used)) static inline void FUNC_4(struct bcsp_struct *VAR_2, unsigned char VAR_3)
{
 const u8 VAR_4 = 0xc0, VAR_5 = 0xdb;

 switch (VAR_2->rx_esc_state) {
 case 128:
  switch (VAR_3) {
  case 0xdb:
   VAR_2->rx_esc_state = 129;
   break;
  default:
   FUNC_3(VAR_2->rx_skb, &VAR_3, 1);
   if ((VAR_2->rx_skb->data[0] & 0x40) != 0 &&
       VAR_2->rx_state != VAR_0)
    FUNC_1(&VAR_2->message_crc, VAR_3);
   VAR_2->rx_count--;
  }
  break;

 case 129:
  switch (VAR_3) {
  case 0xdc:
   FUNC_3(VAR_2->rx_skb, &VAR_4, 1);
   if ((VAR_2->rx_skb->data[0] & 0x40) != 0 &&
       VAR_2->rx_state != VAR_0)
    FUNC_1(&VAR_2->message_crc, 0xc0);
   VAR_2->rx_esc_state = 128;
   VAR_2->rx_count--;
   break;

  case 0xdd:
   FUNC_3(VAR_2->rx_skb, &VAR_5, 1);
   if ((VAR_2->rx_skb->data[0] & 0x40) != 0 &&
       VAR_2->rx_state != VAR_0)
    FUNC_1(&VAR_2->message_crc, 0xdb);
   VAR_2->rx_esc_state = 128;
   VAR_2->rx_count--;
   break;

  default:
   FUNC_0("Invalid byte %02x after esc byte", VAR_3);
   FUNC_2(VAR_2->rx_skb);
   VAR_2->rx_skb = ((void*)0);
   VAR_2->rx_state = VAR_1;
   VAR_2->rx_count = 0;
  }
 }
}
