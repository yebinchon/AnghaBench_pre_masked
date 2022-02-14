
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_ib {unsigned int length_dw; int sa_bo; int gpu_addr; } ;
struct amdgpu_cs_parser {TYPE_3__* adev; TYPE_1__* job; } ;
struct TYPE_5__ {size_t* img_size; int * handles; } ;
struct TYPE_6__ {TYPE_2__ vce; int asic_type; } ;
struct TYPE_4__ {int * vm; struct amdgpu_ib* ibs; } ;


 int VAR_0 ;



 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_cs_parser*,size_t,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_cs_parser*,size_t,unsigned int,unsigned int,size_t,unsigned int) ;
 int FUNC_4 (struct amdgpu_cs_parser*,size_t,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_5 (struct amdgpu_cs_parser*,size_t,size_t*) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct amdgpu_cs_parser *VAR_3, uint32_t VAR_4)
{
 struct amdgpu_ib *VAR_5 = &VAR_3->job->ibs[VAR_4];
 unsigned VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = -1;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12, VAR_13 = 0;
 uint32_t *VAR_14 = &VAR_12;
 unsigned VAR_15;
 int VAR_16, VAR_17 = 0;

 VAR_3->job->vm = ((void*)0);
 VAR_5->gpu_addr = FUNC_2(VAR_5->sa_bo);

 for (VAR_15 = 0; VAR_15 < VAR_5->length_dw;) {
  uint32_t VAR_18 = FUNC_1(VAR_3, VAR_4, VAR_15);
  uint32_t VAR_19 = FUNC_1(VAR_3, VAR_4, VAR_15 + 1);

  if ((VAR_18 < 8) || (VAR_18 & 3)) {
   FUNC_0("invalid VCE command length (%d)!\n", VAR_18);
   VAR_17 = -VAR_1;
   goto out;
  }

  switch (VAR_19) {
  case 0x00000002:
   VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_15 + 6);
   VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_15 + 7);
   break;

  case 0x03000001:
   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 10,
         VAR_15 + 9, 0, 0);
   if (VAR_17)
    goto out;

   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 12,
         VAR_15 + 11, 0, 0);
   if (VAR_17)
    goto out;
   break;

  case 0x05000001:
   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 3,
         VAR_15 + 2, 0, 0);
   if (VAR_17)
    goto out;
   break;

  case 0x05000004:
   VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_15 + 4);
   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 3, VAR_15 + 2,
         VAR_12, VAR_7);
   if (VAR_17)
    goto out;
   break;

  case 0x05000005:
   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 3, VAR_15 + 2,
         4096, VAR_6);
   if (VAR_17)
    goto out;
   break;

  case 0x0500000d:
   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 3,
       VAR_15 + 2, 0, 0);
   if (VAR_17)
    goto out;

   VAR_17 = FUNC_4(VAR_3, VAR_4, VAR_15 + 8,
       VAR_15 + 7, 0, 0);
   if (VAR_17)
    goto out;
   break;
  }

  VAR_15 += VAR_18 / 4;
 }

 for (VAR_15 = 0; VAR_15 < VAR_5->length_dw;) {
  uint32_t VAR_20 = FUNC_1(VAR_3, VAR_4, VAR_15);
  uint32_t VAR_21 = FUNC_1(VAR_3, VAR_4, VAR_15 + 1);

  switch (VAR_21) {
  case 0x00000001:
   VAR_13 = FUNC_1(VAR_3, VAR_4, VAR_15 + 2);
   VAR_8 = FUNC_5(VAR_3, VAR_13,
         &VAR_11);
   if (VAR_8 < 0) {
    VAR_17 = VAR_8;
    goto out;
   }
   VAR_14 = &VAR_3->adev->vce.img_size[VAR_8];
   break;

  case 0x00000002:
   VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_15 + 6);
   VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_15 + 7);
   break;

  case 0x01000001:
   VAR_10 |= 1 << VAR_8;
   if (VAR_9 & (1 << VAR_8)) {
    VAR_9 &= ~(1 << VAR_8);
    VAR_11 |= 1 << VAR_8;

   } else if (!(VAR_11 & (1 << VAR_8))) {
    FUNC_0("Handle already in use!\n");
    VAR_17 = -VAR_1;
    goto out;
   }

   *VAR_14 = FUNC_1(VAR_3, VAR_4, VAR_15 + 8) *
    FUNC_1(VAR_3, VAR_4, VAR_15 + 10) *
    8 * 3 / 2;
   break;

  case 0x04000001:
  case 0x04000002:
  case 0x04000005:
  case 0x04000007:
  case 0x04000008:
  case 0x04000009:
  case 0x05000002:
  case 0x05000009:
   break;

  case 0x0500000c:
   switch (VAR_3->adev->asic_type) {




   case 130:
    break;
   default:
    VAR_17 = -VAR_1;
    goto out;
   }
   break;

  case 0x03000001:
   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 10, VAR_15 + 9,
      *VAR_14, 0);
   if (VAR_17)
    goto out;

   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 12, VAR_15 + 11,
      *VAR_14 / 3, 0);
   if (VAR_17)
    goto out;
   break;

  case 0x02000001:
   VAR_9 |= 1 << VAR_8;
   break;

  case 0x05000001:
   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 3, VAR_15 + 2,
      *VAR_14 * 2, 0);
   if (VAR_17)
    goto out;
   break;

  case 0x05000004:
   VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_15 + 4);
   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 3, VAR_15 + 2,
      VAR_12, VAR_7);
   if (VAR_17)
    goto out;
   break;

  case 0x05000005:
   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 3, VAR_15 + 2,
      4096, VAR_6);
   if (VAR_17)
    goto out;
   break;

  case 0x0500000d:
   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 3,
       VAR_15 + 2, *VAR_14, 0);
   if (VAR_17)
    goto out;

   VAR_17 = FUNC_3(VAR_3, VAR_4, VAR_15 + 8,
       VAR_15 + 7, *VAR_14 / 12, 0);
   if (VAR_17)
    goto out;
   break;

  default:
   FUNC_0("invalid VCE command (0x%x)!\n", VAR_21);
   VAR_17 = -VAR_1;
   goto out;
  }

  if (VAR_8 == -1) {
   FUNC_0("no session command at start of IB\n");
   VAR_17 = -VAR_1;
   goto out;
  }

  VAR_15 += VAR_20 / 4;
 }

 if (VAR_11 & ~VAR_10) {
  FUNC_0("New session without create command!\n");
  VAR_17 = -VAR_2;
 }

out:
 if (!VAR_17) {

  VAR_12 = VAR_9;
 } else {

  VAR_12 = VAR_11;
 }

 for (VAR_16 = 0; VAR_16 < VAR_0; ++VAR_16)
  if (VAR_12 & (1 << VAR_16))
   FUNC_6(&VAR_3->adev->vce.handles[VAR_16], 0);

 return VAR_17;
}
