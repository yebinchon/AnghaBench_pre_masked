
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_dp_aux_data {int running; } ;
struct i2c_adapter {struct i2c_algo_dp_aux_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_adapter*,int,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct i2c_adapter *VAR_3, bool VAR_4)
{
 struct i2c_algo_dp_aux_data *VAR_5 = VAR_3->algo_data;
 int VAR_6 = VAR_1;

 if (VAR_4)
  VAR_6 |= VAR_0;
 else
  VAR_6 |= VAR_2;
 if (VAR_5->running) {
  (void) FUNC_0(VAR_3, VAR_6, 0, ((void*)0));
  VAR_5->running = 0;
 }
}
