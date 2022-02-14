
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_device {int dev; TYPE_1__* vdata; scalar_t__ io_regs; scalar_t__ sev_int_rcvd; } ;
struct TYPE_2__ {scalar_t__ cmdresp_reg; scalar_t__ cmdbuff_addr_hi_reg; scalar_t__ cmdbuff_addr_lo_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int,unsigned int,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int,int,void*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct psp_device* VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (struct psp_device*,unsigned int*,int ) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(int VAR_11, void *VAR_12, int *VAR_13)
{
 struct psp_device *VAR_14 = VAR_9;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18 = 0;

 if (!VAR_14)
  return -VAR_3;

 if (VAR_8)
  return -VAR_1;


 VAR_15 = VAR_12 ? FUNC_4(FUNC_0(VAR_12)) : 0;
 VAR_16 = VAR_12 ? FUNC_8(FUNC_0(VAR_12)) : 0;

 FUNC_1(VAR_14->dev, "sev command id %#x buffer 0x%08x%08x timeout %us\n",
  VAR_11, VAR_16, VAR_15, VAR_10);

 FUNC_5("(in):  ", VAR_0, 16, 2, VAR_12,
        FUNC_6(VAR_11), 0);

 FUNC_3(VAR_15, VAR_14->io_regs + VAR_14->vdata->cmdbuff_addr_lo_reg);
 FUNC_3(VAR_16, VAR_14->io_regs + VAR_14->vdata->cmdbuff_addr_hi_reg);

 VAR_14->sev_int_rcvd = 0;

 VAR_17 = VAR_11;
 VAR_17 <<= VAR_4;
 VAR_17 |= VAR_6;
 FUNC_3(VAR_17, VAR_14->io_regs + VAR_14->vdata->cmdresp_reg);


 VAR_18 = FUNC_7(VAR_14, &VAR_17, VAR_10);
 if (VAR_18) {
  if (VAR_13)
   *VAR_13 = 0;

  FUNC_2(VAR_14->dev, "sev command %#x timed out, disabling PSP \n", VAR_11);
  VAR_8 = 1;

  return VAR_18;
 }

 VAR_10 = VAR_7;

 if (VAR_13)
  *VAR_13 = VAR_17 & VAR_5;

 if (VAR_17 & VAR_5) {
  FUNC_1(VAR_14->dev, "sev command %#x failed (%#010x)\n",
   VAR_11, VAR_17 & VAR_5);
  VAR_18 = -VAR_2;
 }

 FUNC_5("(out): ", VAR_0, 16, 2, VAR_12,
        FUNC_6(VAR_11), 0);

 return VAR_18;
}
