
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int VAR_2 ;

void FUNC_2(struct amdgpu_ring *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6 = (VAR_4 << 2);

 FUNC_1(VAR_3, FUNC_0(VAR_2,
  0, 0, VAR_1));
 if (VAR_6 >= 0x10000 && VAR_6 <= 0x105ff) {
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_3,
   FUNC_0((VAR_6 >> 2), 0, 0, VAR_1));
 } else {
  FUNC_1(VAR_3, VAR_6);
  FUNC_1(VAR_3, FUNC_0(VAR_0,
   0, 0, VAR_1));
 }
 FUNC_1(VAR_3, VAR_5);
}
