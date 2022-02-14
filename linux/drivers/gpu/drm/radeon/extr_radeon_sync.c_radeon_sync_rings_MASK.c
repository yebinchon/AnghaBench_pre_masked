
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_sync {struct radeon_semaphore** semaphores; struct radeon_fence** sync_to; } ;
struct radeon_semaphore {int dummy; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {TYPE_1__* ring; int dev; } ;
struct TYPE_4__ {int ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct radeon_fence*,int) ;
 int FUNC_2 (struct radeon_fence*,int) ;
 int FUNC_3 (struct radeon_fence*,int) ;
 int FUNC_4 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_5 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_semaphore**) ;
 int FUNC_8 (struct radeon_device*,int,struct radeon_semaphore*) ;
 int FUNC_9 (struct radeon_device*,int,struct radeon_semaphore*) ;

int FUNC_10(struct radeon_device *VAR_3,
        struct radeon_sync *VAR_4,
        int VAR_5)
{
 unsigned VAR_6 = 0;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  struct radeon_fence *VAR_9 = VAR_4->sync_to[VAR_7];
  struct radeon_semaphore *VAR_10;


  if (!FUNC_1(VAR_9, VAR_5))
   continue;


  if (!VAR_3->ring[VAR_7].ready) {
   FUNC_0(VAR_3->dev, "Syncing to a disabled ring!");
   return -VAR_0;
  }

  if (VAR_6 >= VAR_2) {

   VAR_8 = FUNC_3(VAR_9, 0);
   if (VAR_8)
    return VAR_8;
   continue;
  }
  VAR_8 = FUNC_7(VAR_3, &VAR_10);
  if (VAR_8)
   return VAR_8;

  VAR_4->semaphores[VAR_6++] = VAR_10;


  VAR_8 = FUNC_4(VAR_3, &VAR_3->ring[VAR_7], 16);
  if (VAR_8)
   return VAR_8;


  if (!FUNC_8(VAR_3, VAR_7, VAR_10)) {

   FUNC_6(&VAR_3->ring[VAR_7]);
   VAR_8 = FUNC_3(VAR_9, 0);
   if (VAR_8)
    return VAR_8;
   continue;
  }


  if (!FUNC_9(VAR_3, VAR_5, VAR_10)) {

   FUNC_6(&VAR_3->ring[VAR_7]);
   VAR_8 = FUNC_3(VAR_9, 0);
   if (VAR_8)
    return VAR_8;
   continue;
  }

  FUNC_5(VAR_3, &VAR_3->ring[VAR_7], 0);
  FUNC_2(VAR_9, VAR_5);
 }

 return 0;
}
