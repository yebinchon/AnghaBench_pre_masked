
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ load_type; int fw_buf_ptr; int fw_buf_mc; int fw_buf; } ;
struct amdgpu_device {TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;

void FUNC_1(struct amdgpu_device *VAR_1)
{
 if (VAR_1->firmware.load_type != VAR_0)
  FUNC_0(&VAR_1->firmware.fw_buf,
  &VAR_1->firmware.fw_buf_mc,
  &VAR_1->firmware.fw_buf_ptr);
}
