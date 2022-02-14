
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_device {int close_wq; int use_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct i40iw_device *VAR_0)
{
 if (!FUNC_0(&VAR_0->use_count))
  return;
 FUNC_1(&VAR_0->close_wq);
}
