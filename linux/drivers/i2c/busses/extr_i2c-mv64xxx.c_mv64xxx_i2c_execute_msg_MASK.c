
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64xxx_i2c_data {int send_stop; int block; int rc; int lock; int state; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv64xxx_i2c_data*) ;
 int FUNC_1 (struct mv64xxx_i2c_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct mv64xxx_i2c_data *VAR_1, struct i2c_msg *VAR_2,
    int VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_1->lock, VAR_4);

 VAR_1->state = VAR_0;

 VAR_1->send_stop = VAR_3;
 VAR_1->block = 1;
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_4);

 FUNC_1(VAR_1);
 return VAR_1->rc;
}
