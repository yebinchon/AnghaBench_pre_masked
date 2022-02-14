
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_gpu {int aspace; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct adreno_gpu {TYPE_1__** fw; } ;
struct a5xx_gpu {int gpmu_dwords; scalar_t__ gpmu_bo; int gpmu_iova; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int,int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int* FUNC_2 (struct drm_device*,int,int,int ,scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__) ;
 struct a5xx_gpu* FUNC_5 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_6 (struct msm_gpu*) ;

void FUNC_7(struct msm_gpu *VAR_5)
{
 struct adreno_gpu *VAR_6 = FUNC_6(VAR_5);
 struct a5xx_gpu *VAR_7 = FUNC_5(VAR_6);
 struct drm_device *VAR_8 = VAR_5->dev;
 uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11;
 unsigned int *VAR_12, *VAR_13, *VAR_14;
 unsigned int VAR_15;

 if (VAR_7->gpmu_bo)
  return;

 VAR_12 = (unsigned int *) VAR_6->fw[VAR_0]->data;







 if (VAR_6->fw[VAR_0]->size < 8 ||
  (VAR_12[0] < 2) || (VAR_12[0] >=
   (VAR_6->fw[VAR_0]->size >> 2)))
  return;


 if (VAR_12[1] != 2)
  return;

 VAR_14 = VAR_12 + VAR_12[2] + 3;
 VAR_15 = VAR_12[0] - VAR_12[2] - 2;





 VAR_11 = (VAR_15 + (VAR_15 / VAR_4) + 1) << 2;

 VAR_13 = FUNC_2(VAR_8, VAR_11,
  VAR_2 | VAR_1, VAR_5->aspace,
  &VAR_7->gpmu_bo, &VAR_7->gpmu_iova);
 if (FUNC_0(VAR_13))
  return;

 FUNC_3(VAR_7->gpmu_bo, "gpmufw");

 while (VAR_15 > 0) {
  int VAR_16;
  uint32_t VAR_17 = VAR_15 > VAR_4 ?
   VAR_4 : VAR_15;

  VAR_13[VAR_9++] = FUNC_1(VAR_3 + VAR_10,
   VAR_17);

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   VAR_13[VAR_9++] = *VAR_14++;

  VAR_10 += VAR_17;
  VAR_15 -= VAR_17;
 }

 FUNC_4(VAR_7->gpmu_bo);
 VAR_7->gpmu_dwords = VAR_9;
}
