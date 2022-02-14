
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct amdgpu_uvd_cs_ctx {scalar_t__* buf_sizes; int has_msg_cmd; TYPE_4__* parser; int idx; int ib_idx; int data1; int data0; } ;
struct amdgpu_bo_va_mapping {scalar_t__ last; scalar_t__ start; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_10__ {TYPE_3__* adev; } ;
struct TYPE_8__ {TYPE_1__* inst; int address_64_bit; } ;
struct TYPE_9__ {TYPE_2__ uvd; } ;
struct TYPE_7__ {int gpu_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,struct amdgpu_bo**,struct amdgpu_bo_va_mapping**) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_5 (struct amdgpu_uvd_cs_ctx*,struct amdgpu_bo*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct amdgpu_uvd_cs_ctx*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_uvd_cs_ctx *VAR_2)
{
 struct amdgpu_bo_va_mapping *VAR_3;
 struct amdgpu_bo *VAR_4;
 uint32_t VAR_5;
 uint64_t VAR_6, VAR_7;
 uint64_t VAR_8 = FUNC_6(VAR_2);
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2->parser, VAR_8, &VAR_4, &VAR_3);
 if (VAR_9) {
  FUNC_0("Can't find BO for addr 0x%08Lx\n", VAR_8);
  return VAR_9;
 }

 VAR_6 = FUNC_1(VAR_4);

 VAR_7 = (VAR_3->last + 1 - VAR_3->start);
 VAR_7 = VAR_7 * VAR_0 + VAR_6;

 VAR_8 -= VAR_3->start * VAR_0;
 VAR_6 += VAR_8;

 FUNC_4(VAR_2->parser, VAR_2->ib_idx, VAR_2->data0,
       FUNC_7(VAR_6));
 FUNC_4(VAR_2->parser, VAR_2->ib_idx, VAR_2->data1,
       FUNC_8(VAR_6));

 VAR_5 = FUNC_3(VAR_2->parser, VAR_2->ib_idx, VAR_2->idx) >> 1;
 if (VAR_5 < 0x4) {
  if ((VAR_7 - VAR_6) < VAR_2->buf_sizes[VAR_5]) {
   FUNC_0("buffer (%d) to small (%d / %d)!\n", VAR_5,
      (unsigned)(VAR_7 - VAR_6),
      VAR_2->buf_sizes[VAR_5]);
   return -VAR_1;
  }

 } else if (VAR_5 == 0x206) {
  if ((VAR_7 - VAR_6) < VAR_2->buf_sizes[4]) {
   FUNC_0("buffer (%d) to small (%d / %d)!\n", VAR_5,
       (unsigned)(VAR_7 - VAR_6),
       VAR_2->buf_sizes[4]);
   return -VAR_1;
  }
 } else if ((VAR_5 != 0x100) && (VAR_5 != 0x204)) {
  FUNC_0("invalid UVD command %X!\n", VAR_5);
  return -VAR_1;
 }

 if (!VAR_2->parser->adev->uvd.address_64_bit) {
  if ((VAR_6 >> 28) != ((VAR_7 - 1) >> 28)) {
   FUNC_0("reloc %LX-%LX crossing 256MB boundary!\n",
      VAR_6, VAR_7);
   return -VAR_1;
  }

  if ((VAR_5 == 0 || VAR_5 == 0x3) &&
      (VAR_6 >> 28) != (VAR_2->parser->adev->uvd.inst->gpu_addr >> 28)) {
   FUNC_0("msg/fb buffer %LX-%LX out of 256MB segment!\n",
      VAR_6, VAR_7);
   return -VAR_1;
  }
 }

 if (VAR_5 == 0) {
  VAR_2->has_msg_cmd = 1;
  VAR_9 = FUNC_5(VAR_2, VAR_4, VAR_8);
  if (VAR_9)
   return VAR_9;
 } else if (!VAR_2->has_msg_cmd) {
  FUNC_0("Message needed before other commands are send!\n");
  return -VAR_1;
 }

 return 0;
}
