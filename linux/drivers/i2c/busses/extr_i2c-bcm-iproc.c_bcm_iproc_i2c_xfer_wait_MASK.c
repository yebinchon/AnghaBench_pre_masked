
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int dummy; } ;
struct bcm_iproc_i2c_dev {int device; int xfer_is_done; scalar_t__ irq; int done; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bcm_iproc_i2c_dev*,struct i2c_msg*) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct bcm_iproc_i2c_dev*,int ) ;
 int FUNC_7 (struct bcm_iproc_i2c_dev*,int ,int) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 unsigned long FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct bcm_iproc_i2c_dev *VAR_10,
       struct i2c_msg *VAR_11,
       u32 VAR_12)
{
 unsigned long VAR_13 = FUNC_8(VAR_1);
 u32 VAR_14, VAR_15;
 int VAR_16;

 FUNC_7(VAR_10, VAR_5, VAR_12);

 if (VAR_10->irq) {
  VAR_13 = FUNC_11(&VAR_10->done,
       VAR_13);

  FUNC_7(VAR_10, VAR_2, 0);

  FUNC_6(VAR_10, VAR_2);

  FUNC_9(VAR_10->irq);

 } else {
  unsigned long VAR_17 = VAR_9 + VAR_13;

  do {
   VAR_15 = FUNC_6(VAR_10,
        VAR_4) & VAR_3;
   FUNC_2(VAR_10, VAR_15);
   FUNC_7(VAR_10, VAR_4, VAR_15);

   if (FUNC_10(VAR_9, VAR_17)) {
    VAR_13 = 0;
    break;
   }

   FUNC_4();
   FUNC_3();
  } while (!VAR_10->xfer_is_done);
 }

 if (!VAR_13 && !VAR_10->xfer_is_done) {
  FUNC_5(VAR_10->device, "transaction timed out\n");


  VAR_14 = FUNC_0(VAR_7) | FUNC_0(VAR_8);
  FUNC_7(VAR_10, VAR_6, VAR_14);
  return -VAR_0;
 }

 VAR_16 = FUNC_1(VAR_10, VAR_11);
 if (VAR_16) {

  VAR_14 = FUNC_0(VAR_7) | FUNC_0(VAR_8);
  FUNC_7(VAR_10, VAR_6, VAR_14);
  return VAR_16;
 }

 return 0;
}
