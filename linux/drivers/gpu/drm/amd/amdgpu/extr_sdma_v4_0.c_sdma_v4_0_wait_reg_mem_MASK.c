
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_ring *VAR_1,
       int VAR_2, int VAR_3,
       uint32_t VAR_4, uint32_t VAR_5,
       uint32_t VAR_6, uint32_t VAR_7,
       uint32_t VAR_8)
{
 FUNC_6(VAR_1, FUNC_0(VAR_0) |
     FUNC_4(VAR_3) |
     FUNC_5(VAR_2) |
     FUNC_3(3));
 if (VAR_2) {

  FUNC_6(VAR_1, VAR_4);
  FUNC_6(VAR_1, VAR_5);
 } else {

  FUNC_6(VAR_1, VAR_4 << 2);
  FUNC_6(VAR_1, VAR_5 << 2);
 }
 FUNC_6(VAR_1, VAR_6);
 FUNC_6(VAR_1, VAR_7);
 FUNC_6(VAR_1, FUNC_2(0xfff) |
     FUNC_1(VAR_8));
}
