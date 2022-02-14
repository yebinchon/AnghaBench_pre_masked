
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {struct dm_rq_target_io* end_io_data; } ;
struct mapped_device {int dummy; } ;
struct dm_rq_target_io {TYPE_2__* ti; struct request* orig; struct mapped_device* md; } ;
typedef int blk_status_t ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* release_clone_rq ) (struct request*,int *) ;} ;


 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct mapped_device*,struct request*) ;
 int FUNC_4 (struct request*,int *) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_0, blk_status_t VAR_1)
{
 struct dm_rq_target_io *VAR_2 = VAR_0->end_io_data;
 struct mapped_device *VAR_3 = VAR_2->md;
 struct request *VAR_4 = VAR_2->orig;

 FUNC_1(VAR_0);
 VAR_2->ti->type->release_clone_rq(VAR_0, ((void*)0));

 FUNC_3(VAR_3, VAR_4);
 FUNC_0(VAR_4, VAR_1);
 FUNC_2(VAR_3);
}
