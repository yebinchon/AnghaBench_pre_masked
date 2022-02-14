
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxuio_data {int uio; int value; } ;
struct drxj_data {int uio_irqn_mode; int has_irqn; int uio_gpio_mode; int has_gpio; int uio_sma_rx_mode; int has_smarx; int uio_sma_tx_mode; int has_smatx; } ;
struct drx_demod_instance {int my_i2c_dev_addr; scalar_t__ my_ext_attr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct drx_demod_instance *VAR_12, struct drxuio_data *VAR_13)
{
 struct drxj_data *VAR_14 = (struct drxj_data *) (((void*)0));
 int VAR_15;
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;

 if ((VAR_13 == ((void*)0)) || (VAR_12 == ((void*)0)))
  return -VAR_2;

 VAR_14 = (struct drxj_data *) VAR_12->my_ext_attr;


 VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_11, VAR_10, 0);
 if (VAR_15 != 0) {
  FUNC_2("error %d\n", VAR_15);
  goto rw_error;
 }
 switch (VAR_13->uio) {

 case 131:

  if (!VAR_14->has_smatx)
   return -VAR_3;
  if ((VAR_14->uio_sma_tx_mode != VAR_1)
      && (VAR_14->uio_sma_tx_mode != VAR_0)) {
   return -VAR_3;
  }
  VAR_16 = 0;

  VAR_16 |= 0x0113;




  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_7, VAR_16, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }


  VAR_15 = FUNC_0(VAR_12->my_i2c_dev_addr, VAR_9, &VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  if (!VAR_13->value)
   VAR_17 &= 0x7FFF;
  else
   VAR_17 |= 0x8000;


  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_9, VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  break;

 case 130:

  if (!VAR_14->has_smarx)
   return -VAR_3;
  if (VAR_14->uio_sma_rx_mode != VAR_1)
   return -VAR_3;

  VAR_16 = 0;

  VAR_16 |= 0x0113;




  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_6, VAR_16, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }


  VAR_15 = FUNC_0(VAR_12->my_i2c_dev_addr, VAR_9, &VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  if (!VAR_13->value)
   VAR_17 &= 0xBFFF;
  else
   VAR_17 |= 0x4000;


  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_9, VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  break;

 case 129:

  if (!VAR_14->has_gpio)
   return -VAR_3;
  if (VAR_14->uio_gpio_mode != VAR_1)
   return -VAR_3;

  VAR_16 = 0;

  VAR_16 |= 0x0113;




  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_4, VAR_16, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }


  VAR_15 = FUNC_0(VAR_12->my_i2c_dev_addr, VAR_8, &VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  if (!VAR_13->value)
   VAR_17 &= 0xFFFB;
  else
   VAR_17 |= 0x0004;


  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_8, VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  break;

 case 128:

  if (!VAR_14->has_irqn)
   return -VAR_3;

  if (VAR_14->uio_irqn_mode != VAR_1)
   return -VAR_3;

  VAR_16 = 0;

  VAR_16 |= 0x0113;




  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_5, VAR_16, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }


  VAR_15 = FUNC_0(VAR_12->my_i2c_dev_addr, VAR_9, &VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  if (VAR_13->value == 0)
   VAR_17 &= 0xEFFF;
  else
   VAR_17 |= 0x1000;


  VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_9, VAR_17, 0);
  if (VAR_15 != 0) {
   FUNC_2("error %d\n", VAR_15);
   goto rw_error;
  }
  break;

 default:
  return -VAR_2;
 }


 VAR_15 = FUNC_1(VAR_12->my_i2c_dev_addr, VAR_11, 0x0000, 0);
 if (VAR_15 != 0) {
  FUNC_2("error %d\n", VAR_15);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_15;
}
