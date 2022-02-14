
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp9xx_i2c_dev {int msg_err; scalar_t__ msg_len; int msg_complete; scalar_t__ msg_buf_remaining; int msg_read; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xlp9xx_i2c_dev*) ;
 int FUNC_2 (struct xlp9xx_i2c_dev*) ;
 int FUNC_3 (struct xlp9xx_i2c_dev*,int) ;
 int FUNC_4 (struct xlp9xx_i2c_dev*,int ) ;
 int FUNC_5 (struct xlp9xx_i2c_dev*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct xlp9xx_i2c_dev *VAR_11 = VAR_10;
 u32 VAR_12;

 VAR_12 = FUNC_4(VAR_11, VAR_7);
 if (VAR_12 == 0)
  return VAR_1;

 FUNC_5(VAR_11, VAR_7, VAR_12);
 if (VAR_12 & VAR_8) {
  VAR_11->msg_err = VAR_12;
  goto xfer_done;
 }


 if ((VAR_12 & VAR_6) && (VAR_11->msg_len == 0))
  goto xfer_done;

 if (!VAR_11->msg_read) {
  if (VAR_12 & VAR_4) {

   if (VAR_11->msg_buf_remaining)
    FUNC_2(VAR_11);
   else
    FUNC_3(VAR_11,
          VAR_4);
  }
 } else {
  if (VAR_12 & (VAR_3 |
         VAR_5)) {

   if (VAR_11->msg_buf_remaining)
    FUNC_1(VAR_11);
  }
 }


 if (VAR_12 & VAR_3)
  goto xfer_done;

 return VAR_0;

xfer_done:
 FUNC_5(VAR_11, VAR_2, 0);
 FUNC_0(&VAR_11->msg_complete);
 return VAR_0;
}
