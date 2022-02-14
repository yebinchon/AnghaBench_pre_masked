
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ih_ring {int rptr; int doorbell_index; int * rptr_cpu; scalar_t__ use_doorbell; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1,
         struct amdgpu_ih_ring *VAR_2)
{
 if (VAR_2->use_doorbell) {

  *VAR_2->rptr_cpu = VAR_2->rptr;
  FUNC_0(VAR_2->doorbell_index, VAR_2->rptr);
 } else {
  FUNC_1(VAR_0, VAR_2->rptr);
 }
}
