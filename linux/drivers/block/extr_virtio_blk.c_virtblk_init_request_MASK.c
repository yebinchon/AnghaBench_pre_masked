
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_blk {int sg_elems; } ;
struct TYPE_2__ {int sense; } ;
struct virtblk_req {int sg; int sense; TYPE_1__ sreq; } ;
struct request {int dummy; } ;
struct blk_mq_tag_set {struct virtio_blk* driver_data; } ;


 struct virtblk_req* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct virtio_blk *VAR_4 = VAR_0->driver_data;
 struct virtblk_req *VAR_5 = FUNC_0(VAR_1);




 FUNC_1(VAR_5->sg, VAR_4->sg_elems);
 return 0;
}
