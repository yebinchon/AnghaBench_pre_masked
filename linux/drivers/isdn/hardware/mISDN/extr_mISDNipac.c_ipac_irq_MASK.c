
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nr; int tx_idx; int Flags; } ;
struct hscx_hw {TYPE_2__ bch; TYPE_1__* ip; int fifo_size; } ;
struct TYPE_3__ {int type; int name; struct hscx_hw* hscx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct hscx_hw*,int ) ;
 int FUNC_1 (struct hscx_hw*,int) ;
 int FUNC_2 (struct hscx_hw*,int ) ;
 int FUNC_3 (struct hscx_hw*) ;
 int FUNC_4 (struct hscx_hw*) ;
 int FUNC_5 (char*,int ,int,...) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct hscx_hw *VAR_21, u8 VAR_22)
{
 u8 VAR_23, VAR_24, VAR_25 = 0;

 if (VAR_21->ip->type & VAR_18)
  VAR_23 = FUNC_0(VAR_21, VAR_12);
 else if (VAR_21->ip->type & VAR_17) {
  VAR_23 = FUNC_0(VAR_21, VAR_16);
  VAR_24 = (VAR_21->bch.nr & 1) ? VAR_19 : VAR_20;
  if (VAR_24 & VAR_22) {
   VAR_25 = FUNC_0(VAR_21, VAR_15);
   FUNC_5("%s: B%1d EXIRB %02x\n", VAR_21->ip->name,
     VAR_21->bch.nr, VAR_25);
  }
 } else if (VAR_21->bch.nr & 2) {
  if (VAR_22 & (VAR_4 | VAR_6))
   FUNC_9(&VAR_21->ip->hscx[0], VAR_22);
  if (VAR_22 & VAR_5) {
   VAR_25 = FUNC_0(VAR_21, VAR_15);
   FUNC_5("%s: B%1d EXIRB %02x\n", VAR_21->ip->name,
     VAR_21->bch.nr, VAR_25);
  }
  VAR_23 = VAR_22 & 0xF8;
 } else {
  VAR_23 = FUNC_0(VAR_21, VAR_16);
  if (VAR_22 & VAR_4) {
   VAR_25 = FUNC_0(VAR_21, VAR_15);
   FUNC_5("%s: B%1d EXIRB %02x\n", VAR_21->ip->name,
     VAR_21->bch.nr, VAR_25);
  }
  VAR_23 = VAR_23 & 0xF8;
 }
 if (VAR_25 & VAR_14)
  VAR_23 |= VAR_10;
 if (VAR_25 & VAR_13)
  VAR_23 |= VAR_7;
 FUNC_5("%s: B%1d ISTAB %02x\n", VAR_21->ip->name, VAR_21->bch.nr, VAR_23);

 if (!FUNC_8(VAR_0, &VAR_21->bch.Flags))
  return;

 if (VAR_23 & VAR_8)
  FUNC_4(VAR_21);

 if (VAR_23 & VAR_9) {
  FUNC_2(VAR_21, VAR_21->fifo_size);
  if (FUNC_8(VAR_2, &VAR_21->bch.Flags))
   FUNC_6(&VAR_21->bch, 0, 0);
 }

 if (VAR_23 & VAR_7) {
  FUNC_5("%s: B%1d RFO error\n", VAR_21->ip->name, VAR_21->bch.nr);
  FUNC_1(VAR_21, 0x40);
 }

 if (VAR_23 & VAR_11)
  FUNC_3(VAR_21);

 if (VAR_23 & VAR_10) {
  if (FUNC_8(VAR_2, &VAR_21->bch.Flags)) {
   if (FUNC_8(VAR_1, &VAR_21->bch.Flags))
    FUNC_7(VAR_3, &VAR_21->bch.Flags);
   FUNC_3(VAR_21);
   return;
  }
  FUNC_5("%s: B%1d XDU error at len %d\n", VAR_21->ip->name,
    VAR_21->bch.nr, VAR_21->bch.tx_idx);
  VAR_21->bch.tx_idx = 0;
  FUNC_1(VAR_21, 0x01);
 }
}
