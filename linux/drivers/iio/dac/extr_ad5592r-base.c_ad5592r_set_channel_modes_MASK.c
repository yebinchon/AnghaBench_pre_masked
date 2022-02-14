
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iio_dev {int mlock; } ;
struct ad5592r_state {unsigned int num_channels; int* channel_modes; int gpio_map; int gpio_in; int gpio_out; int gpio_val; int * channel_offstate; struct ad5592r_rw_ops* ops; } ;
struct ad5592r_rw_ops {int (* reg_write ) (struct ad5592r_state*,int ,int) ;int (* reg_read ) (struct ad5592r_state*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int VAR_7 ;
 struct iio_dev* FUNC_1 (struct ad5592r_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ad5592r_state*,int ,int) ;
 int FUNC_5 (struct ad5592r_state*,int ,int) ;
 int FUNC_6 (struct ad5592r_state*,int ,int) ;
 int FUNC_7 (struct ad5592r_state*,int ,int) ;
 int FUNC_8 (struct ad5592r_state*,int ,int) ;
 int FUNC_9 (struct ad5592r_state*,int ,int) ;
 int FUNC_10 (struct ad5592r_state*,int ,int) ;
 int FUNC_11 (struct ad5592r_state*,int ,int*) ;

__attribute__((used)) static int FUNC_12(struct ad5592r_state *VAR_8)
{
 const struct ad5592r_rw_ops *VAR_9 = VAR_8->ops;
 int VAR_10;
 unsigned VAR_11;
 struct iio_dev *VAR_12 = FUNC_1(VAR_8);
 u8 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 u16 VAR_17;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_channels; VAR_11++) {
  switch (VAR_8->channel_modes[VAR_11]) {
  case 135:
   VAR_15 |= FUNC_0(VAR_11);
   break;

  case 136:
   VAR_16 |= FUNC_0(VAR_11);
   break;

  case 134:
   VAR_15 |= FUNC_0(VAR_11);
   VAR_16 |= FUNC_0(VAR_11);
   break;

  case 133:
   VAR_8->gpio_map |= FUNC_0(VAR_11);
   VAR_8->gpio_in |= FUNC_0(VAR_11);
   break;

  case 132:

  default:
   switch (VAR_8->channel_offstate[VAR_11]) {
   case 129:
    VAR_14 |= FUNC_0(VAR_11);
    break;

   case 130:
    VAR_8->gpio_out |= FUNC_0(VAR_11);
    break;

   case 131:
    VAR_8->gpio_out |= FUNC_0(VAR_11);
    VAR_8->gpio_val |= FUNC_0(VAR_11);
    break;

   case 128:

   default:
    VAR_13 |= FUNC_0(VAR_11);
    break;
   }
  }
 }

 FUNC_2(&VAR_12->mlock);


 VAR_10 = VAR_9->reg_write(VAR_8, VAR_5, VAR_13);
 if (VAR_10)
  goto err_unlock;

 VAR_10 = VAR_9->reg_write(VAR_8, VAR_6, VAR_14);
 if (VAR_10)
  goto err_unlock;


 VAR_10 = VAR_9->reg_write(VAR_8, VAR_1, VAR_15);
 if (VAR_10)
  goto err_unlock;

 VAR_10 = VAR_9->reg_write(VAR_8, VAR_0, VAR_16);
 if (VAR_10)
  goto err_unlock;

 VAR_10 = VAR_9->reg_write(VAR_8, VAR_4, VAR_8->gpio_val);
 if (VAR_10)
  goto err_unlock;

 VAR_10 = VAR_9->reg_write(VAR_8, VAR_3, VAR_8->gpio_out);
 if (VAR_10)
  goto err_unlock;

 VAR_10 = VAR_9->reg_write(VAR_8, VAR_2, VAR_8->gpio_in);
 if (VAR_10)
  goto err_unlock;


 VAR_10 = VAR_9->reg_read(VAR_8, VAR_0, &VAR_17);
 if (!VAR_10 && (VAR_17 & 0xff) != VAR_16)
  VAR_10 = -VAR_7;

err_unlock:
 FUNC_3(&VAR_12->mlock);
 return VAR_10;
}
