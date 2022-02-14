
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ next; } ;
struct syncobj_wait_entry {TYPE_1__ node; struct dma_fence* fence; scalar_t__ point; int task; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (struct dma_fence**,scalar_t__) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct drm_syncobj*,struct syncobj_wait_entry*) ;
 struct dma_fence* FUNC_4 (struct drm_syncobj*) ;
 struct drm_syncobj* FUNC_5 (struct drm_file*,int ) ;
 int FUNC_6 (struct drm_syncobj*) ;
 int FUNC_7 (struct drm_syncobj*,struct syncobj_wait_entry*) ;
 int FUNC_8 (struct syncobj_wait_entry*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(struct drm_file *VAR_9,
      u32 VAR_10, u64 VAR_11, u64 VAR_12,
      struct dma_fence **VAR_13)
{
 struct drm_syncobj *VAR_14 = FUNC_5(VAR_9, VAR_10);
 struct syncobj_wait_entry VAR_15;
 u64 VAR_16 = FUNC_9(VAR_1);
 int VAR_17;

 if (!VAR_14)
  return -VAR_3;

 *VAR_13 = FUNC_4(VAR_14);
 FUNC_6(VAR_14);

 if (*VAR_13) {
  VAR_17 = FUNC_1(VAR_13, VAR_11);
  if (!VAR_17)
   return 0;
  FUNC_2(*VAR_13);
 } else {
  VAR_17 = -VAR_2;
 }

 if (!(VAR_12 & VAR_0))
  return VAR_17;

 FUNC_8(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.task = VAR_8;
 VAR_15.point = VAR_11;
 FUNC_3(VAR_14, &VAR_15);

 do {
  FUNC_11(VAR_6);
  if (VAR_15.fence) {
   VAR_17 = 0;
   break;
  }
                if (VAR_16 == 0) {
                        VAR_17 = -VAR_5;
                        break;
                }

  if (FUNC_12(VAR_8)) {
   VAR_17 = -VAR_4;
   break;
  }

                VAR_16 = FUNC_10(VAR_16);
 } while (1);

 FUNC_0(VAR_7);
 *VAR_13 = VAR_15.fence;

 if (VAR_15.node.next)
  FUNC_7(VAR_14, &VAR_15);

 return VAR_17;
}
