
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stm32_mdma_device {scalar_t__ base; struct stm32_mdma_chan* chan; } ;
struct TYPE_4__ {int lock; } ;
struct stm32_mdma_chan {int id; TYPE_2__ vchan; TYPE_1__* desc; int curr_hwdesc; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int vdesc; int count; int cyclic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;





 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct stm32_mdma_chan*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (struct stm32_mdma_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct stm32_mdma_device*,int ) ;
 int FUNC_13 (struct stm32_mdma_device*,int,int ) ;
 int FUNC_14 (struct stm32_mdma_chan*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_10, void *VAR_11)
{
 struct stm32_mdma_device *VAR_12 = VAR_11;
 struct stm32_mdma_chan *VAR_13 = VAR_11;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;


 VAR_17 = FUNC_9(VAR_12->base + VAR_8);
 if (VAR_17) {
  VAR_15 = FUNC_4(VAR_17);
 } else {
  VAR_17 = FUNC_9(VAR_12->base + VAR_9);
  if (!VAR_17) {
   FUNC_6(FUNC_8(VAR_12), "spurious it\n");
   return VAR_1;
  }
  VAR_15 = FUNC_4(VAR_17);




  VAR_15 += 32;
 }

 VAR_13 = &VAR_12->chan[VAR_15];
 if (!VAR_13) {
  FUNC_6(FUNC_8(VAR_12), "MDMA channel not initialized\n");
  goto exit;
 }


 FUNC_10(&VAR_13->vchan.lock);
 VAR_17 = FUNC_12(VAR_12, FUNC_3(VAR_13->id));
 VAR_16 = FUNC_12(VAR_12, FUNC_0(VAR_13->id));
 VAR_16 &= VAR_2;
 VAR_16 >>= 1;

 if (!(VAR_17 & VAR_16)) {
  FUNC_11(&VAR_13->vchan.lock);
  FUNC_6(FUNC_5(VAR_13),
   "spurious it (status=0x%04x, ien=0x%04x)\n",
   VAR_17, VAR_16);
  return VAR_1;
 }

 VAR_18 = FUNC_4(VAR_17 & VAR_16);
 VAR_14 = FUNC_2(VAR_13->id);

 switch (1 << VAR_18) {
 case 128:
  VAR_15 = VAR_13->id;
  VAR_17 = FUNC_9(VAR_12->base + FUNC_1(VAR_15));
  FUNC_7(FUNC_5(VAR_13), "Transfer Err: stat=0x%08x\n", VAR_17);
  FUNC_13(VAR_12, VAR_14, VAR_7);
  break;

 case 130:
  FUNC_13(VAR_12, VAR_14, VAR_5);
  FUNC_14(VAR_13);
  break;

 case 132:
  FUNC_13(VAR_12, VAR_14, VAR_3);
  break;

 case 131:
  FUNC_13(VAR_12, VAR_14, VAR_4);
  VAR_13->curr_hwdesc++;
  if (VAR_13->desc && VAR_13->desc->cyclic) {
   if (VAR_13->curr_hwdesc == VAR_13->desc->count)
    VAR_13->curr_hwdesc = 0;
   FUNC_15(&VAR_13->desc->vdesc);
  }
  break;

 case 129:
  FUNC_13(VAR_12, VAR_14, VAR_6);
  break;

 default:
  FUNC_7(FUNC_5(VAR_13), "it %d unhandled (status=0x%04x)\n",
   1 << VAR_18, VAR_17);
 }

 FUNC_11(&VAR_13->vchan.lock);

exit:
 return VAR_0;
}
