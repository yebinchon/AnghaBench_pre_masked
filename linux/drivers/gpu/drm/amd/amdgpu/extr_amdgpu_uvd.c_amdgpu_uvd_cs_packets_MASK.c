
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_uvd_cs_ctx {size_t ib_idx; scalar_t__ idx; int count; int reg; TYPE_2__* parser; } ;
struct amdgpu_ib {scalar_t__ length_dw; } ;
struct TYPE_4__ {TYPE_1__* job; } ;
struct TYPE_3__ {struct amdgpu_ib* ibs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int) ;
 int VAR_0 ;


 int FUNC_4 (TYPE_2__*,size_t,scalar_t__) ;
 int FUNC_5 (struct amdgpu_uvd_cs_ctx*,int (*) (struct amdgpu_uvd_cs_ctx*)) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_uvd_cs_ctx *VAR_1,
     int (*VAR_2)(struct amdgpu_uvd_cs_ctx *VAR_3))
{
 struct amdgpu_ib *VAR_4 = &VAR_1->parser->job->ibs[VAR_1->ib_idx];
 int VAR_5;

 for (VAR_1->idx = 0 ; VAR_1->idx < VAR_4->length_dw; ) {
  uint32_t VAR_6 = FUNC_4(VAR_1->parser, VAR_1->ib_idx, VAR_1->idx);
  unsigned VAR_7 = FUNC_2(VAR_6);
  switch (VAR_7) {
  case 129:
   VAR_1->reg = FUNC_0(VAR_6);
   VAR_1->count = FUNC_1(VAR_6);
   VAR_5 = FUNC_5(VAR_1, VAR_2);
   if (VAR_5)
    return VAR_5;
   break;
  case 128:
   ++VAR_1->idx;
   break;
  default:
   FUNC_3("Unknown packet type %d !\n", VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}
