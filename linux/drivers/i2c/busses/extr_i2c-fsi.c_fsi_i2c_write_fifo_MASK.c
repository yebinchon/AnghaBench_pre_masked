
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; } ;
struct fsi_i2c_port {size_t xfrd; struct fsi_i2c_master* master; } ;
struct fsi_i2c_master {int fifo_size; int fsi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct fsi_i2c_port *VAR_1, struct i2c_msg *VAR_2,
         u8 VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct fsi_i2c_master *VAR_6 = VAR_1->master;
 int VAR_7 = VAR_6->fifo_size - VAR_3;
 int VAR_8 = VAR_2->len - VAR_1->xfrd;

 VAR_7 = FUNC_2(VAR_7, VAR_8);

 while (VAR_7) {
  VAR_4 = FUNC_1(VAR_7);

  VAR_5 = FUNC_0(VAR_6->fsi, VAR_0,
          &VAR_2->buf[VAR_1->xfrd], VAR_4);
  if (VAR_5)
   return VAR_5;

  VAR_1->xfrd += VAR_4;
  VAR_7 -= VAR_4;
 }

 return 0;
}
