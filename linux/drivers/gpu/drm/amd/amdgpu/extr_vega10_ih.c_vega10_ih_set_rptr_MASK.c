
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ih_ring {int rptr; int doorbell_index; int * rptr_cpu; scalar_t__ use_doorbell; } ;
struct TYPE_2__ {struct amdgpu_ih_ring ih2; struct amdgpu_ih_ring ih1; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ih_ring*) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_4,
          struct amdgpu_ih_ring *VAR_5)
{
 if (VAR_5->use_doorbell) {

  *VAR_5->rptr_cpu = VAR_5->rptr;
  FUNC_0(VAR_5->doorbell_index, VAR_5->rptr);

  if (FUNC_2(VAR_4))
   FUNC_3(VAR_4, VAR_5);
 } else if (VAR_5 == &VAR_4->irq.ih) {
  FUNC_1(VAR_0, 0, VAR_1, VAR_5->rptr);
 } else if (VAR_5 == &VAR_4->irq.ih1) {
  FUNC_1(VAR_0, 0, VAR_2, VAR_5->rptr);
 } else if (VAR_5 == &VAR_4->irq.ih2) {
  FUNC_1(VAR_0, 0, VAR_3, VAR_5->rptr);
 }
}
