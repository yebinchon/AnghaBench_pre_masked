
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct rbd_img_request {int object_extents; TYPE_1__* rbd_dev; int data_type; } ;
struct rbd_img_fill_ctx {int iter; int set_pos_fn; int * pos; int pos_type; } ;
struct ceph_file_extent {int fe_len; int fe_off; } ;
struct TYPE_2__ {int layout; } ;


 int FUNC_0 (struct rbd_img_request*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int *,int ,struct rbd_img_request*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct rbd_img_request *VAR_1,
           struct ceph_file_extent *VAR_2,
           u32 VAR_3,
           struct rbd_img_fill_ctx *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_1->data_type = VAR_4->pos_type;





 VAR_4->iter = *VAR_4->pos;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_1(&VAR_1->rbd_dev->layout,
        VAR_2[VAR_5].fe_off,
        VAR_2[VAR_5].fe_len,
        &VAR_1->object_extents,
        VAR_0, VAR_1,
        VAR_4->set_pos_fn, &VAR_4->iter);
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_0(VAR_1);
}
