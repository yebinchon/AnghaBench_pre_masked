
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vga_i2c {int lock; } ;
struct zx_vga {struct zx_vga_i2c* ddc; } ;
struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 struct zx_vga* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zx_vga*,struct i2c_msg*) ;
 int FUNC_4 (struct zx_vga*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2,
      int VAR_3)
{
 struct zx_vga *VAR_4 = FUNC_0(VAR_1);
 struct zx_vga_i2c *VAR_5 = VAR_4->ddc;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_1(&VAR_5->lock);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_2[VAR_7].flags & VAR_0)
   VAR_6 = FUNC_3(VAR_4, &VAR_2[VAR_7]);
  else
   VAR_6 = FUNC_4(VAR_4, &VAR_2[VAR_7]);

  if (VAR_6 < 0)
   break;
 }

 if (!VAR_6)
  VAR_6 = VAR_3;

 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
