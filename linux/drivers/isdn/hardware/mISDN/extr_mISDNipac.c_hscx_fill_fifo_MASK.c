
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int tx_idx; int nr; int debug; TYPE_1__* tx_skb; int Flags; int * fill; } ;
struct hscx_hw {int fifo_size; int * log; TYPE_3__* ip; TYPE_2__ bch; scalar_t__ off; } ;
struct TYPE_6__ {char* name; int type; int hw; int (* write_fifo ) (int ,scalar_t__,int *,int) ;} ;
struct TYPE_4__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hscx_hw*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,char*,int,int,int,int) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (int *,int,char*,int,char*,int) ;
 int FUNC_5 (int ,scalar_t__,int *,int) ;
 int FUNC_6 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct hscx_hw*) ;

__attribute__((used)) static void
FUNC_9(struct hscx_hw *VAR_6)
{
 int VAR_7, VAR_8;
 u8 *VAR_9;

 if (!VAR_6->bch.tx_skb) {
  if (!FUNC_7(VAR_3, &VAR_6->bch.Flags))
   return;
  VAR_7 = VAR_6->fifo_size;
  VAR_8 = 1;
  VAR_9 = VAR_6->log;
  FUNC_1(VAR_9, VAR_6->bch.fill[0], VAR_7);
 } else {
  VAR_7 = VAR_6->bch.tx_skb->len - VAR_6->bch.tx_idx;
  if (VAR_7 <= 0)
   return;
  VAR_9 = VAR_6->bch.tx_skb->data + VAR_6->bch.tx_idx;

  VAR_8 = FUNC_7(VAR_2, &VAR_6->bch.Flags) ? 1 : 0;
  if (VAR_7 > VAR_6->fifo_size) {
   VAR_7 = VAR_6->fifo_size;
   VAR_8 = 1;
  }
  FUNC_2("%s: B%1d %d/%d/%d\n", VAR_6->ip->name, VAR_6->bch.nr,
    VAR_7, VAR_6->bch.tx_idx, VAR_6->bch.tx_skb->len);
  VAR_6->bch.tx_idx += VAR_7;
 }
 if (VAR_6->ip->type & VAR_5)
  VAR_6->ip->write_fifo(VAR_6->ip->hw,
         VAR_6->off + VAR_4, VAR_9, VAR_7);
 else {
  FUNC_8(VAR_6);
  VAR_6->ip->write_fifo(VAR_6->ip->hw,
         VAR_6->off, VAR_9, VAR_7);
 }
 FUNC_0(VAR_6, VAR_8 ? 0x08 : 0x0a);

 if (VAR_6->bch.tx_skb && (VAR_6->bch.debug & VAR_0)) {
  FUNC_4(VAR_6->log, 64, "B%1d-send %s %d ",
    VAR_6->bch.nr, VAR_6->ip->name, VAR_7);
  FUNC_3(VAR_6->log, VAR_1, VAR_9, VAR_7);
 }
}
