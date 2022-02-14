
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int VAR_1 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 uint32_t VAR_4 = 0;
 unsigned VAR_5;
 int VAR_6;

 FUNC_2(VAR_1, 0xCAFEDEAD);
 VAR_6 = FUNC_3(VAR_2, 3);
 if (VAR_6)
  return VAR_6;
 FUNC_5(VAR_2, FUNC_0(VAR_1, 0));
 FUNC_5(VAR_2, 0xDEADBEEF);
 FUNC_4(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 == 0xDEADBEEF)
   break;
  FUNC_6(1);
 }

 if (VAR_5 >= VAR_3->usec_timeout)
  VAR_6 = -VAR_0;

 return VAR_6;
}
