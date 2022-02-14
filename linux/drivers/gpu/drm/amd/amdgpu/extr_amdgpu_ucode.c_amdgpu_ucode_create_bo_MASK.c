
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ load_type; int fw_size; int fw_buf_ptr; int fw_buf; int fw_buf_mc; } ;
struct amdgpu_device {TYPE_1__ firmware; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(struct amdgpu_device *VAR_5)
{
 if (VAR_5->firmware.load_type != VAR_0) {
  FUNC_0(VAR_5, VAR_5->firmware.fw_size, VAR_4,
   FUNC_1(VAR_5) ? VAR_2 : VAR_1,
   &VAR_5->firmware.fw_buf,
   &VAR_5->firmware.fw_buf_mc,
   &VAR_5->firmware.fw_buf_ptr);
  if (!VAR_5->firmware.fw_buf) {
   FUNC_2(VAR_5->dev, "failed to create kernel buffer for firmware.fw_buf\n");
   return -VAR_3;
  } else if (FUNC_1(VAR_5)) {
   FUNC_3(VAR_5->firmware.fw_buf_ptr, 0, VAR_5->firmware.fw_size);
  }
 }
 return 0;
}
