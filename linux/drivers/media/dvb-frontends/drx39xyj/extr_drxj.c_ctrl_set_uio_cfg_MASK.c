
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxuio_cfg {int uio; int mode; } ;
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
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct drx_demod_instance *VAR_8, struct drxuio_cfg *VAR_9)
{
 struct drxj_data *VAR_10 = (struct drxj_data *) (((void*)0));
 int VAR_11;

 if ((VAR_9 == ((void*)0)) || (VAR_8 == ((void*)0)))
  return -VAR_0;

 VAR_10 = (struct drxj_data *) VAR_8->my_ext_attr;


 VAR_11 = FUNC_0(VAR_8->my_i2c_dev_addr, VAR_7, VAR_6, 0);
 if (VAR_11 != 0) {
  FUNC_1("error %d\n", VAR_11);
  goto rw_error;
 }
 switch (VAR_9->uio) {

 case 136:

  if (!VAR_10->has_smatx)
   return -VAR_1;
  switch (VAR_9->mode) {
  case 129:
  case 130:
  case 128:
   VAR_10->uio_sma_tx_mode = VAR_9->mode;
   break;
  case 132:
   VAR_10->uio_sma_tx_mode = VAR_9->mode;

   VAR_11 = FUNC_0(VAR_8->my_i2c_dev_addr, VAR_5, 0, 0);
   if (VAR_11 != 0) {
    FUNC_1("error %d\n", VAR_11);
    goto rw_error;
   }
   break;
  default:
   return -VAR_0;
  }
  break;

 case 135:

  if (!VAR_10->has_smarx)
   return -VAR_1;
  switch (VAR_9->mode) {
  case 131:
  case 128:
   VAR_10->uio_sma_rx_mode = VAR_9->mode;
   break;
  case 132:
   VAR_10->uio_sma_rx_mode = VAR_9->mode;

   VAR_11 = FUNC_0(VAR_8->my_i2c_dev_addr, VAR_4, 0, 0);
   if (VAR_11 != 0) {
    FUNC_1("error %d\n", VAR_11);
    goto rw_error;
   }
   break;
  default:
   return -VAR_0;
   break;
  }
  break;

 case 134:

  if (!VAR_10->has_gpio)
   return -VAR_1;
  switch (VAR_9->mode) {
  case 131:
  case 128:
   VAR_10->uio_gpio_mode = VAR_9->mode;
   break;
  case 132:
   VAR_10->uio_gpio_mode = VAR_9->mode;

   VAR_11 = FUNC_0(VAR_8->my_i2c_dev_addr, VAR_2, 0, 0);
   if (VAR_11 != 0) {
    FUNC_1("error %d\n", VAR_11);
    goto rw_error;
   }
   break;
  default:
   return -VAR_0;
   break;
  }
  break;

 case 133:

  if (!VAR_10->has_irqn)
   return -VAR_1;
  switch (VAR_9->mode) {
  case 128:
   VAR_10->uio_irqn_mode = VAR_9->mode;
   break;
  case 132:

   VAR_11 = FUNC_0(VAR_8->my_i2c_dev_addr, VAR_3, 0, 0);
   if (VAR_11 != 0) {
    FUNC_1("error %d\n", VAR_11);
    goto rw_error;
   }
   VAR_10->uio_irqn_mode = VAR_9->mode;
   break;
  case 131:
  default:
   return -VAR_0;
   break;
  }
  break;

 default:
  return -VAR_0;
 }


 VAR_11 = FUNC_0(VAR_8->my_i2c_dev_addr, VAR_7, 0x0000, 0);
 if (VAR_11 != 0) {
  FUNC_1("error %d\n", VAR_11);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_11;
}
