
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(struct amdgpu_ring *VAR_6, uint32_t VAR_7,
    uint32_t VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10 = (VAR_7 << 2);

 FUNC_1(VAR_6, FUNC_0(VAR_4,
  0, 0, VAR_1));
 FUNC_1(VAR_6, 0x01400200);

 FUNC_1(VAR_6, FUNC_0(VAR_5,
  0, 0, VAR_1));
 FUNC_1(VAR_6, VAR_8);

 FUNC_1(VAR_6, FUNC_0(VAR_3,
  0, 0, VAR_1));
 if (VAR_10 >= 0x10000 && VAR_10 <= 0x105ff) {
  FUNC_1(VAR_6, 0);
  FUNC_1(VAR_6,
   FUNC_0((VAR_10 >> 2), 0, 0, VAR_2));
 } else {
  FUNC_1(VAR_6, VAR_10);
  FUNC_1(VAR_6, FUNC_0(VAR_0,
   0, 0, VAR_2));
 }
 FUNC_1(VAR_6, VAR_9);
}
