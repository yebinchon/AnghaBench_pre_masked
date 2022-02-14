
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_3__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_2__ psp; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->firmware.load_type != VAR_0)
  return 0;

 FUNC_0(&VAR_1->psp.mutex);
 VAR_2 = FUNC_2(&VAR_1->psp);
 FUNC_1(&VAR_1->psp.mutex);

 return VAR_2;
}
