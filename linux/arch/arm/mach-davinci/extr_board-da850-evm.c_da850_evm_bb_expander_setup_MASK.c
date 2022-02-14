
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      void *VAR_6)
{
 int VAR_7;





 FUNC_0(VAR_4);
 VAR_7 = FUNC_2(&VAR_0);
 if (VAR_7) {
  FUNC_4("Could not register baseboard GPIO expander keys");
  goto io_exp_setup_sw_fail;
 }

 FUNC_1(&VAR_2);
 VAR_7 = FUNC_2(&VAR_1);
 if (VAR_7) {
  FUNC_4("Could not register baseboard GPIO expander LEDs");
  goto io_exp_setup_leds_fail;
 }

 return 0;

io_exp_setup_leds_fail:
 FUNC_3(&VAR_0);
io_exp_setup_sw_fail:
 return VAR_7;
}
