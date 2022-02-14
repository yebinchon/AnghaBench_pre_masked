
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95241_data {int interval; int config; int trutherm; int model; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_10,
    struct lm95241_data *VAR_11)
{
 VAR_11->interval = 1000;
 VAR_11->config = VAR_0;
 VAR_11->trutherm = (VAR_9 << VAR_7) | (VAR_9 << VAR_8);

 FUNC_0(VAR_10, VAR_1, VAR_11->config);
 FUNC_0(VAR_10, VAR_3,
      VAR_5 | VAR_6);
 FUNC_0(VAR_10, VAR_4,
      VAR_11->trutherm);
 FUNC_0(VAR_10, VAR_2,
      VAR_11->model);
}
