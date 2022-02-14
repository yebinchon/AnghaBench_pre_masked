
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int debug; TYPE_2__* rx_skb; int nr; int state; } ;
struct hscx_hw {int fifo_size; TYPE_3__ bch; TYPE_1__* ip; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_4__ {int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hscx_hw*,int ) ;
 int FUNC_1 (struct hscx_hw*,int) ;
 int FUNC_2 (struct hscx_hw*,int) ;
 int FUNC_3 (char*,int ,int ,int) ;
 int FUNC_4 (char*,int ,int ,...) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_7(struct hscx_hw *VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 if (VAR_6->ip->type & VAR_5)
  VAR_8 = FUNC_0(VAR_6, VAR_2);
 else
  VAR_8 = FUNC_0(VAR_6, VAR_4);
 FUNC_3("%s: B%1d RSTAB %02x\n", VAR_6->ip->name, VAR_6->bch.nr, VAR_8);
 if ((VAR_8 & 0xf0) != 0xa0) {

  if (!(VAR_8 & 0x80)) {
   if (VAR_6->bch.debug & VAR_0)
    FUNC_4("%s: B%1d invalid frame\n",
       VAR_6->ip->name, VAR_6->bch.nr);
  }
  if (VAR_8 & 0x40) {
   if (VAR_6->bch.debug & VAR_0)
    FUNC_4("%s: B%1d RDO proto=%x\n",
       VAR_6->ip->name, VAR_6->bch.nr,
       VAR_6->bch.state);
  }
  if (!(VAR_8 & 0x20)) {
   if (VAR_6->bch.debug & VAR_0)
    FUNC_4("%s: B%1d CRC error\n",
       VAR_6->ip->name, VAR_6->bch.nr);
  }
  FUNC_1(VAR_6, 0x80);
  return;
 }
 if (VAR_6->ip->type & VAR_5)
  VAR_7 = FUNC_0(VAR_6, VAR_1);
 else
  VAR_7 = FUNC_0(VAR_6, VAR_3);
 VAR_7 &= (VAR_6->fifo_size - 1);
 if (VAR_7 == 0)
  VAR_7 = VAR_6->fifo_size;
 FUNC_2(VAR_6, VAR_7);
 if (!VAR_6->bch.rx_skb)
  return;
 if (VAR_6->bch.rx_skb->len < 2) {
  FUNC_3("%s: B%1d frame to short %d\n",
    VAR_6->ip->name, VAR_6->bch.nr, VAR_6->bch.rx_skb->len);
  FUNC_6(VAR_6->bch.rx_skb, 0);
 } else {
  FUNC_6(VAR_6->bch.rx_skb, VAR_6->bch.rx_skb->len - 1);
  FUNC_5(&VAR_6->bch, 0, 0);
 }
}
