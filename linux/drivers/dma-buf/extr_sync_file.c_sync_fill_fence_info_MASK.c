
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sync_fence_info {int status; int timestamp_ns; int driver_name; int obj_name; } ;
struct dma_fence {int timestamp; int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_driver_name ) (struct dma_fence*) ;int (* get_timeline_name ) (struct dma_fence*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct dma_fence*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct dma_fence *VAR_2,
     struct sync_fence_info *VAR_3)
{
 FUNC_4(VAR_3->obj_name, VAR_2->ops->get_timeline_name(VAR_2),
  sizeof(VAR_3->obj_name));
 FUNC_4(VAR_3->driver_name, VAR_2->ops->get_driver_name(VAR_2),
  sizeof(VAR_3->driver_name));

 VAR_3->status = FUNC_1(VAR_2);
 while (FUNC_7(VAR_0, &VAR_2->flags) &&
        !FUNC_7(VAR_1, &VAR_2->flags))
  FUNC_0();
 VAR_3->timestamp_ns =
  FUNC_7(VAR_1, &VAR_2->flags) ?
  FUNC_3(VAR_2->timestamp) :
  FUNC_2(0, 0);

 return VAR_3->status;
}
