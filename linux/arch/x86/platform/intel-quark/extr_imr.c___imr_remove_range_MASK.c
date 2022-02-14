
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imr_regs {int addr_lo; int addr_hi; int wmask; int rmask; } ;
struct imr_device {int init; unsigned int max_imr; int lock; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,size_t) ;
 struct imr_device VAR_4 ;
 int FUNC_2 (struct imr_regs*) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct imr_device*,unsigned int,struct imr_regs*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct imr_device*,int,struct imr_regs*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,scalar_t__*,scalar_t__*,size_t) ;

__attribute__((used)) static int FUNC_10(int VAR_5, phys_addr_t VAR_6, size_t VAR_7)
{
 phys_addr_t VAR_8;
 bool VAR_9 = 0;
 unsigned int VAR_10;
 struct imr_device *VAR_11 = &VAR_4;
 struct imr_regs VAR_12;
 size_t VAR_13;
 int VAR_14 = 0;

 if (FUNC_0(VAR_11->init == 0, "driver not initialized"))
  return -VAR_0;





 if (VAR_5 == -1) {
  VAR_14 = FUNC_1(VAR_6, VAR_7);
  if (VAR_14)
   return VAR_14;
 }


 VAR_13 = FUNC_3(VAR_7);
 VAR_8 = VAR_6 + VAR_13;

 FUNC_7(&VAR_11->lock);

 if (VAR_5 >= 0) {

  VAR_14 = FUNC_4(VAR_11, VAR_5, &VAR_12);
  if (VAR_14)
   goto failed;

  if (!FUNC_2(&VAR_12) || VAR_12.addr_lo & VAR_1) {
   VAR_14 = -VAR_0;
   goto failed;
  }
  VAR_9 = 1;
 } else {

  for (VAR_10 = 0; VAR_10 < VAR_11->max_imr; VAR_10++) {
   VAR_14 = FUNC_4(VAR_11, VAR_10, &VAR_12);
   if (VAR_14)
    goto failed;

   if (!FUNC_2(&VAR_12) || VAR_12.addr_lo & VAR_1)
    continue;

   if ((FUNC_5(VAR_12.addr_lo) == VAR_6) &&
       (FUNC_5(VAR_12.addr_hi) == VAR_8)) {
    VAR_9 = 1;
    VAR_5 = VAR_10;
    break;
   }
  }
 }

 if (!VAR_9) {
  VAR_14 = -VAR_0;
  goto failed;
 }

 FUNC_9("remove %d phys %pa-%pa size %zx\n", VAR_5, &VAR_6, &VAR_8, VAR_13);


 VAR_12.addr_lo = 0;
 VAR_12.addr_hi = 0;
 VAR_12.rmask = VAR_2;
 VAR_12.wmask = VAR_3;

 VAR_14 = FUNC_6(VAR_11, VAR_5, &VAR_12);

failed:
 FUNC_8(&VAR_11->lock);
 return VAR_14;
}
