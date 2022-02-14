
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct fritzcard {int type; scalar_t__ addr; int irq; int name; TYPE_1__ isac; } ;


 int FUNC_0 (int ,int ,TYPE_1__) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int ,int,...) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct fritzcard *VAR_14)
{
 u32 VAR_15, VAR_16;

 if (!FUNC_6(VAR_14->addr, 32, VAR_14->name)) {
  FUNC_3("%s: AVM config port %x-%x already in use\n",
   VAR_14->name, VAR_14->addr, VAR_14->addr + 31);
  return -VAR_5;
 }
 switch (VAR_14->type) {
 case 129:
  VAR_15 = FUNC_1(VAR_14->addr);
  FUNC_2(VAR_0, VAR_14->addr + VAR_2);
  VAR_16 = FUNC_1(VAR_14->addr + VAR_3 + VAR_7) >> 24;
  if (VAR_13 & VAR_4) {
   FUNC_4("%s: PCI stat %#x\n", VAR_14->name, VAR_15);
   FUNC_4("%s: PCI Class %X Rev %d\n", VAR_14->name,
      VAR_15 & 0xff, (VAR_15 >> 8) & 0xff);
   FUNC_4("%s: HDLC version %x\n", VAR_14->name, VAR_16 & 0xf);
  }
  FUNC_0(VAR_11, VAR_10, VAR_14->isac);
  VAR_14->isac.type = VAR_8;
  break;
 case 128:
  VAR_15 = FUNC_1(VAR_14->addr);
  VAR_16 = FUNC_1(VAR_14->addr + VAR_1) >> 24;
  if (VAR_13 & VAR_4) {
   FUNC_4("%s: PCI V2 stat %#x\n", VAR_14->name, VAR_15);
   FUNC_4("%s: PCI V2 Class %X Rev %d\n", VAR_14->name,
      VAR_15 & 0xff, (VAR_15 >> 8) & 0xff);
   FUNC_4("%s: HDLC version %x\n", VAR_14->name, VAR_16 & 0xf);
  }
  FUNC_0(VAR_12, VAR_10, VAR_14->isac);
  VAR_14->isac.type = VAR_9;
  break;
 default:
  FUNC_5(VAR_14->addr, 32);
  FUNC_3("%s: AVM unknown type %d\n", VAR_14->name, VAR_14->type);
  return -VAR_6;
 }
 FUNC_4("%s: %s config irq:%d base:0x%X\n", VAR_14->name,
    (VAR_14->type == 129) ? "AVM Fritz!CARD PCI" :
    "AVM Fritz!CARD PCIv2", VAR_14->irq, VAR_14->addr);
 return 0;
}
