
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bi_size; } ;
struct TYPE_8__ {TYPE_1__ iter; } ;
struct TYPE_7__ {int oe_len; } ;
struct rbd_obj_request {TYPE_4__ bvec_pos; int bvec_count; int bvec_idx; TYPE_3__ ex; int bio_pos; TYPE_2__* img_request; } ;
struct ceph_osd_request {struct rbd_obj_request* r_priv; } ;
struct TYPE_6__ {int data_type; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct ceph_osd_request*,int,int *,int ) ;
 int FUNC_2 (struct ceph_osd_request*,int,TYPE_4__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ceph_osd_request *VAR_0, int VAR_1)
{
 struct rbd_obj_request *VAR_2 = VAR_0->r_priv;

 switch (VAR_2->img_request->data_type) {
 case 130:
  FUNC_1(VAR_0, VAR_1,
            &VAR_2->bio_pos,
            VAR_2->ex.oe_len);
  break;
 case 129:
 case 128:
  FUNC_3(VAR_2->bvec_pos.iter.bi_size ==
       VAR_2->ex.oe_len);
  FUNC_3(VAR_2->bvec_idx == VAR_2->bvec_count);
  FUNC_2(VAR_0, VAR_1,
          &VAR_2->bvec_pos);
  break;
 default:
  FUNC_0();
 }
}
