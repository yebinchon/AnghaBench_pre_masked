
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_iproc_i2c_dev {int xfer_is_done; int done; scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcm_iproc_i2c_dev*) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bcm_iproc_i2c_dev *VAR_3,
       u32 VAR_4)
{

 if (VAR_4 & FUNC_0(VAR_2))
  FUNC_2(VAR_3);


 if (VAR_4 & FUNC_0(VAR_0))
  FUNC_1(VAR_3);


 if (VAR_4 & FUNC_0(VAR_1)) {
  VAR_3->xfer_is_done = 1;
  if (VAR_3->irq)
   FUNC_3(&VAR_3->done);
 }
}
