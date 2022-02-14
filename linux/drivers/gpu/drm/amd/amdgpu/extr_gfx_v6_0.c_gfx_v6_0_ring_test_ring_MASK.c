
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 uint32_t VAR_5;
 uint32_t VAR_6 = 0;
 unsigned VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_5, 0xCAFEDEAD);

 VAR_8 = FUNC_5(VAR_3, 3);
 if (VAR_8)
  goto error_free_scratch;

 FUNC_7(VAR_3, FUNC_0(VAR_1, 1));
 FUNC_7(VAR_3, (VAR_5 - VAR_2));
 FUNC_7(VAR_3, 0xDEADBEEF);
 FUNC_6(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_4->usec_timeout; VAR_7++) {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 == 0xDEADBEEF)
   break;
  FUNC_8(1);
 }

 if (VAR_7 >= VAR_4->usec_timeout)
  VAR_8 = -VAR_0;

error_free_scratch:
 FUNC_3(VAR_4, VAR_5);
 return VAR_8;
}
