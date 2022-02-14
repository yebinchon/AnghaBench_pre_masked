
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct psp_context {int fw_pri_mc_addr; int sos_bin_size; int sos_start_addr; int fw_pri_buf; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7 = 0;
 struct amdgpu_device *VAR_8 = VAR_5->adev;
 uint32_t VAR_9;




 VAR_9 = FUNC_0(VAR_0, 0, VAR_4);
 if (VAR_9)
  return 0;


 VAR_6 = FUNC_6(VAR_5, FUNC_1(VAR_0, 0, VAR_2),
      0x80000000, 0x80000000, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_5(VAR_5->fw_pri_buf, 0, VAR_1);


 FUNC_4(VAR_5->fw_pri_buf, VAR_5->sos_start_addr, VAR_5->sos_bin_size);


 FUNC_2(VAR_0, 0, VAR_3,
        (uint32_t)(VAR_5->fw_pri_mc_addr >> 20));
 VAR_7 = 2 << 16;
 FUNC_2(VAR_0, 0, VAR_2,
        VAR_7);


 FUNC_3(20);
 VAR_6 = FUNC_6(VAR_5, FUNC_1(VAR_0, 0, VAR_4),
      FUNC_0(VAR_0, 0, VAR_4),
      0, 1);

 return VAR_6;
}
