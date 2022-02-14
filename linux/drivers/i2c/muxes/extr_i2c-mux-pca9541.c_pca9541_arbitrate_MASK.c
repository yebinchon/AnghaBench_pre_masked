
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9541 {int select_timeout; int arb_timeout; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 struct i2c_mux_core* FUNC_1 (struct i2c_client*) ;
 struct pca9541* FUNC_2 (struct i2c_mux_core*) ;
 scalar_t__ FUNC_3 (int) ;
 int* VAR_7 ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_8)
{
 struct i2c_mux_core *VAR_9 = FUNC_1(VAR_8);
 struct pca9541 *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8, VAR_0);
 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_0(VAR_11)) {
  int VAR_12;




  VAR_12 = FUNC_4(VAR_8, VAR_3);
  if (!(VAR_12 & VAR_4)
      || FUNC_6(VAR_10->arb_timeout)) {




   FUNC_5(VAR_8,
       VAR_0,
       VAR_7[VAR_11 & 0x0f]
       | VAR_2);
   VAR_10->select_timeout = VAR_6;
  } else {




   VAR_10->select_timeout = VAR_5 * 2;
  }
 } else if (FUNC_3(VAR_11)) {




  if (VAR_11 & (VAR_2 | VAR_1))
   FUNC_5(VAR_8,
       VAR_0,
       VAR_11 & ~(VAR_2
        | VAR_1));
  return 1;
 } else {





  VAR_10->select_timeout = VAR_5;
  if (FUNC_6(VAR_10->arb_timeout)) {

   FUNC_5(VAR_8,
       VAR_0,
       VAR_7[VAR_11 & 0x0f]
       | VAR_1
       | VAR_2);
  } else {

   if (!(VAR_11 & VAR_2))
    FUNC_5(VAR_8,
        VAR_0,
        VAR_11 | VAR_2);
  }
 }
 return 0;
}
