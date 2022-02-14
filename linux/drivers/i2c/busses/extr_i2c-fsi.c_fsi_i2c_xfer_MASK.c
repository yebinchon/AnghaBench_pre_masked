
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {unsigned long timeout; struct fsi_i2c_port* algo_data; } ;
struct fsi_i2c_port {struct fsi_i2c_master* master; } ;
struct fsi_i2c_master {int lock; } ;


 int FUNC_0 (struct fsi_i2c_port*) ;
 int FUNC_1 (struct fsi_i2c_port*,struct i2c_msg*,int) ;
 int FUNC_2 (struct fsi_i2c_port*,struct i2c_msg*,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2,
   int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6;
 struct fsi_i2c_port *VAR_7 = VAR_1->algo_data;
 struct fsi_i2c_master *VAR_8 = VAR_7->master;
 struct i2c_msg *VAR_9;

 FUNC_3(&VAR_8->lock);

 VAR_5 = FUNC_0(VAR_7);
 if (VAR_5)
  goto unlock;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_9 = VAR_2 + VAR_4;
  VAR_6 = VAR_0;

  VAR_5 = FUNC_1(VAR_7, VAR_9, VAR_4 == VAR_3 - 1);
  if (VAR_5)
   goto unlock;

  VAR_5 = FUNC_2(VAR_7, VAR_9,
      VAR_1->timeout - (VAR_0 - VAR_6));
  if (VAR_5)
   goto unlock;
 }

unlock:
 FUNC_4(&VAR_8->lock);
 return VAR_5 ? : VAR_3;
}
