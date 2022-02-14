
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * rx_skb; int err_crc; int err_rx; } ;
struct isac_hw {TYPE_1__ dch; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct isac_hw*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct isac_hw *VAR_3)
{
 u8 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if ((VAR_4 & 0x70) != 0x20) {
  if (VAR_4 & 0x40) {
   FUNC_4("%s: ISAC RDO\n", VAR_3->name);



  }
  if (!(VAR_4 & 0x20)) {
   FUNC_4("%s: ISAC CRC error\n", VAR_3->name);



  }
  FUNC_1(VAR_3, VAR_0, 0x80);
  FUNC_2(VAR_3->dch.rx_skb);
  VAR_3->dch.rx_skb = ((void*)0);
 } else {
  VAR_5 = FUNC_0(VAR_3, VAR_1) & 0x1f;
  if (VAR_5 == 0)
   VAR_5 = 32;
  FUNC_3(VAR_3, VAR_5);
  FUNC_5(&VAR_3->dch);
 }
}
