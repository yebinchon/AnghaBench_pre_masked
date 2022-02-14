
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_ih_ring {int doorbell_index; scalar_t__ use_doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static uint32_t FUNC_1(struct amdgpu_ih_ring *VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3->use_doorbell) {
  VAR_4 = FUNC_0(VAR_4,
       VAR_1, VAR_2,
       VAR_3->doorbell_index);
  VAR_4 = FUNC_0(VAR_4,
       VAR_1,
       VAR_0, 1);
 } else {
  VAR_4 = FUNC_0(VAR_4,
       VAR_1,
       VAR_0, 0);
 }
 return VAR_4;
}
