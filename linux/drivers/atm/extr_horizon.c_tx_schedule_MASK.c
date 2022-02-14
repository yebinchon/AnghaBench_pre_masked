
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct sk_buff {int len; } ;
struct TYPE_16__ {unsigned int tx_bytes; unsigned int tx_regions; unsigned int tx_addr; struct sk_buff* tx_skb; TYPE_1__* tx_iovec; int flags; } ;
typedef TYPE_4__ hrz_dev ;
struct TYPE_15__ {TYPE_2__* stats; } ;
struct TYPE_14__ {int tx; } ;
struct TYPE_13__ {unsigned int iov_base; unsigned int iov_len; } ;
struct TYPE_12__ {TYPE_3__* vcc; } ;


 TYPE_11__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_4__* const) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (TYPE_4__* const,int ) ;
 int VAR_12 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_4__* const) ;
 int VAR_13 ;
 unsigned int FUNC_9 (unsigned int) ;
 int FUNC_10 (TYPE_4__* const,int ,unsigned int) ;
 int FUNC_11 (TYPE_4__* const,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_12 (hrz_dev * const VAR_14, int VAR_15) {
  unsigned int VAR_16;

  int VAR_17 = 0;

  int VAR_18 = 0;

  VAR_18 = 1;
  while (VAR_18) {


    VAR_16 = VAR_14->tx_bytes;
    if (VAR_16) {

      if (!FUNC_7 (VAR_13, &VAR_14->flags) || VAR_16 <= VAR_8) {
 FUNC_1 (VAR_3|VAR_1, "(pio)");
 VAR_18 = 1;
      }
      if (VAR_16 <= VAR_9) {
 FUNC_1 (VAR_3|VAR_1, "(simple or last multi)");
 if (!VAR_14->tx_iovec) {

   VAR_17 = 1;
 }
 VAR_14->tx_bytes = 0;
      } else {
 FUNC_1 (VAR_3|VAR_1, "(continuing multi)");
 VAR_14->tx_bytes = VAR_16 - VAR_9;
 VAR_16 = VAR_9;
      }
    } else {


      unsigned int VAR_19 = VAR_14->tx_regions;

      if (VAR_19) {

 VAR_14->tx_addr = VAR_14->tx_iovec->iov_base;
 VAR_16 = VAR_14->tx_iovec->iov_len;
 ++VAR_14->tx_iovec;
 VAR_14->tx_regions = VAR_19 - 1;

 if (!FUNC_7 (VAR_13, &VAR_14->flags) || VAR_16 <= VAR_8) {
   FUNC_1 (VAR_3|VAR_1, "(pio)");
   VAR_18 = 1;
 }
 if (VAR_16 <= VAR_9) {
   FUNC_1 (VAR_3|VAR_1, "(full region)");
   VAR_14->tx_bytes = 0;
 } else {
   FUNC_1 (VAR_3|VAR_1, "(start multi region)");
   VAR_14->tx_bytes = VAR_16 - VAR_9;
   VAR_16 = VAR_9;
 }
      } else {


 struct sk_buff * VAR_20 = VAR_14->tx_skb;
 VAR_14->tx_iovec = ((void*)0);


 FUNC_3(&FUNC_0(VAR_20)->vcc->stats->tx);


 FUNC_5 (VAR_20);
      }
    }


    if (VAR_16) {
      if (VAR_18) {
 if (VAR_15)
   FUNC_10 (VAR_14, VAR_7, 0);
 FUNC_11 (VAR_14, VAR_0, VAR_14->tx_addr, VAR_16);
 if (VAR_17)
   FUNC_10 (VAR_14, VAR_10, FUNC_4 (VAR_14->tx_skb->len));
      } else {
 FUNC_10 (VAR_14, VAR_5, FUNC_9 (VAR_14->tx_addr));
 if (VAR_17)
   FUNC_10 (VAR_14, VAR_11, FUNC_4 (VAR_14->tx_skb->len));
 FUNC_10 (VAR_14, VAR_7,
   VAR_17
   ? VAR_16 | VAR_6
   : VAR_16);
      }
      VAR_14->tx_addr += VAR_16;
    } else {
      if (VAR_15)
 FUNC_10 (VAR_14, VAR_7, 0);
      FUNC_2(VAR_14);
      FUNC_8 (VAR_14);
    }
    VAR_15 = 0;
  }
  return;

}
