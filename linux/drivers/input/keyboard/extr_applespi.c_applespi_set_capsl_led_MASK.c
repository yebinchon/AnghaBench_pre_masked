
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applespi_data {int want_cl_led_on; int cmd_msg_lock; } ;


 int FUNC_0 (struct applespi_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct applespi_data *VAR_0,
      bool VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->cmd_msg_lock, VAR_2);

 VAR_0->want_cl_led_on = VAR_1;
 VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->cmd_msg_lock, VAR_2);

 return VAR_3;
}
