
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3d_dev {int dev; TYPE_1__* queue; } ;
struct TYPE_2__ {int sched; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int *,int,int,int ,char*) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct v3d_dev*) ;
 int VAR_8 ;
 int FUNC_4 (struct v3d_dev*) ;
 int VAR_9 ;

int
FUNC_5(struct v3d_dev *VAR_10)
{
 int VAR_11 = 1;
 int VAR_12 = 0;
 int VAR_13 = 500;
 int VAR_14;

 VAR_14 = FUNC_1(&VAR_10->queue[VAR_0].sched,
        &VAR_5,
        VAR_11, VAR_12,
        FUNC_2(VAR_13),
        "v3d_bin");
 if (VAR_14) {
  FUNC_0(VAR_10->dev, "Failed to create bin scheduler: %d.", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_1(&VAR_10->queue[VAR_3].sched,
        &VAR_8,
        VAR_11, VAR_12,
        FUNC_2(VAR_13),
        "v3d_render");
 if (VAR_14) {
  FUNC_0(VAR_10->dev, "Failed to create render scheduler: %d.",
   VAR_14);
  FUNC_4(VAR_10);
  return VAR_14;
 }

 VAR_14 = FUNC_1(&VAR_10->queue[VAR_4].sched,
        &VAR_9,
        VAR_11, VAR_12,
        FUNC_2(VAR_13),
        "v3d_tfu");
 if (VAR_14) {
  FUNC_0(VAR_10->dev, "Failed to create TFU scheduler: %d.",
   VAR_14);
  FUNC_4(VAR_10);
  return VAR_14;
 }

 if (FUNC_3(VAR_10)) {
  VAR_14 = FUNC_1(&VAR_10->queue[VAR_2].sched,
         &VAR_7,
         VAR_11, VAR_12,
         FUNC_2(VAR_13),
         "v3d_csd");
  if (VAR_14) {
   FUNC_0(VAR_10->dev, "Failed to create CSD scheduler: %d.",
    VAR_14);
   FUNC_4(VAR_10);
   return VAR_14;
  }

  VAR_14 = FUNC_1(&VAR_10->queue[VAR_1].sched,
         &VAR_6,
         VAR_11, VAR_12,
         FUNC_2(VAR_13),
         "v3d_cache_clean");
  if (VAR_14) {
   FUNC_0(VAR_10->dev, "Failed to create CACHE_CLEAN scheduler: %d.",
    VAR_14);
   FUNC_4(VAR_10);
   return VAR_14;
  }
 }

 return 0;
}
