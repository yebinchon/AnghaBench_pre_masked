
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mes_firmware_header_v1_0 {int mes_ucode_data_size_bytes; int mes_ucode_data_offset_bytes; } ;
struct TYPE_4__ {int data_fw_obj; int data_fw_ptr; int data_fw_gpu_addr; TYPE_1__* fw; } ;
struct amdgpu_device {TYPE_2__ mes; int dev; } ;
typedef int __le32 ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,unsigned int,int,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_1)
{
 int VAR_2;
 const struct mes_firmware_header_v1_0 *VAR_3;
 const __le32 *VAR_4;
 unsigned VAR_5;

 VAR_3 = (const struct mes_firmware_header_v1_0 *)
  VAR_1->mes.fw->data;

 VAR_4 = (const __le32 *)(VAR_1->mes.fw->data +
     FUNC_4(VAR_3->mes_ucode_data_offset_bytes));
 VAR_5 = FUNC_4(VAR_3->mes_ucode_data_size_bytes);

 VAR_2 = FUNC_0(VAR_1, VAR_5,
          64 * 1024, VAR_0,
          &VAR_1->mes.data_fw_obj,
          &VAR_1->mes.data_fw_gpu_addr,
          (void **)&VAR_1->mes.data_fw_ptr);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "(%d) failed to create mes data fw bo\n", VAR_2);
  return VAR_2;
 }

 FUNC_5(VAR_1->mes.data_fw_ptr, VAR_4, VAR_5);

 FUNC_1(VAR_1->mes.data_fw_obj);
 FUNC_2(VAR_1->mes.data_fw_obj);

 return 0;
}
