
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union rbd_img_fill_iter {int dummy; } rbd_img_fill_iter ;
typedef int u32 ;
struct rbd_img_request {int dummy; } ;
struct rbd_img_fill_ctx {int copy_fn; int count_fn; int set_pos_fn; union rbd_img_fill_iter* pos; int pos_type; } ;
struct ceph_file_extent {int dummy; } ;
struct ceph_bio_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rbd_img_request*,struct ceph_file_extent*,int ,struct rbd_img_fill_ctx*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct rbd_img_request *VAR_4,
       struct ceph_file_extent *VAR_5,
       u32 VAR_6,
       struct ceph_bio_iter *VAR_7)
{
 struct rbd_img_fill_ctx VAR_8 = {
  .pos_type = VAR_0,
  .pos = (union rbd_img_fill_iter *)VAR_7,
  .set_pos_fn = VAR_3,
  .count_fn = VAR_2,
  .copy_fn = VAR_1,
 };

 return FUNC_0(VAR_4, VAR_5, VAR_6,
        &VAR_8);
}
