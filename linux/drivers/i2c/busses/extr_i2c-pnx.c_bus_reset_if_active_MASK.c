
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int name; int dev; } ;
struct i2c_pnx_algo_data {TYPE_1__ adapter; } ;


 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (struct i2c_pnx_algo_data*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct i2c_pnx_algo_data*) ;

__attribute__((used)) static inline void FUNC_6(struct i2c_pnx_algo_data *VAR_5)
{
 u32 VAR_6;

 if ((VAR_6 = FUNC_3(FUNC_1(VAR_5))) & VAR_1) {
  FUNC_2(&VAR_5->adapter.dev,
   "%s: Bus is still active after xfer. Reset it...\n",
   VAR_5->adapter.name);
  FUNC_4(FUNC_3(FUNC_0(VAR_5)) | VAR_0,
     FUNC_0(VAR_5));
  FUNC_5(VAR_5);
 } else if (!(VAR_6 & VAR_3) || !(VAR_6 & VAR_4)) {



  FUNC_4(FUNC_3(FUNC_0(VAR_5)) | VAR_0,
     FUNC_0(VAR_5));
  FUNC_5(VAR_5);
 } else if (VAR_6 & VAR_2) {
  FUNC_4(FUNC_3(FUNC_0(VAR_5)) | VAR_0,
     FUNC_0(VAR_5));
  FUNC_5(VAR_5);
 }
}
