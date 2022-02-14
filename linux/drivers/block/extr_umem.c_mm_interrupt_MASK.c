
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cardinfo {int flags; unsigned int dma_status; int tasklet; TYPE_1__* dev; scalar_t__ csr_remap; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *,char*,...) ;
 int FUNC_3 (struct cardinfo*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned short*) ;
 int FUNC_6 (TYPE_1__*,int ,unsigned short) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned int,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_21, void *VAR_22)
{
 struct cardinfo *VAR_23 = (struct cardinfo *) VAR_22;
 unsigned int VAR_24;
 unsigned short VAR_25;

FUNC_0(0x30);

 VAR_24 = FUNC_4(FUNC_8(VAR_23->csr_remap + VAR_9));

 if (!(VAR_24 & (VAR_3 | VAR_1))) {

  return VAR_16;
 }


 if (VAR_23->flags & VAR_20)
  FUNC_11(FUNC_1(VAR_2|VAR_1),
         VAR_23->csr_remap + VAR_9);
 else
  FUNC_10((VAR_2|VAR_1) >> 16,
         VAR_23->csr_remap + VAR_9 + 2);


 if (VAR_24 & VAR_0) {
  unsigned int VAR_26, VAR_27;
  unsigned int VAR_28, VAR_29;
  unsigned char VAR_30, VAR_31, VAR_32, VAR_33;

  VAR_30 = FUNC_7(VAR_23->csr_remap + VAR_18);

  VAR_26 = FUNC_4(FUNC_8(VAR_23->csr_remap +
      VAR_13));
  VAR_27 = FUNC_4(FUNC_8(VAR_23->csr_remap +
      VAR_13 + 4));
  VAR_28 = FUNC_4(FUNC_8(VAR_23->csr_remap +
      VAR_10));
  VAR_29 = FUNC_7(VAR_23->csr_remap + VAR_10 + 4);

  VAR_31 = FUNC_7(VAR_23->csr_remap + VAR_12);
  VAR_32 = FUNC_7(VAR_23->csr_remap + VAR_14);
  VAR_33 = FUNC_7(VAR_23->csr_remap + VAR_11);

  FUNC_3(VAR_23, VAR_24);

  if (VAR_30 & 0x01)
   FUNC_2(VAR_17, &VAR_23->dev->dev,
    "Memory access error detected (err count %d)\n",
    VAR_31);
  if (VAR_30 & 0x02)
   FUNC_2(VAR_17, &VAR_23->dev->dev,
    "Multi-bit EDC error\n");

  FUNC_2(VAR_17, &VAR_23->dev->dev,
   "Fault Address 0x%02x%08x, Fault Data 0x%08x%08x\n",
   VAR_29, VAR_28, VAR_27, VAR_26);
  FUNC_2(VAR_17, &VAR_23->dev->dev,
   "Fault Check 0x%02x, Fault Syndrome 0x%02x\n",
   VAR_33, VAR_32);

  FUNC_10(0, VAR_23->csr_remap + VAR_12);
 }

 if (VAR_24 & VAR_6) {
  FUNC_2(VAR_17, &VAR_23->dev->dev,
   "PARITY ERROR REPORTED\n");
  FUNC_5(VAR_23->dev, VAR_19, &VAR_25);
  FUNC_6(VAR_23->dev, VAR_19, VAR_25);
 }

 if (VAR_24 & VAR_5) {
  FUNC_2(VAR_17, &VAR_23->dev->dev,
   "PARITY ERROR DETECTED\n");
  FUNC_5(VAR_23->dev, VAR_19, &VAR_25);
  FUNC_6(VAR_23->dev, VAR_19, VAR_25);
 }

 if (VAR_24 & VAR_7) {
  FUNC_2(VAR_17, &VAR_23->dev->dev, "SYSTEM ERROR\n");
  FUNC_5(VAR_23->dev, VAR_19, &VAR_25);
  FUNC_6(VAR_23->dev, VAR_19, VAR_25);
 }

 if (VAR_24 & VAR_8) {
  FUNC_2(VAR_17, &VAR_23->dev->dev, "TARGET ABORT\n");
  FUNC_5(VAR_23->dev, VAR_19, &VAR_25);
  FUNC_6(VAR_23->dev, VAR_19, VAR_25);
 }

 if (VAR_24 & VAR_4) {
  FUNC_2(VAR_17, &VAR_23->dev->dev, "MASTER ABORT\n");
  FUNC_5(VAR_23->dev, VAR_19, &VAR_25);
  FUNC_6(VAR_23->dev, VAR_19, VAR_25);
 }


 VAR_23->dma_status = VAR_24;
 FUNC_9(&VAR_23->tasklet);

FUNC_0(0x36);

 return VAR_15;
}
