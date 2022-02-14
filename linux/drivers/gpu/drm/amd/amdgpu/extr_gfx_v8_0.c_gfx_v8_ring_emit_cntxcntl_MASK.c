
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_ring*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6 = 0;

 if (FUNC_2(VAR_4->adev))
  FUNC_3(VAR_4);

 VAR_6 |= 0x80000000;
 if (VAR_5 & VAR_0) {
  FUNC_4(VAR_4);

  VAR_6 |= 0x8001;

  VAR_6 |= 0x01000000;

  VAR_6 |= 0x10002;


  if (VAR_1 & VAR_5)
   VAR_6 |= 0x10000000;
 } else {



  if (VAR_2 & VAR_5)
   VAR_6 |= 0x10000000;
 }

 FUNC_1(VAR_4, FUNC_0(VAR_3, 1));
 FUNC_1(VAR_4, VAR_6);
 FUNC_1(VAR_4, 0);
}
