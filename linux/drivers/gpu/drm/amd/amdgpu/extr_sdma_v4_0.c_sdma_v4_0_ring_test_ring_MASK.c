
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct amdgpu_device*,unsigned int) ;
 int FUNC_4 (struct amdgpu_device*,unsigned int*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 unsigned VAR_5;
 unsigned VAR_6;
 int VAR_7;
 u32 VAR_8;
 u64 VAR_9;

 VAR_7 = FUNC_4(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_9 = VAR_4->wb.gpu_addr + (VAR_6 * 4);
 VAR_8 = 0xCAFEDEAD;
 VAR_4->wb.wb[VAR_6] = FUNC_8(VAR_8);

 VAR_7 = FUNC_5(VAR_3, 5);
 if (VAR_7)
  goto error_free_wb;

 FUNC_7(VAR_3, FUNC_0(VAR_1) |
     FUNC_1(VAR_2));
 FUNC_7(VAR_3, FUNC_10(VAR_9));
 FUNC_7(VAR_3, FUNC_12(VAR_9));
 FUNC_7(VAR_3, FUNC_2(0));
 FUNC_7(VAR_3, 0xDEADBEEF);
 FUNC_6(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->usec_timeout; VAR_5++) {
  VAR_8 = FUNC_9(VAR_4->wb.wb[VAR_6]);
  if (VAR_8 == 0xDEADBEEF)
   break;
  FUNC_11(1);
 }

 if (VAR_5 >= VAR_4->usec_timeout)
  VAR_7 = -VAR_0;

error_free_wb:
 FUNC_3(VAR_4, VAR_6);
 return VAR_7;
}
