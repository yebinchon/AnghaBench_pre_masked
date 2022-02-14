
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int me; struct amdgpu_device* adev; } ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int VAR_2 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 uint32_t VAR_5 = 0;
 unsigned VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, VAR_3->me, VAR_2, 0xCAFEDEAD);
 VAR_7 = FUNC_4(VAR_3, 3);
 if (VAR_7)
  return VAR_7;

 FUNC_6(VAR_3,
  FUNC_0(FUNC_2(VAR_1, VAR_3->me, VAR_2), 0));
 FUNC_6(VAR_3, 0xDEADBEEF);
 FUNC_5(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_4->usec_timeout; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1, VAR_3->me, VAR_2);
  if (VAR_5 == 0xDEADBEEF)
   break;
  FUNC_7(1);
 }

 if (VAR_6 >= VAR_4->usec_timeout)
  VAR_7 = -VAR_0;

 return VAR_7;
}
