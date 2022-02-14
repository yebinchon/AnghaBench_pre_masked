
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; scalar_t__ gpu_addr; } ;
struct amdgpu_device {unsigned int usec_timeout; TYPE_1__ wb; } ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,unsigned int) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int*) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 unsigned VAR_4;
 unsigned VAR_5;
 int VAR_6;
 u32 VAR_7;
 u64 VAR_8;

 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_8 = VAR_3->wb.gpu_addr + (VAR_5 * 4);
 VAR_7 = 0xCAFEDEAD;
 VAR_3->wb.wb[VAR_5] = FUNC_6(VAR_7);

 VAR_6 = FUNC_3(VAR_2, 4);
 if (VAR_6)
  goto error_free_wb;

 FUNC_5(VAR_2, FUNC_0(VAR_0, 0, 0, 0, 1));
 FUNC_5(VAR_2, FUNC_8(VAR_8));
 FUNC_5(VAR_2, FUNC_10(VAR_8) & 0xff);
 FUNC_5(VAR_2, 0xDEADBEEF);
 FUNC_4(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->usec_timeout; VAR_4++) {
  VAR_7 = FUNC_7(VAR_3->wb.wb[VAR_5]);
  if (VAR_7 == 0xDEADBEEF)
   break;
  FUNC_9(1);
 }

 if (VAR_4 >= VAR_3->usec_timeout)
  VAR_6 = -VAR_1;

error_free_wb:
 FUNC_1(VAR_3, VAR_5);
 return VAR_6;
}
