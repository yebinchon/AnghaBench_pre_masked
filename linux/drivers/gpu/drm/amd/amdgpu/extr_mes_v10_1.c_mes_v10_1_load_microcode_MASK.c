
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int data_fw_gpu_addr; int ucode_fw_gpu_addr; scalar_t__ uc_start_addr; int fw; } ;
struct amdgpu_device {int srbm_mutex; TYPE_1__ mes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct amdgpu_device*,int,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_14)
{
 int VAR_15;
 uint32_t VAR_16;

 if (!VAR_14->mes.fw)
  return -VAR_1;

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_5(VAR_14);
 if (VAR_15) {
  FUNC_7(VAR_14);
  return VAR_15;
 }

 FUNC_6(VAR_14, 0);

 FUNC_2(VAR_2, 0, VAR_5, 0);

 FUNC_8(&VAR_14->srbm_mutex);

 FUNC_10(VAR_14, 3, 0, 0, 0);


 FUNC_2(VAR_2, 0, VAR_13,
       (uint32_t)(VAR_14->mes.uc_start_addr) >> 2);


 FUNC_2(VAR_2, 0, VAR_7,
       FUNC_3(VAR_14->mes.ucode_fw_gpu_addr));
 FUNC_2(VAR_2, 0, VAR_6,
       FUNC_11(VAR_14->mes.ucode_fw_gpu_addr));


 FUNC_2(VAR_2, 0, VAR_12, 0x1FFFFF);


 FUNC_2(VAR_2, 0, VAR_10,
       FUNC_3(VAR_14->mes.data_fw_gpu_addr));
 FUNC_2(VAR_2, 0, VAR_9,
       FUNC_11(VAR_14->mes.data_fw_gpu_addr));


 FUNC_2(VAR_2, 0, VAR_11, 0x3FFFF);


 VAR_16 = FUNC_1(VAR_2, 0, VAR_8);
 VAR_16 = FUNC_0(VAR_16, VAR_0, VAR_4, 0);
 VAR_16 = FUNC_0(VAR_16, VAR_0, VAR_3, 1);
 FUNC_2(VAR_2, 0, VAR_8, VAR_16);


 VAR_16 = FUNC_1(VAR_2, 0, VAR_8);
 VAR_16 = FUNC_0(VAR_16, VAR_0, VAR_4, 1);
 FUNC_2(VAR_2, 0, VAR_8, VAR_16);

 FUNC_10(VAR_14, 0, 0, 0, 0);
 FUNC_9(&VAR_14->srbm_mutex);

 return 0;
}
