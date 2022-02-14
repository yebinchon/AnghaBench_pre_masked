
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {scalar_t__ power_mode; int lock; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct us5182d_data*) ;
 int FUNC_3 (struct us5182d_data*) ;
 int FUNC_4 (struct us5182d_data*) ;
 int FUNC_5 (struct us5182d_data*,int) ;

__attribute__((used)) static int FUNC_6(struct us5182d_data *VAR_2,
         struct iio_chan_spec const *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(&VAR_2->lock);

 if (VAR_2->power_mode == VAR_1) {
  VAR_4 = FUNC_4(VAR_2);
  if (VAR_4 < 0)
   goto out_err;
 }

 VAR_4 = FUNC_5(VAR_2, 1);
 if (VAR_4 < 0)
  goto out_err;

 if (VAR_3->type == VAR_0)
  VAR_4 = FUNC_2(VAR_2);
 else
  VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 < 0)
  goto out_poweroff;

 VAR_5 = VAR_4;

 VAR_4 = FUNC_5(VAR_2, 0);
 if (VAR_4 < 0)
  goto out_err;

 FUNC_1(&VAR_2->lock);
 return VAR_5;

out_poweroff:
 FUNC_5(VAR_2, 0);
out_err:
 FUNC_1(&VAR_2->lock);
 return VAR_4;
}
