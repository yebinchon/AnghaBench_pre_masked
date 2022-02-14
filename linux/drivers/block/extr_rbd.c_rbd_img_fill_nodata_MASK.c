
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union rbd_img_fill_iter {int dummy; } rbd_img_fill_iter ;
typedef int u64 ;
struct rbd_img_request {int dummy; } ;
struct rbd_img_fill_ctx {union rbd_img_fill_iter* pos; int pos_type; } ;
struct ceph_file_extent {int member_1; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbd_img_request*,struct ceph_file_extent*,int,struct rbd_img_fill_ctx*) ;

__attribute__((used)) static int FUNC_1(struct rbd_img_request *VAR_1,
          u64 VAR_2, u64 VAR_3)
{
 struct ceph_file_extent VAR_4 = { VAR_2, VAR_3 };
 union rbd_img_fill_iter VAR_5;
 struct rbd_img_fill_ctx VAR_6 = {
  .pos_type = VAR_0,
  .pos = &VAR_5,
 };

 return FUNC_0(VAR_1, &VAR_4, 1, &VAR_6);
}
