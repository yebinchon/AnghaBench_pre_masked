
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int dmacur; int idx; int dmastart; scalar_t__ dmairq; } ;
struct TYPE_3__ {int dmacur; int idx; int dmastart; scalar_t__ dmairq; } ;
struct tiger_hw {int base; int last_is0; int lock; TYPE_2__ send; TYPE_1__ recv; int name; int isac; int irqcnt; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct tiger_hw*,int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int ,int,int,...) ;
 int FUNC_6 (struct tiger_hw*,int) ;
 int FUNC_7 (struct tiger_hw*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_10(int VAR_10, void *VAR_11)
{
 struct tiger_hw *VAR_12 = VAR_11;
 u8 VAR_13, VAR_14, VAR_15;

 FUNC_8(&VAR_12->lock);
 VAR_15 = FUNC_1(VAR_12->base | VAR_7);
 VAR_14 = FUNC_1(VAR_12->base | VAR_8);
 if ((VAR_14 & VAR_9) && (VAR_15 == 0)) {

  FUNC_9(&VAR_12->lock);
  return VAR_1;
 }
 FUNC_5("%s: IRQSTAT0 %02x IRQSTAT1 %02x\n", VAR_12->name, VAR_15, VAR_14);
 VAR_12->irqcnt++;
 if (!(VAR_14 & VAR_9)) {
  VAR_13 = FUNC_0(VAR_12, VAR_2);
  if (VAR_13)
   FUNC_3(&VAR_12->isac, VAR_13);
 }

 if (VAR_15)

  FUNC_4(VAR_15, VAR_12->base | VAR_7);
 else
  goto end;
 VAR_14 = VAR_15;

 VAR_12->recv.dmacur = FUNC_2(VAR_12->base | VAR_4);
 VAR_12->recv.idx = (VAR_12->recv.dmacur - VAR_12->recv.dmastart) >> 2;
 if (VAR_12->recv.dmacur < VAR_12->recv.dmairq)
  VAR_15 = 0x08;
 else
  VAR_15 = 0x04;

 VAR_12->send.dmacur = FUNC_2(VAR_12->base | VAR_3);
 VAR_12->send.idx = (VAR_12->send.dmacur - VAR_12->send.dmastart) >> 2;
 if (VAR_12->send.dmacur < VAR_12->send.dmairq)
  VAR_15 |= 0x02;
 else
  VAR_15 |= 0x01;

 FUNC_5("%s: DMA Status %02x/%02x/%02x %d/%d\n", VAR_12->name,
   VAR_14, VAR_15, VAR_12->last_is0,
   VAR_12->recv.idx, VAR_12->send.idx);

 if (VAR_15 != VAR_12->last_is0) {
  if ((VAR_15 & VAR_5) !=
      (VAR_12->last_is0 & VAR_5))

   FUNC_7(VAR_12, VAR_15);
  if ((VAR_15 & VAR_6) !=
      (VAR_12->last_is0 & VAR_6))

   FUNC_6(VAR_12, VAR_15);
 }
end:
 FUNC_9(&VAR_12->lock);
 return VAR_0;
}
