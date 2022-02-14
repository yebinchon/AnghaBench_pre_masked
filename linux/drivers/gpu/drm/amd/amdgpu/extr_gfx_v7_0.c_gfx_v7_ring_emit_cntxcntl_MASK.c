
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (struct amdgpu_ring*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;

 VAR_4 |= 0x80000000;
 if (VAR_3 & VAR_0) {
  FUNC_2(VAR_2);

  VAR_4 |= 0x8001;

  VAR_4 |= 0x01000000;

  VAR_4 |= 0x10002;
 }

 FUNC_1(VAR_2, FUNC_0(VAR_1, 1));
 FUNC_1(VAR_2, VAR_4);
 FUNC_1(VAR_2, 0);
}
