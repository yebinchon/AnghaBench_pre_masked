
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_uvd_cs_ctx {size_t ib_idx; scalar_t__ idx; int count; int reg; scalar_t__ data0; scalar_t__ data1; TYPE_2__* parser; } ;
struct amdgpu_ib {scalar_t__ length_dw; } ;
struct TYPE_4__ {TYPE_1__* job; } ;
struct TYPE_3__ {struct amdgpu_ib* ibs; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;






__attribute__((used)) static int FUNC_1(struct amdgpu_uvd_cs_ctx *VAR_1,
        int (*VAR_2)(struct amdgpu_uvd_cs_ctx *VAR_3))
{
 struct amdgpu_ib *VAR_4 = &VAR_1->parser->job->ibs[VAR_1->ib_idx];
 int VAR_5, VAR_6;

 VAR_1->idx++;
 for (VAR_5 = 0; VAR_5 <= VAR_1->count; ++VAR_5) {
  unsigned VAR_7 = VAR_1->reg + VAR_5;

  if (VAR_1->idx >= VAR_4->length_dw) {
   FUNC_0("Register command after end of CS!\n");
   return -VAR_0;
  }

  switch (VAR_7) {
  case 130:
   VAR_1->data0 = VAR_1->idx;
   break;
  case 129:
   VAR_1->data1 = VAR_1->idx;
   break;
  case 131:
   VAR_6 = VAR_2(VAR_1);
   if (VAR_6)
    return VAR_6;
   break;
  case 132:
  case 128:
   break;
  default:
   FUNC_0("Invalid reg 0x%X!\n", VAR_7);
   return -VAR_0;
  }
  VAR_1->idx++;
 }
 return 0;
}
