
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct host1x_job_gather {int words; scalar_t__ offset; int bo; scalar_t__ base; } ;
struct host1x_job {unsigned int num_gathers; struct host1x_job_gather* gathers; TYPE_1__* channel; } ;
struct host1x_cdma {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct device* dev; struct host1x_cdma cdma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__*) ;
 int FUNC_1 (struct host1x_cdma*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct host1x_cdma*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct host1x_cdma*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct host1x_job *VAR_1)
{
 struct host1x_cdma *VAR_2 = &VAR_1->channel->cdma;

 struct device *VAR_3 = VAR_1->channel->dev;

 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_gathers; VAR_4++) {
  struct host1x_job_gather *VAR_5 = &VAR_1->gathers[VAR_4];
  dma_addr_t VAR_6 = VAR_5->base + VAR_5->offset;
  u32 VAR_7, VAR_8;

  VAR_7 = FUNC_5(VAR_6);
  VAR_8 = FUNC_7(VAR_6);

  FUNC_6(VAR_2, VAR_5->bo, VAR_5->offset, VAR_5->words);

  if (VAR_8 != 0) {






   FUNC_0(VAR_3, "invalid gather for push buffer %pad\n",
    &VAR_6);
   continue;

  } else {
   u32 VAR_9 = FUNC_3(VAR_5->words);

   FUNC_1(VAR_2, VAR_9, VAR_7);
  }
 }
}
