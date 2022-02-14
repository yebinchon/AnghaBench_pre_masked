
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8 = 0;

 if (VAR_5)
  FUNC_2(VAR_6,
        VAR_7 & VAR_1 ? 1 : 0);

 FUNC_3(VAR_6, 1);

 VAR_8 |= 0x80000000;
 if (VAR_7 & VAR_0) {

  VAR_8 |= 0x8001;

  VAR_8 |= 0x01000000;

  VAR_8 |= 0x10002;


  if (VAR_2 & VAR_7)
   VAR_8 |= 0x10000000;
 } else {



  if (VAR_3 & VAR_7)
   VAR_8 |= 0x10000000;
 }

 FUNC_1(VAR_6, FUNC_0(VAR_4, 1));
 FUNC_1(VAR_6, VAR_8);
 FUNC_1(VAR_6, 0);
}
