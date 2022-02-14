
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imr_regs {unsigned int rmask; unsigned int wmask; void* addr_hi; void* addr_lo; } ;
struct imr_device {int init; unsigned int max_imr; int lock; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct imr_regs*) ;
 int FUNC_2 (scalar_t__,size_t) ;
 struct imr_device VAR_6 ;
 scalar_t__ FUNC_3 (struct imr_regs*) ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (struct imr_device*,unsigned int,struct imr_regs*) ;
 int FUNC_6 (struct imr_device*,int,struct imr_regs*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int,scalar_t__*,scalar_t__*,size_t,unsigned int,unsigned int) ;

int FUNC_11(phys_addr_t VAR_7, size_t VAR_8,
    unsigned int VAR_9, unsigned int VAR_10)
{
 phys_addr_t VAR_11;
 unsigned int VAR_12;
 struct imr_device *VAR_13 = &VAR_6;
 struct imr_regs VAR_14;
 size_t VAR_15;
 int VAR_16;
 int VAR_17;

 if (FUNC_0(VAR_13->init == 0, "driver not initialized"))
  return -VAR_1;

 VAR_17 = FUNC_2(VAR_7, VAR_8);
 if (VAR_17)
  return VAR_17;


 VAR_15 = FUNC_4(VAR_8);
 VAR_11 = VAR_7 + VAR_15;





 VAR_14.addr_lo = FUNC_9(VAR_7);
 VAR_14.addr_hi = FUNC_9(VAR_11);
 VAR_14.rmask = VAR_9;
 VAR_14.wmask = VAR_10;
 if (!FUNC_3(&VAR_14))
  return -VAR_3;

 FUNC_7(&VAR_13->lock);







 VAR_16 = -1;
 for (VAR_12 = 0; VAR_12 < VAR_13->max_imr; VAR_12++) {
  VAR_17 = FUNC_5(VAR_13, VAR_12, &VAR_14);
  if (VAR_17)
   goto failed;


  VAR_17 = -VAR_0;
  if (FUNC_3(&VAR_14)) {
   if (FUNC_1(VAR_7, &VAR_14))
    goto failed;
   if (FUNC_1(VAR_11, &VAR_14))
    goto failed;
  } else {
   VAR_16 = VAR_12;
  }
 }


 if (VAR_16 == -1) {
  VAR_17 = -VAR_2;
  goto failed;
 }

 FUNC_10("add %d phys %pa-%pa size %zx mask 0x%08x wmask 0x%08x\n",
   VAR_16, &VAR_7, &VAR_11, VAR_15, VAR_9, VAR_10);


 VAR_14.addr_lo = FUNC_9(VAR_7);
 VAR_14.addr_hi = FUNC_9(VAR_11);
 VAR_14.rmask = VAR_9;
 VAR_14.wmask = VAR_10;

 VAR_17 = FUNC_6(VAR_13, VAR_16, &VAR_14);
 if (VAR_17 < 0) {





  VAR_14.addr_lo = 0;
  VAR_14.addr_hi = 0;
  VAR_14.rmask = VAR_4;
  VAR_14.wmask = VAR_5;
  FUNC_6(VAR_13, VAR_16, &VAR_14);
 }
failed:
 FUNC_8(&VAR_13->lock);
 return VAR_17;
}
