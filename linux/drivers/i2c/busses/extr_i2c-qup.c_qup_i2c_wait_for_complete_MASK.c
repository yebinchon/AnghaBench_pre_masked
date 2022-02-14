
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_dev {int bus_err; scalar_t__ qup_err; scalar_t__ base; int xfer_timeout; int xfer; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (int *,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qup_i2c_dev *VAR_5,
         struct i2c_msg *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(&VAR_5->xfer, VAR_5->xfer_timeout);
 if (!VAR_7) {
  FUNC_1(1, VAR_5->base + VAR_4);
  VAR_8 = -VAR_2;
 }

 if (VAR_5->bus_err || VAR_5->qup_err)
  VAR_8 = (VAR_5->bus_err & VAR_3) ? -VAR_1 : -VAR_0;

 return VAR_8;
}
