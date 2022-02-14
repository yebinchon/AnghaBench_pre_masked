
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct flexrm_ring {int bd_write_offset; void* bd_base; int lock; int requests_bmap; struct brcm_message** requests; TYPE_1__* mbox; int msg_send_count; scalar_t__ bd_dma_base; scalar_t__ regs; } ;
struct brcm_message {int error; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,struct brcm_message*) ;
 int FUNC_8 (int ,struct brcm_message*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct brcm_message*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct brcm_message*) ;
 void* FUNC_13 (struct brcm_message*,int,int,void*,int ,void*,void*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct flexrm_ring *VAR_7,
    struct brcm_message *VAR_8,
    struct brcm_message *VAR_9)
{
 void *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;
 bool VAR_17 = 0;
 int VAR_18 = 0, VAR_19;


 if (!FUNC_12(VAR_9))
  return -VAR_0;
 VAR_9->error = 0;


 FUNC_15(&VAR_7->lock, VAR_11);
 VAR_19 = FUNC_5(VAR_7->requests_bmap,
     VAR_6, 0);
 FUNC_16(&VAR_7->lock, VAR_11);
 if (VAR_19 < 0)
  return -VAR_1;
 VAR_7->requests[VAR_19] = VAR_9;


 VAR_18 = FUNC_7(VAR_7->mbox->dev, VAR_9);
 if (VAR_18 < 0) {
  VAR_7->requests[VAR_19] = ((void*)0);
  FUNC_15(&VAR_7->lock, VAR_11);
  FUNC_6(VAR_7->requests_bmap, VAR_19, 0);
  FUNC_16(&VAR_7->lock, VAR_11);
  return VAR_18;
 }


 VAR_15 = FUNC_14(VAR_7->regs + VAR_2);
 VAR_12 = FUNC_14(VAR_7->regs + VAR_4);
 VAR_15 *= VAR_5;
 VAR_15 += (u32)(FUNC_0(VAR_12) - VAR_7->bd_dma_base);






 VAR_14 = FUNC_10(VAR_9);
 VAR_13 = FUNC_9(VAR_14) + VAR_14 + 1;


 VAR_16 = VAR_7->bd_write_offset;
 while (VAR_13) {
  if (!FUNC_11(VAR_7->bd_base + VAR_16))
   VAR_13--;
  VAR_16 += VAR_5;
  if (VAR_16 == VAR_3)
   VAR_16 = 0x0;
  if (VAR_16 == VAR_15)
   break;
 }
 if (VAR_13) {
  VAR_18 = -VAR_1;
  VAR_17 = 1;
  goto exit;
 }


 VAR_10 = FUNC_13(VAR_9, VAR_14, VAR_19,
   VAR_7->bd_base + VAR_7->bd_write_offset,
   FUNC_3(VAR_7->bd_write_offset),
   VAR_7->bd_base, VAR_7->bd_base + VAR_3);
 if (FUNC_1(VAR_10)) {
  VAR_18 = FUNC_2(VAR_10);
  VAR_17 = 1;
  goto exit;
 }


 VAR_7->bd_write_offset = (unsigned long)(VAR_10 - VAR_7->bd_base);


 FUNC_4(&VAR_7->msg_send_count);

exit:

 VAR_9->error = VAR_18;


 if (VAR_17) {
  FUNC_8(VAR_7->mbox->dev, VAR_9);
  VAR_7->requests[VAR_19] = ((void*)0);
  FUNC_15(&VAR_7->lock, VAR_11);
  FUNC_6(VAR_7->requests_bmap, VAR_19, 0);
  FUNC_16(&VAR_7->lock, VAR_11);
 }

 return VAR_18;
}
