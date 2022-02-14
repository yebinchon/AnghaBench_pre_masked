
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;
struct dma_resv {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct radeon_fence*) ;
 int FUNC_2 (struct radeon_fence*) ;


 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_3 (unsigned long) ;
 struct radeon_fence* FUNC_4 (struct radeon_device*,int ,int ,unsigned int,struct dma_resv*) ;
 struct radeon_fence* FUNC_5 (struct radeon_device*,int ,int ,unsigned int,struct dma_resv*) ;
 int FUNC_6 (struct radeon_fence**) ;
 int FUNC_7 (struct radeon_fence*,int) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_3, unsigned VAR_4,
        uint64_t VAR_5, uint64_t VAR_6,
        int VAR_7, int VAR_8,
        struct dma_resv *VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 struct radeon_fence *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;

 VAR_10 = VAR_2;
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  switch (VAR_7) {
  case 128:
   VAR_12 = FUNC_5(VAR_3, VAR_5, VAR_6,
      VAR_4 / VAR_1,
      VAR_9);
   break;
  case 129:
   VAR_12 = FUNC_4(VAR_3, VAR_5, VAR_6,
       VAR_4 / VAR_1,
       VAR_9);
   break;
  default:
   FUNC_0("Unknown copy method\n");
   return -VAR_0;
  }
  if (FUNC_1(VAR_12))
   return FUNC_2(VAR_12);

  VAR_14 = FUNC_7(VAR_12, 0);
  FUNC_6(&VAR_12);
  if (VAR_14)
   return VAR_14;
 }
 VAR_11 = VAR_2;
 return FUNC_3(VAR_11 - VAR_10);
}
