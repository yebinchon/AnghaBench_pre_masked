
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_ctl_info {int work; int op_state; int edac_check; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct edac_device_ctl_info *VAR_1)
{
 if (!VAR_1->edac_check)
  return;

 VAR_1->op_state = VAR_0;

 FUNC_0(&VAR_1->work);
}
