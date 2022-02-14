
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cm36651_data {int* cs_ctrl_regs; int* ps_ctrl_regs; struct i2c_client* ps_client; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t* VAR_20 ;
 size_t* VAR_21 ;
 int FUNC_0 (struct i2c_client*,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct cm36651_data *VAR_22)
{
 struct i2c_client *VAR_23 = VAR_22->client;
 struct i2c_client *VAR_24 = VAR_22->ps_client;
 int VAR_25, VAR_26;


 VAR_22->cs_ctrl_regs[VAR_3] = VAR_1 |
            VAR_2;
 VAR_22->cs_ctrl_regs[VAR_4] = VAR_5;

 for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++) {
  VAR_26 = FUNC_0(VAR_23, VAR_20[VAR_25],
           VAR_22->cs_ctrl_regs[VAR_25]);
  if (VAR_26 < 0)
   return VAR_26;
 }


 VAR_22->ps_ctrl_regs[VAR_9] = VAR_13 |
        VAR_16;
 VAR_22->ps_ctrl_regs[VAR_19] = VAR_15;
 VAR_22->ps_ctrl_regs[VAR_7] = VAR_8;
 VAR_22->ps_ctrl_regs[VAR_10] = VAR_14 |
    VAR_11 | VAR_18;

 for (VAR_25 = 0; VAR_25 < VAR_17; VAR_25++) {
  VAR_26 = FUNC_0(VAR_24, VAR_21[VAR_25],
           VAR_22->ps_ctrl_regs[VAR_25]);
  if (VAR_26 < 0)
   return VAR_26;
 }


 VAR_26 = FUNC_0(VAR_23, VAR_3,
         VAR_0);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_0(VAR_22->ps_client,
      VAR_9, VAR_12);
 if (VAR_26 < 0)
  return VAR_26;

 return 0;
}
