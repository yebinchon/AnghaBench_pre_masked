
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct msm_ringbuffer {int id; TYPE_2__* gpu; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct msm_ringbuffer*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct msm_ringbuffer *VAR_0, uint32_t VAR_1)
{
 if (FUNC_2(FUNC_1(VAR_0) >= VAR_1))
  FUNC_0(VAR_0->gpu->dev->dev,
   "timeout waiting for space in ringbuffer %d\n",
   VAR_0->id);
}
