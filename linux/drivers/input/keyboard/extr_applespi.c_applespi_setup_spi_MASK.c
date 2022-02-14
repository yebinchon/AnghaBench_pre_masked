
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applespi_data {int drain_complete; int cmd_msg_lock; } ;


 int FUNC_0 (struct applespi_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct applespi_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_2(&VAR_0->cmd_msg_lock);
 FUNC_1(&VAR_0->drain_complete);

 return 0;
}
