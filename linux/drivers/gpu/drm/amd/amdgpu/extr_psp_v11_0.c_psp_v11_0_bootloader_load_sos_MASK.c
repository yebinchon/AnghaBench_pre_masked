
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct psp_context {int fw_pri_mc_addr; int sos_bin_size; int sos_start_addr; int fw_pri_buf; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8 = 0;
 struct amdgpu_device *VAR_9 = VAR_6->adev;
 uint32_t VAR_10;




 VAR_10 = FUNC_0(VAR_0, 0, VAR_5);
 if (VAR_10)
  return 0;


 VAR_7 = FUNC_6(VAR_6, FUNC_1(VAR_0, 0, VAR_3),
      0x80000000, 0x80000000, 0);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_6->fw_pri_buf, 0, VAR_1);


 FUNC_4(VAR_6->fw_pri_buf, VAR_6->sos_start_addr, VAR_6->sos_bin_size);


 FUNC_2(VAR_0, 0, VAR_4,
        (uint32_t)(VAR_6->fw_pri_mc_addr >> 20));
 VAR_8 = VAR_2;
 FUNC_2(VAR_0, 0, VAR_3,
        VAR_8);


 FUNC_3(20);
 VAR_7 = FUNC_6(VAR_6, FUNC_1(VAR_0, 0, VAR_5),
      FUNC_0(VAR_0, 0, VAR_5),
      0, 1);

 return VAR_7;
}
