
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_cs_parser {scalar_t__ idx; TYPE_3__* rdev; TYPE_1__* chunk_ib; } ;
struct TYPE_5__ {int* img_size; int * handles; } ;
struct TYPE_6__ {TYPE_2__ vce; } ;
struct TYPE_4__ {scalar_t__ length_dw; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct radeon_cs_parser*,scalar_t__) ;
 int FUNC_3 (struct radeon_cs_parser*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct radeon_cs_parser*,int,int*) ;

int FUNC_5(struct radeon_cs_parser *VAR_3)
{
 int VAR_4 = -1;
 bool VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 uint32_t VAR_8, VAR_9 = 0;
 uint32_t *VAR_10 = &VAR_8;
 int VAR_11, VAR_12 = 0;

 while (VAR_3->idx < VAR_3->chunk_ib->length_dw) {
  uint32_t VAR_13 = FUNC_2(VAR_3, VAR_3->idx);
  uint32_t VAR_14 = FUNC_2(VAR_3, VAR_3->idx + 1);

  if ((VAR_13 < 8) || (VAR_13 & 3)) {
   FUNC_0("invalid VCE command length (%d)!\n", VAR_13);
   VAR_12 = -VAR_0;
   goto out;
  }

  if (VAR_5) {
   FUNC_0("No other command allowed after destroy!\n");
   VAR_12 = -VAR_0;
   goto out;
  }

  switch (VAR_14) {
  case 0x00000001:
   VAR_9 = FUNC_2(VAR_3, VAR_3->idx + 2);
   VAR_4 = FUNC_4(VAR_3, VAR_9,
         &VAR_7);
   if (VAR_4 < 0)
    return VAR_4;
   VAR_10 = &VAR_3->rdev->vce.img_size[VAR_4];
   break;

  case 0x00000002:
   break;

  case 0x01000001:
   VAR_6 = 1;
   if (!VAR_7) {
    FUNC_0("Handle already in use!\n");
    VAR_12 = -VAR_0;
    goto out;
   }

   *VAR_10 = FUNC_2(VAR_3, VAR_3->idx + 8) *
    FUNC_2(VAR_3, VAR_3->idx + 10) *
    8 * 3 / 2;
   break;

  case 0x04000001:
  case 0x04000002:
  case 0x04000005:
  case 0x04000007:
  case 0x04000008:
  case 0x04000009:
   break;

  case 0x03000001:
   VAR_12 = FUNC_3(VAR_3, VAR_3->idx + 10, VAR_3->idx + 9,
      *VAR_10);
   if (VAR_12)
    goto out;

   VAR_12 = FUNC_3(VAR_3, VAR_3->idx + 12, VAR_3->idx + 11,
      *VAR_10 / 3);
   if (VAR_12)
    goto out;
   break;

  case 0x02000001:
   VAR_5 = 1;
   break;

  case 0x05000001:
   VAR_12 = FUNC_3(VAR_3, VAR_3->idx + 3, VAR_3->idx + 2,
      *VAR_10 * 2);
   if (VAR_12)
    goto out;
   break;

  case 0x05000004:
   VAR_8 = FUNC_2(VAR_3, VAR_3->idx + 4);
   VAR_12 = FUNC_3(VAR_3, VAR_3->idx + 3, VAR_3->idx + 2,
      VAR_8);
   if (VAR_12)
    goto out;
   break;

  case 0x05000005:
   VAR_12 = FUNC_3(VAR_3, VAR_3->idx + 3, VAR_3->idx + 2,
      4096);
   if (VAR_12)
    goto out;
   break;

  default:
   FUNC_0("invalid VCE command (0x%x)!\n", VAR_14);
   VAR_12 = -VAR_0;
   goto out;
  }

  if (VAR_4 == -1) {
   FUNC_0("no session command at start of IB\n");
   VAR_12 = -VAR_0;
   goto out;
  }

  VAR_3->idx += VAR_13 / 4;
 }

 if (VAR_7 && !VAR_6) {
  FUNC_0("New session without create command!\n");
  VAR_12 = -VAR_1;
 }

out:
 if ((!VAR_12 && VAR_5) || (VAR_12 && VAR_7)) {




  for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
   FUNC_1(&VAR_3->rdev->vce.handles[VAR_11], VAR_9, 0);
 }

 return VAR_12;
}
