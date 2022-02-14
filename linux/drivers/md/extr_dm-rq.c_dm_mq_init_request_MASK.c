
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mapped_device {scalar_t__ init_tio_pdu; } ;
struct TYPE_2__ {struct dm_rq_target_io* ptr; } ;
struct dm_rq_target_io {TYPE_1__ info; struct mapped_device* md; } ;
struct blk_mq_tag_set {struct mapped_device* driver_data; } ;


 struct dm_rq_target_io* FUNC_0 (struct request*) ;

__attribute__((used)) static int FUNC_1(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 struct mapped_device *VAR_4 = VAR_0->driver_data;
 struct dm_rq_target_io *VAR_5 = FUNC_0(VAR_1);





 VAR_5->md = VAR_4;

 if (VAR_4->init_tio_pdu) {

  VAR_5->info.ptr = VAR_5 + 1;
 }

 return 0;
}
