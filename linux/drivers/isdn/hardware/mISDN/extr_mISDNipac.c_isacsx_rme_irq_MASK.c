
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_1__* rx_skb; int err_crc; int err_rx; } ;
struct isac_hw {TYPE_2__ dch; int name; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct isac_hw*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(struct isac_hw *VAR_8)
{
 int VAR_9;
 u8 VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_3);
 if ((VAR_10 & (VAR_7 |
      VAR_6 |
      VAR_4 |
      VAR_5))
     != (VAR_7 | VAR_4)) {
  FUNC_4("%s: RSTAD %#x, dropped\n", VAR_8->name, VAR_10);






  FUNC_1(VAR_8, VAR_0, VAR_1);
  FUNC_2(VAR_8->dch.rx_skb);
  VAR_8->dch.rx_skb = ((void*)0);
 } else {
  VAR_9 = FUNC_0(VAR_8, VAR_2) & 0x1f;
  if (VAR_9 == 0)
   VAR_9 = 32;
  FUNC_3(VAR_8, VAR_9);
  if (VAR_8->dch.rx_skb) {
   FUNC_6(VAR_8->dch.rx_skb, VAR_8->dch.rx_skb->len - 1);
   FUNC_4("%s: dchannel received %d\n", VAR_8->name,
     VAR_8->dch.rx_skb->len);
   FUNC_5(&VAR_8->dch);
  }
 }
}
