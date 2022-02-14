
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {int dummy; } ;
struct amdgpu_ib {int length_dw; int * ptr; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_ring *VAR_1, struct amdgpu_ib *VAR_2)
{
 while (VAR_2->length_dw & 0x7)
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_0(VAR_0, 0, 0, 0, 0);
}
