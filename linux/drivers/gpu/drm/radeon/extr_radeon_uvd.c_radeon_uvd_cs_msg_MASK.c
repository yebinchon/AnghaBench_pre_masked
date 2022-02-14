
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_fence {int dummy; } ;
struct radeon_cs_parser {TYPE_4__* rdev; int filp; } ;
struct TYPE_5__ {int resv; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct radeon_bo {TYPE_2__ tbo; } ;
struct dma_fence {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {int max_handles; unsigned int* img_size; int * handles; int * filp; } ;
struct TYPE_8__ {TYPE_3__ uvd; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 struct dma_fence* FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_bo*,void**) ;
 int FUNC_6 (struct radeon_bo*) ;
 int FUNC_7 (struct radeon_fence*,int) ;
 int FUNC_8 (scalar_t__*,unsigned int*) ;
 int FUNC_9 (struct radeon_cs_parser*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct radeon_cs_parser *VAR_2, struct radeon_bo *VAR_3,
        unsigned VAR_4, unsigned VAR_5[])
{
 int32_t *VAR_6, VAR_7, VAR_8;
 unsigned VAR_9 = 0;
 struct dma_fence *VAR_10;
 void *VAR_11;

 int VAR_12, VAR_13;

 if (VAR_4 & 0x3F) {
  FUNC_1("UVD messages must be 64 byte aligned!\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_3->tbo.base.resv);
 if (VAR_10) {
  VAR_13 = FUNC_7((struct radeon_fence *)VAR_10, 0);
  if (VAR_13) {
   FUNC_1("Failed waiting for UVD message (%d)!\n", VAR_13);
   return VAR_13;
  }
 }

 VAR_13 = FUNC_5(VAR_3, &VAR_11);
 if (VAR_13) {
  FUNC_1("Failed mapping the UVD message (%d)!\n", VAR_13);
  return VAR_13;
 }

 VAR_6 = VAR_11 + VAR_4;

 VAR_7 = VAR_6[1];
 VAR_8 = VAR_6[2];

 if (VAR_8 == 0) {
  FUNC_1("Invalid UVD handle!\n");
  return -VAR_0;
 }

 switch (VAR_7) {
 case 0:

  VAR_9 = VAR_6[7] * VAR_6[8];

  VAR_13 = FUNC_9(VAR_2, VAR_6[4]);
  FUNC_6(VAR_3);
  if (VAR_13)
   return VAR_13;


  for (VAR_12 = 0; VAR_12 < VAR_2->rdev->uvd.max_handles; ++VAR_12) {
   if (FUNC_3(&VAR_2->rdev->uvd.handles[VAR_12]) == VAR_8) {
    FUNC_1("Handle 0x%x already in use!\n", VAR_8);
    return -VAR_0;
   }

   if (!FUNC_2(&VAR_2->rdev->uvd.handles[VAR_12], 0, VAR_8)) {
    VAR_2->rdev->uvd.filp[VAR_12] = VAR_2->filp;
    VAR_2->rdev->uvd.img_size[VAR_12] = VAR_9;
    return 0;
   }
  }

  FUNC_1("No more free UVD handles!\n");
  return -VAR_0;

 case 1:

  VAR_13 = FUNC_9(VAR_2, VAR_6[4]);
  if (!VAR_13)
   VAR_13 = FUNC_8(VAR_6, VAR_5);
  FUNC_6(VAR_3);
  if (VAR_13)
   return VAR_13;


  for (VAR_12 = 0; VAR_12 < VAR_2->rdev->uvd.max_handles; ++VAR_12) {
   if (FUNC_3(&VAR_2->rdev->uvd.handles[VAR_12]) == VAR_8) {
    if (VAR_2->rdev->uvd.filp[VAR_12] != VAR_2->filp) {
     FUNC_1("UVD handle collision detected!\n");
     return -VAR_0;
    }
    return 0;
   }
  }

  FUNC_1("Invalid UVD handle 0x%x!\n", VAR_8);
  return -VAR_1;

 case 2:

  for (VAR_12 = 0; VAR_12 < VAR_2->rdev->uvd.max_handles; ++VAR_12)
   FUNC_2(&VAR_2->rdev->uvd.handles[VAR_12], VAR_8, 0);
  FUNC_6(VAR_3);
  return 0;

 default:

  FUNC_1("Illegal UVD message type (%d)!\n", VAR_7);
  return -VAR_0;
 }

 FUNC_0();
 return -VAR_0;
}
