
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct msm_gpu {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct msm_gpu*,int ) ;

__attribute__((used)) static void FUNC_2(struct msm_gpu *VAR_2)
{
 uint64_t VAR_3 = (uint64_t) FUNC_1(VAR_2, VAR_0);

 VAR_3 |= FUNC_1(VAR_2, VAR_1);

 FUNC_0(VAR_2->dev->dev, "UCHE | Out of bounds access | addr=0x%llX\n",
  VAR_3);
}
