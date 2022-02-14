
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {int wptr; struct amdgpu_device* adev; } ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;

 if (VAR_5->pg_flags & VAR_0)
  FUNC_0(VAR_1, 0, VAR_3,
   FUNC_1(VAR_4->wptr) | 0x80000000);

 FUNC_0(VAR_1, 0, VAR_2, FUNC_1(VAR_4->wptr));
}
