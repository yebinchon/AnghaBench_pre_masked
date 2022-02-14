
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int debug; int timer; int l1; } ;
struct isac_hw {int mocr; int type; int state; int adf2; int name; TYPE_1__ dch; int * mon_rx; int * mon_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (struct isac_hw*) ;
 int FUNC_4 (struct isac_hw*) ;
 int FUNC_5 (struct isac_hw*,int ) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*,int ,int,...) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct isac_hw *VAR_31)
{
 u8 VAR_32;
 int VAR_33 = 0;

 if (!VAR_31->dch.l1) {
  VAR_33 = FUNC_2(&VAR_31->dch, VAR_30);
  if (VAR_33)
   return VAR_33;
 }
 VAR_31->mon_tx = ((void*)0);
 VAR_31->mon_rx = ((void*)0);
 FUNC_9(&VAR_31->dch.timer, VAR_29, 0);
 VAR_31->mocr = 0xaa;
 if (VAR_31->type & VAR_3) {

  FUNC_1(VAR_31, VAR_9, 0xff);
  VAR_32 = FUNC_0(VAR_31, VAR_12);
  FUNC_6("%s: ISACX STARD %x\n", VAR_31->name, VAR_32);
  VAR_32 = FUNC_0(VAR_31, VAR_8);
  FUNC_6("%s: ISACX ISTAD %x\n", VAR_31->name, VAR_32);
  VAR_32 = FUNC_0(VAR_31, VAR_7);
  FUNC_6("%s: ISACX ISTA %x\n", VAR_31->name, VAR_32);

  FUNC_1(VAR_31, VAR_13, 0x00);

  FUNC_1(VAR_31, VAR_14, 0x00);

  FUNC_1(VAR_31, VAR_11, 0xc9);

  VAR_32 = FUNC_0(VAR_31, VAR_6);
  if (VAR_31->dch.debug & VAR_0)
   FUNC_8("%s: ISACX Design ID %x\n",
      VAR_31->name, VAR_32 & 0x3f);
  VAR_32 = FUNC_0(VAR_31, VAR_5);
  FUNC_6("%s: ISACX CIR0 %02X\n", VAR_31->name, VAR_32);
  VAR_31->state = VAR_32 >> 4;
  FUNC_3(VAR_31);
  FUNC_5(VAR_31, VAR_18);
  FUNC_1(VAR_31, VAR_9, VAR_2);
  FUNC_1(VAR_31, VAR_10, 0x00);
 } else {
  FUNC_1(VAR_31, VAR_21, 0xff);
  VAR_32 = FUNC_0(VAR_31, VAR_26);
  FUNC_6("%s: ISAC STAR %x\n", VAR_31->name, VAR_32);
  VAR_32 = FUNC_0(VAR_31, VAR_22);
  FUNC_6("%s: ISAC MODE %x\n", VAR_31->name, VAR_32);
  VAR_32 = FUNC_0(VAR_31, VAR_16);
  FUNC_6("%s: ISAC ADF2 %x\n", VAR_31->name, VAR_32);
  VAR_32 = FUNC_0(VAR_31, VAR_20);
  FUNC_6("%s: ISAC ISTA %x\n", VAR_31->name, VAR_32);
  if (VAR_32 & 0x01) {
   VAR_32 = FUNC_0(VAR_31, VAR_19);
   FUNC_6("%s: ISAC EXIR %x\n", VAR_31->name, VAR_32);
  }
  VAR_32 = FUNC_0(VAR_31, VAR_23);
  if (VAR_31->dch.debug & VAR_0)
   FUNC_8("%s: ISAC version (%x): %s\n", VAR_31->name,
      VAR_32, VAR_4[(VAR_32 >> 5) & 3]);
  VAR_31->type |= ((VAR_32 >> 5) & 3);
  if (!VAR_31->adf2)
   VAR_31->adf2 = 0x80;
  if (!(VAR_31->adf2 & 0x80)) {
   FUNC_7("%s: only support IOM2 mode but adf2=%02x\n",
    VAR_31->name, VAR_31->adf2);
   FUNC_4(VAR_31);
   return -VAR_1;
  }
  FUNC_1(VAR_31, VAR_16, VAR_31->adf2);
  FUNC_1(VAR_31, VAR_25, 0x2f);
  FUNC_1(VAR_31, VAR_24, 0x00);
  FUNC_1(VAR_31, VAR_27, 0x70);
  FUNC_1(VAR_31, VAR_22, 0xc9);
  FUNC_1(VAR_31, VAR_28, 0x00);
  FUNC_1(VAR_31, VAR_15, 0x00);
  VAR_32 = FUNC_0(VAR_31, VAR_17);
  FUNC_6("%s: ISAC CIR0 %x\n", VAR_31->name, VAR_32);
  VAR_31->state = (VAR_32 >> 2) & 0xf;
  FUNC_3(VAR_31);
  FUNC_5(VAR_31, VAR_18);
  FUNC_1(VAR_31, VAR_21, 0);
 }
 return VAR_33;
}
