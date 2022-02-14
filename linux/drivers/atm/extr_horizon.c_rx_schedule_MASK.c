
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct sk_buff {int len; int data; } ;
struct atm_vcc {int (* push ) (struct atm_vcc*,struct sk_buff*) ;TYPE_2__* stats; } ;
struct TYPE_14__ {unsigned int rx_bytes; unsigned int rx_regions; unsigned int rx_addr; int flags; int rx_channel; struct sk_buff* rx_skb; TYPE_1__* rx_iovec; } ;
typedef TYPE_3__ hrz_dev ;
struct TYPE_13__ {int rx; } ;
struct TYPE_12__ {unsigned int iov_base; unsigned int iov_len; } ;
struct TYPE_11__ {struct atm_vcc* vcc; } ;


 TYPE_10__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,int ,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ,unsigned int,unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (struct atm_vcc*,struct sk_buff*) ;
 unsigned int FUNC_12 (unsigned int) ;
 int FUNC_13 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_14 (hrz_dev * VAR_12, int VAR_13) {
  unsigned int VAR_14;

  int VAR_15 = 0;

  VAR_15 = 1;
  while (VAR_15) {


    VAR_14 = VAR_12->rx_bytes;
    if (VAR_14) {

      if (VAR_14 <= VAR_8) {
 FUNC_2 (VAR_3|VAR_1, "(pio)");
 VAR_15 = 1;
      }
      if (VAR_14 <= VAR_9) {
 FUNC_2 (VAR_3|VAR_1, "(simple or last multi)");
 VAR_12->rx_bytes = 0;
      } else {
 FUNC_2 (VAR_3|VAR_1, "(continuing multi)");
 VAR_12->rx_bytes = VAR_14 - VAR_9;
 VAR_14 = VAR_9;
      }
    } else {





      unsigned int VAR_16 = 0;


      if (VAR_16) {
      } else {


 struct sk_buff * VAR_17 = VAR_12->rx_skb;


 FUNC_1 (VAR_12, VAR_12->rx_channel);

 FUNC_7 ("<<<", VAR_12->rx_channel, VAR_17);

 FUNC_2 (VAR_3|VAR_4, "push %p %u", VAR_17->data, VAR_17->len);

 {
   struct atm_vcc * VAR_18 = FUNC_0(VAR_17)->vcc;

   FUNC_5(&VAR_18->stats->rx);
   FUNC_4(VAR_17);

   VAR_18->push (VAR_18, VAR_17);
 }
      }
    }


    if (VAR_14) {
      if (VAR_15) {
 if (VAR_13)
   FUNC_13 (VAR_12, VAR_7, 0);
 FUNC_10 (VAR_12, VAR_0, VAR_12->rx_addr, VAR_14);
      } else {
 FUNC_13 (VAR_12, VAR_6, FUNC_12 (VAR_12->rx_addr));
 FUNC_13 (VAR_12, VAR_7, VAR_14);
      }
      VAR_12->rx_addr += VAR_14;
    } else {
      if (VAR_13)
 FUNC_13 (VAR_12, VAR_7, 0);

      FUNC_3(VAR_12);
      FUNC_6 (VAR_10, &VAR_12->flags);
      FUNC_2 (VAR_3, "cleared rx_busy for dev %p", VAR_12);
    }
    VAR_13 = 0;
  }
  return;

}
