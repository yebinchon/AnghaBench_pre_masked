
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ih_ring {int rptr; int doorbell_index; int * rptr_cpu; scalar_t__ use_doorbell; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2,
          struct amdgpu_ih_ring *VAR_3)
{
 if (VAR_3->use_doorbell) {

  *VAR_3->rptr_cpu = VAR_3->rptr;
  FUNC_0(VAR_3->doorbell_index, VAR_3->rptr);
 } else
  FUNC_1(VAR_0, 0, VAR_1, VAR_3->rptr);
}
