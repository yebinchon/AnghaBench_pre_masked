
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct gfx_firmware_header_v1_0 {int jt_size; int jt_offset; } ;
struct common_firmware_header {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct amdgpu_firmware_info {TYPE_1__* fw; int * kaddr; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_firmware_info *VAR_1,
    uint64_t VAR_2, void *VAR_3)
{
 const struct gfx_firmware_header_v1_0 *VAR_4 = ((void*)0);
 const struct common_firmware_header *VAR_5 = ((void*)0);
 uint8_t* VAR_6 = ((void*)0);
 uint8_t* VAR_7 = ((void*)0);

 if (((void*)0) == VAR_1->fw)
  return 0;

 VAR_5 = (const struct common_firmware_header *)VAR_1->fw->data;
 VAR_4 = (const struct gfx_firmware_header_v1_0 *)VAR_1->fw->data;
 VAR_7 = VAR_1->kaddr +
      FUNC_0(FUNC_1(VAR_5->ucode_size_bytes),
      VAR_0);
 VAR_6 = (uint8_t *)VAR_1->fw->data +
      FUNC_1(VAR_5->ucode_array_offset_bytes) +
      (FUNC_1(VAR_4->jt_offset) * 4);
 FUNC_2(VAR_7, VAR_6, FUNC_1(VAR_4->jt_size) * 4);

 return 0;
}
