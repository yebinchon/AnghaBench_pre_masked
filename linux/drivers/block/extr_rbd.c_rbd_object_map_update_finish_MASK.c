
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ oe_objno; } ;
struct rbd_obj_request {TYPE_2__ ex; TYPE_1__* img_request; } ;
struct rbd_device {int object_map_lock; } ;
struct ceph_osd_request {int r_result; int r_num_ops; } ;
struct ceph_osd_data {scalar_t__ type; int * pages; } ;
struct TYPE_3__ {struct rbd_device* rbd_dev; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (struct rbd_device*,scalar_t__) ;
 int FUNC_1 (struct rbd_device*,scalar_t__,void*) ;
 scalar_t__ FUNC_2 (void**) ;
 void* FUNC_3 (void**) ;
 int VAR_3 ;
 struct ceph_osd_data* FUNC_4 (struct ceph_osd_request*,int,int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct rbd_obj_request *VAR_5,
     struct ceph_osd_request *VAR_6)
{
 struct rbd_device *VAR_7 = VAR_5->img_request->rbd_dev;
 struct ceph_osd_data *VAR_8;
 u64 VAR_9;
 u8 VAR_10, VAR_11, VAR_12;
 bool VAR_13;
 void *VAR_14;

 if (VAR_6->r_result)
  return VAR_6->r_result;




 if (VAR_6->r_num_ops == 1)
  return 0;




 FUNC_6(VAR_6->r_num_ops == 2);
 VAR_8 = FUNC_4(VAR_6, 1, VAR_3, VAR_4);
 FUNC_6(VAR_8->type == VAR_0);

 VAR_14 = FUNC_5(VAR_8->pages[0]);
 VAR_9 = FUNC_2(&VAR_14);
 FUNC_6(VAR_9 == VAR_5->ex.oe_objno);
 FUNC_6(FUNC_2(&VAR_14) == VAR_9 + 1);
 VAR_11 = FUNC_3(&VAR_14);
 VAR_13 = FUNC_3(&VAR_14);
 if (VAR_13)
  VAR_12 = FUNC_3(&VAR_14);

 FUNC_7(&VAR_7->object_map_lock);
 VAR_10 = FUNC_0(VAR_7, VAR_9);
 if (!VAR_13 || VAR_12 == VAR_10 ||
     (VAR_12 == VAR_1 && VAR_10 == VAR_2))
  FUNC_1(VAR_7, VAR_9, VAR_11);
 FUNC_8(&VAR_7->object_map_lock);

 return 0;
}
