
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_ib {int length_dw; } ;
struct amdgpu_cs_parser {TYPE_3__* adev; TYPE_1__* job; } ;
struct TYPE_5__ {int * handles; } ;
struct TYPE_6__ {TYPE_2__ vce; } ;
struct TYPE_4__ {struct amdgpu_ib* ibs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct amdgpu_cs_parser*,size_t,int) ;
 int FUNC_2 (TYPE_3__*,struct amdgpu_ib*,int *) ;
 int FUNC_3 (struct amdgpu_cs_parser*,size_t,size_t*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct amdgpu_cs_parser *VAR_3, uint32_t VAR_4)
{
 struct amdgpu_ib *VAR_5 = &VAR_3->job->ibs[VAR_4];
 int VAR_6 = -1;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10, VAR_11 = 0;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;

 while (VAR_14 < VAR_5->length_dw) {
  uint32_t VAR_15 = FUNC_1(VAR_3, VAR_4, VAR_14);
  uint32_t VAR_16 = FUNC_1(VAR_3, VAR_4, VAR_14 + 1);

  if ((VAR_15 < 8) || (VAR_15 & 3)) {
   FUNC_0("invalid VCE command length (%d)!\n", VAR_15);
   VAR_13 = -VAR_1;
   goto out;
  }

  switch (VAR_16) {
  case 0x00000001:
   VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_14 + 2);
   VAR_6 = FUNC_3(VAR_3, VAR_11,
         &VAR_9);
   if (VAR_6 < 0) {
    VAR_13 = VAR_6;
    goto out;
   }
   break;

  case 0x01000001:
   VAR_8 |= 1 << VAR_6;
   if (VAR_7 & (1 << VAR_6)) {
    VAR_7 &= ~(1 << VAR_6);
    VAR_9 |= 1 << VAR_6;

   } else if (!(VAR_9 & (1 << VAR_6))) {
    FUNC_0("Handle already in use!\n");
    VAR_13 = -VAR_1;
    goto out;
   }

   break;

  case 0x02000001:
   VAR_7 |= 1 << VAR_6;
   break;

  default:
   break;
  }

  if (VAR_6 == -1) {
   FUNC_0("no session command at start of IB\n");
   VAR_13 = -VAR_1;
   goto out;
  }

  VAR_14 += VAR_15 / 4;
 }

 if (VAR_9 & ~VAR_8) {
  FUNC_0("New session without create command!\n");
  VAR_13 = -VAR_2;
 }

out:
 if (!VAR_13) {

  VAR_10 = VAR_7;
  FUNC_2(VAR_3->adev, VAR_5, ((void*)0));
 } else {

  VAR_10 = VAR_9;
 }

 for (VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12)
  if (VAR_10 & (1 << VAR_12))
   FUNC_4(&VAR_3->adev->vce.handles[VAR_12], 0);

 return VAR_13;
}
