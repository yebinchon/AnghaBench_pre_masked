
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {struct fsi_i2c_port* algo_data; } ;
struct fsi_i2c_port {struct fsi_i2c_master* master; } ;
struct fsi_i2c_master {int fsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct fsi_i2c_port *VAR_5 = VAR_2->algo_data;
 struct fsi_i2c_master *VAR_6 = VAR_5->master;

 VAR_3 = FUNC_0(VAR_6->fsi, VAR_0, &VAR_4);
 if (VAR_3)
  return;

 VAR_4 |= VAR_1;
 FUNC_1(VAR_6->fsi, VAR_0, &VAR_4);
}
