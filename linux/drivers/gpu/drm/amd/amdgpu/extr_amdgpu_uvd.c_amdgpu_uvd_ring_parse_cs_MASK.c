
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_uvd_cs_ctx {unsigned int* buf_sizes; size_t ib_idx; int has_msg_cmd; struct amdgpu_cs_parser* parser; } ;
struct amdgpu_ib {int length_dw; int sa_bo; int gpu_addr; } ;
struct amdgpu_cs_parser {TYPE_3__* adev; TYPE_1__* job; } ;
struct TYPE_5__ {int address_64_bit; } ;
struct TYPE_6__ {TYPE_2__ uvd; } ;
struct TYPE_4__ {int * vm; struct amdgpu_ib* ibs; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_uvd_cs_ctx*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct amdgpu_cs_parser *VAR_3, uint32_t VAR_4)
{
 struct amdgpu_uvd_cs_ctx VAR_5 = {};
 unsigned VAR_6[] = {
  [0x00000000] = 2048,
  [0x00000001] = 0xFFFFFFFF,
  [0x00000002] = 0xFFFFFFFF,
  [0x00000003] = 2048,
  [0x00000004] = 0xFFFFFFFF,
 };
 struct amdgpu_ib *VAR_7 = &VAR_3->job->ibs[VAR_4];
 int VAR_8;

 VAR_3->job->vm = ((void*)0);
 VAR_7->gpu_addr = FUNC_1(VAR_7->sa_bo);

 if (VAR_7->length_dw % 16) {
  FUNC_0("UVD IB length (%d) not 16 dwords aligned!\n",
     VAR_7->length_dw);
  return -VAR_0;
 }

 VAR_5.parser = VAR_3;
 VAR_5.buf_sizes = VAR_6;
 VAR_5.ib_idx = VAR_4;


 if (!VAR_3->adev->uvd.address_64_bit) {

  VAR_8 = FUNC_2(&VAR_5, VAR_1);
  if (VAR_8)
   return VAR_8;
 }


 VAR_8 = FUNC_2(&VAR_5, VAR_2);
 if (VAR_8)
  return VAR_8;

 if (!VAR_5.has_msg_cmd) {
  FUNC_0("UVD-IBs need a msg command!\n");
  return -VAR_0;
 }

 return 0;
}
