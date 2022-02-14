
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rbd_img_request {int dummy; } ;
struct ceph_file_extent {int member_1; int member_0; } ;
struct ceph_bio_iter {int iter; struct bio* bio; } ;
struct bio {int bi_iter; } ;


 int FUNC_0 (struct rbd_img_request*,struct ceph_file_extent*,int,struct ceph_bio_iter*) ;

__attribute__((used)) static int FUNC_1(struct rbd_img_request *VAR_0,
     u64 VAR_1, u64 VAR_2, struct bio *VAR_3)
{
 struct ceph_file_extent VAR_4 = { VAR_1, VAR_2 };
 struct ceph_bio_iter VAR_5 = { .bio = VAR_3, .iter = VAR_3->bi_iter };

 return FUNC_0(VAR_0, &VAR_4, 1, &VAR_5);
}
