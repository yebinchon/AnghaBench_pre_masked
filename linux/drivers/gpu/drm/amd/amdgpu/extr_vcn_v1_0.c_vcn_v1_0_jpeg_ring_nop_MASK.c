
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int wptr; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpu_ring*,int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1->wptr % 2 || VAR_2 % 2);

 for (VAR_3 = 0; VAR_3 < VAR_2 / 2; VAR_3++) {
  FUNC_2(VAR_1, FUNC_0(0, 0, 0, VAR_0));
  FUNC_2(VAR_1, 0);
 }
}
