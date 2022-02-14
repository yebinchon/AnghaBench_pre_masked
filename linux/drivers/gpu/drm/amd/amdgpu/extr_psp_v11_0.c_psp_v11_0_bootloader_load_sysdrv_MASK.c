
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct psp_context {int fw_pri_mc_addr; int sys_bin_size; int sys_start_addr; int fw_pri_buf; void* sos_fw_version; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ,char*,void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct psp_context *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9 = 0;
 struct amdgpu_device *VAR_10 = VAR_7->adev;
 uint32_t VAR_11;




 VAR_11 = FUNC_0(VAR_0, 0, VAR_6);
 if (VAR_11) {
  VAR_7->sos_fw_version = FUNC_0(VAR_0, 0, VAR_5);
  FUNC_3(VAR_10->dev, "sos fw version = 0x%x.\n", VAR_7->sos_fw_version);
  return 0;
 }


 VAR_8 = FUNC_7(VAR_7, FUNC_1(VAR_0, 0, VAR_3),
      0x80000000, 0x80000000, 0);
 if (VAR_8)
  return VAR_8;

 FUNC_6(VAR_7->fw_pri_buf, 0, VAR_1);


 FUNC_5(VAR_7->fw_pri_buf, VAR_7->sys_start_addr, VAR_7->sys_bin_size);


 FUNC_2(VAR_0, 0, VAR_4,
        (uint32_t)(VAR_7->fw_pri_mc_addr >> 20));
 VAR_9 = VAR_2;
 FUNC_2(VAR_0, 0, VAR_3,
        VAR_9);


 FUNC_4(20);

 VAR_8 = FUNC_7(VAR_7, FUNC_1(VAR_0, 0, VAR_3),
      0x80000000, 0x80000000, 0);

 return VAR_8;
}
