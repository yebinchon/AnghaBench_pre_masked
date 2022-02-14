
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nr; int dropcnt; int debug; scalar_t__ rx_skb; int Flags; } ;
struct hscx_hw {int log; TYPE_1__* ip; TYPE_2__ bch; scalar_t__ off; } ;
struct TYPE_3__ {char* name; int type; int hw; int (* read_fifo ) (int ,scalar_t__,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct hscx_hw*,int) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (char*,char*,int,int) ;
 int FUNC_4 (int ,int ,int*,int) ;
 int* FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int,char*,int,char*,int) ;
 int FUNC_8 (int ,scalar_t__,int*,int) ;
 int FUNC_9 (int ,scalar_t__,int*,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct hscx_hw *VAR_5, u8 VAR_6)
{
 u8 *VAR_7;
 int VAR_8;

 FUNC_2("%s: B%1d %d\n", VAR_5->ip->name, VAR_5->bch.nr, VAR_6);
 if (FUNC_10(VAR_2, &VAR_5->bch.Flags)) {
  VAR_5->bch.dropcnt += VAR_6;
  FUNC_1(VAR_5, 0x80);
  return;
 }
 VAR_8 = FUNC_0(&VAR_5->bch, VAR_6);
 if (VAR_8 < 0) {
  FUNC_1(VAR_5, 0x80);
  if (VAR_5->bch.rx_skb)
   FUNC_6(VAR_5->bch.rx_skb, 0);
  FUNC_3("%s.B%d: No bufferspace for %d bytes\n",
      VAR_5->ip->name, VAR_5->bch.nr, VAR_6);
  return;
 }
 VAR_7 = FUNC_5(VAR_5->bch.rx_skb, VAR_6);

 if (VAR_5->ip->type & VAR_4)
  VAR_5->ip->read_fifo(VAR_5->ip->hw,
        VAR_5->off + VAR_3, VAR_7, VAR_6);
 else
  VAR_5->ip->read_fifo(VAR_5->ip->hw,
        VAR_5->off, VAR_7, VAR_6);

 FUNC_1(VAR_5, 0x80);

 if (VAR_5->bch.debug & VAR_0) {
  FUNC_7(VAR_5->log, 64, "B%1d-recv %s %d ",
    VAR_5->bch.nr, VAR_5->ip->name, VAR_6);
  FUNC_4(VAR_5->log, VAR_1, VAR_7, VAR_6);
 }
}
