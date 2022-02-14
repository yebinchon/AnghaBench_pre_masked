
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_algo_dp_aux_data {int running; int address; } ;
struct i2c_adapter {struct i2c_algo_dp_aux_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_adapter*,int,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct i2c_adapter *VAR_3, u16 VAR_4, bool VAR_5)
{
 struct i2c_algo_dp_aux_data *VAR_6 = VAR_3->algo_data;
 int VAR_7 = VAR_1;
 int VAR_8;

 if (VAR_5)
  VAR_7 |= VAR_0;
 else
  VAR_7 |= VAR_2;
 VAR_6->address = VAR_4;
 VAR_6->running = 1;
 VAR_8 = FUNC_0(VAR_3, VAR_7, 0, ((void*)0));
 return VAR_8;
}
