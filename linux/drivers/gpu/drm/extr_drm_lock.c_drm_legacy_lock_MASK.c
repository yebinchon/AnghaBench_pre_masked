
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* hw_lock; int lock_queue; int spinlock; int user_waiters; int lock_time; struct drm_file* file_priv; } ;
struct drm_master {TYPE_4__ lock; } ;
struct drm_lock {scalar_t__ context; int flags; } ;
struct drm_file {int lock_count; struct drm_master* master; } ;
struct TYPE_5__ {scalar_t__ context; TYPE_2__* lock; } ;
struct drm_device {TYPE_3__* driver; TYPE_1__ sigdata; } ;
struct TYPE_7__ {scalar_t__ (* dma_quiescent ) (struct drm_device*) ;} ;
struct TYPE_6__ {int lock; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_10 ;
 int FUNC_5 (struct drm_device*,int ) ;
 int VAR_11 ;
 int FUNC_6 (struct drm_file*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct drm_device*) ;
 int FUNC_17 (int ) ;

int FUNC_18(struct drm_device *VAR_14, void *VAR_15,
      struct drm_file *VAR_16)
{
 FUNC_0(VAR_12, VAR_10);
 struct drm_lock *VAR_17 = VAR_15;
 struct drm_master *VAR_18 = VAR_16->master;
 int VAR_19 = 0;

 if (!FUNC_5(VAR_14, VAR_0))
  return -VAR_5;

 ++VAR_16->lock_count;

 if (VAR_17->context == VAR_1) {
  FUNC_2("Process %d using kernel context %d\n",
     FUNC_17(VAR_10), VAR_17->context);
  return -VAR_4;
 }

 FUNC_1("%d (pid %d) requests lock (0x%08x), flags = 0x%08x\n",
    VAR_17->context, FUNC_17(VAR_10),
    VAR_18->lock.hw_lock ? VAR_18->lock.hw_lock->lock : -1,
    VAR_17->flags);

 FUNC_4(&VAR_18->lock.lock_queue, &VAR_12);
 FUNC_14(&VAR_18->lock.spinlock);
 VAR_18->lock.user_waiters++;
 FUNC_15(&VAR_18->lock.spinlock);

 for (;;) {
  FUNC_3(VAR_7);
  if (!VAR_18->lock.hw_lock) {

   FUNC_12(VAR_6, VAR_10, 0);
   VAR_19 = -VAR_3;
   break;
  }
  if (FUNC_7(&VAR_18->lock, VAR_17->context)) {
   VAR_18->lock.file_priv = VAR_16;
   VAR_18->lock.lock_time = VAR_13;
   break;
  }


  FUNC_9(&VAR_11);
  FUNC_11();
  FUNC_8(&VAR_11);
  if (FUNC_13(VAR_10)) {
   VAR_19 = -VAR_3;
   break;
  }
 }
 FUNC_14(&VAR_18->lock.spinlock);
 VAR_18->lock.user_waiters--;
 FUNC_15(&VAR_18->lock.spinlock);
 FUNC_3(VAR_8);
 FUNC_10(&VAR_18->lock.lock_queue, &VAR_12);

 FUNC_1("%d %s\n", VAR_17->context,
    VAR_19 ? "interrupted" : "has lock");
 if (VAR_19) return VAR_19;




 if (!FUNC_6(VAR_16)) {
  VAR_14->sigdata.context = VAR_17->context;
  VAR_14->sigdata.lock = VAR_18->lock.hw_lock;
 }

 if (VAR_14->driver->dma_quiescent && (VAR_17->flags & VAR_9))
 {
  if (VAR_14->driver->dma_quiescent(VAR_14)) {
   FUNC_1("%d waiting for DMA quiescent\n",
      VAR_17->context);
   return -VAR_2;
  }
 }

 return 0;
}
