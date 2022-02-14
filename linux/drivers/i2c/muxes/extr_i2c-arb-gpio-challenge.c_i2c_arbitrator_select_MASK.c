
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_mux_core {int dev; } ;
struct i2c_arbitrator_data {int wait_free_us; int wait_retry_us; int slew_delay_us; int our_gpio; int their_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct i2c_arbitrator_data* FUNC_3 (struct i2c_mux_core*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_mux_core *VAR_2, u32 VAR_3)
{
 const struct i2c_arbitrator_data *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5, VAR_6;


 VAR_6 = VAR_1 + FUNC_6(VAR_4->wait_free_us) + 1;
 do {

  FUNC_2(VAR_4->our_gpio, 1);
  FUNC_5(VAR_4->slew_delay_us);


  VAR_5 = VAR_1 + FUNC_6(VAR_4->wait_retry_us) + 1;
  while (FUNC_4(VAR_1, VAR_5)) {
   int VAR_7 = FUNC_1(VAR_4->their_gpio);

   if (!VAR_7) {

    return 0;
   }

   FUNC_7(50, 200);
  }


  FUNC_2(VAR_4->our_gpio, 0);

  FUNC_7(VAR_4->wait_retry_us, VAR_4->wait_retry_us * 2);
 } while (FUNC_4(VAR_1, VAR_6));


 FUNC_2(VAR_4->our_gpio, 0);
 FUNC_5(VAR_4->slew_delay_us);
 FUNC_0(VAR_2->dev, "Could not claim bus, timeout\n");
 return -VAR_0;
}
