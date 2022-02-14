
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rbd_spec {int * pool_ns; int pool_id; } ;
struct TYPE_6__ {int * parent; int * type; int * bus; } ;
struct TYPE_5__ {int pool_ns; int pool; } ;
struct TYPE_4__ {int data_pool_id; } ;
struct rbd_device {struct rbd_spec* spec; struct rbd_client* rbd_client; TYPE_3__ dev; int object_map_lock; int releasing_wait; int acquire_wait; int running_list; int acquiring_list; int lock_lists_lock; int unlock_work; int lock_dwork; int released_lock_work; int acquired_lock_work; int lock_state; int lock_rwsem; int watch_dwork; int watch_state; int watch_mutex; TYPE_2__ header_oloc; int header_oid; TYPE_1__ header; int header_rwsem; int node; int lock; } ;
struct rbd_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct rbd_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct rbd_device *FUNC_13(struct rbd_client *VAR_12,
        struct rbd_spec *VAR_13)
{
 struct rbd_device *VAR_14;

 VAR_14 = FUNC_9(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return ((void*)0);

 FUNC_11(&VAR_14->lock);
 FUNC_1(&VAR_14->node);
 FUNC_8(&VAR_14->header_rwsem);

 VAR_14->header.data_pool_id = VAR_0;
 FUNC_5(&VAR_14->header_oid);
 VAR_14->header_oloc.pool = VAR_13->pool_id;
 if (VAR_13->pool_ns) {
  FUNC_3(!*VAR_13->pool_ns);
  VAR_14->header_oloc.pool_ns =
      FUNC_4(VAR_13->pool_ns,
            FUNC_12(VAR_13->pool_ns));
 }

 FUNC_10(&VAR_14->watch_mutex);
 VAR_14->watch_state = VAR_3;
 FUNC_0(&VAR_14->watch_dwork, VAR_10);

 FUNC_8(&VAR_14->lock_rwsem);
 VAR_14->lock_state = VAR_2;
 FUNC_2(&VAR_14->acquired_lock_work, VAR_7);
 FUNC_2(&VAR_14->released_lock_work, VAR_8);
 FUNC_0(&VAR_14->lock_dwork, VAR_4);
 FUNC_2(&VAR_14->unlock_work, VAR_9);
 FUNC_11(&VAR_14->lock_lists_lock);
 FUNC_1(&VAR_14->acquiring_list);
 FUNC_1(&VAR_14->running_list);
 FUNC_7(&VAR_14->acquire_wait);
 FUNC_7(&VAR_14->releasing_wait);

 FUNC_11(&VAR_14->object_map_lock);

 VAR_14->dev.bus = &VAR_5;
 VAR_14->dev.type = &VAR_6;
 VAR_14->dev.parent = &VAR_11;
 FUNC_6(&VAR_14->dev);

 VAR_14->rbd_client = VAR_12;
 VAR_14->spec = VAR_13;

 return VAR_14;
}
