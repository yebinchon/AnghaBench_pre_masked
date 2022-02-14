
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_ring {int me; } ;
struct amdgpu_ib {unsigned int length_dw; } ;
struct amdgpu_cs_parser {TYPE_4__* adev; TYPE_3__* job; TYPE_2__* entity; } ;
struct TYPE_8__ {scalar_t__*** reg_offset; } ;
struct TYPE_7__ {struct amdgpu_ib* ibs; } ;
struct TYPE_6__ {TYPE_1__* rq; } ;
struct TYPE_5__ {int sched; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct amdgpu_cs_parser*,size_t,unsigned int) ;
 int FUNC_1 (struct amdgpu_cs_parser*,size_t,unsigned int,size_t) ;
 struct amdgpu_ring* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_cs_parser *VAR_1,
        uint32_t VAR_2)
{
 struct amdgpu_ring *VAR_3 = FUNC_2(VAR_1->entity->rq->sched);
 struct amdgpu_ib *VAR_4 = &VAR_1->job->ibs[VAR_2];
 unsigned VAR_5;


 if (!VAR_3->me)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->length_dw; VAR_5 += 2) {
  uint32_t VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5);

  VAR_6 -= VAR_1->adev->reg_offset[VAR_0][0][1];
  VAR_6 += VAR_1->adev->reg_offset[VAR_0][1][1];

  FUNC_1(VAR_1, VAR_2, VAR_5, VAR_6);
 }
 return 0;
}
