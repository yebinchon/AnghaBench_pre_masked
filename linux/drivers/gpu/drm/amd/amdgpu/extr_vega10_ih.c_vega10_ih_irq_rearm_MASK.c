
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct amdgpu_ih_ring {scalar_t__ ring_size; scalar_t__ rptr; int doorbell_index; } ;
struct TYPE_2__ {struct amdgpu_ih_ring ih2; struct amdgpu_ih_ring ih1; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5,
          struct amdgpu_ih_ring *VAR_6)
{
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;

 if (VAR_6 == &VAR_5->irq.ih)
  VAR_7 = FUNC_1(VAR_1, 0, VAR_2);
 else if (VAR_6 == &VAR_5->irq.ih1)
  VAR_7 = FUNC_1(VAR_1, 0, VAR_3);
 else if (VAR_6 == &VAR_5->irq.ih2)
  VAR_7 = FUNC_1(VAR_1, 0, VAR_4);
 else
  return;


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_0(VAR_7);
  if ((VAR_8 < VAR_6->ring_size) && (VAR_8 != VAR_6->rptr))
   FUNC_2(VAR_6->doorbell_index, VAR_6->rptr);
  else
   break;
 }
}
