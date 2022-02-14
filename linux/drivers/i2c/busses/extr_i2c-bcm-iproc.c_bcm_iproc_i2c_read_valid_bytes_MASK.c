
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_msg {size_t len; int* buf; } ;
struct bcm_iproc_i2c_dev {size_t rx_bytes; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_iproc_i2c_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct bcm_iproc_i2c_dev *VAR_5)
{
 struct i2c_msg *VAR_6 = VAR_5->msg;
 uint32_t VAR_7;


 while (VAR_5->rx_bytes < VAR_6->len) {
  VAR_7 = FUNC_0(VAR_5, VAR_2);


  if (!((VAR_7 >> VAR_4) & VAR_3))
   break;

  VAR_6->buf[VAR_5->rx_bytes] =
   (VAR_7 >> VAR_1) & VAR_0;
  VAR_5->rx_bytes++;
 }
}
