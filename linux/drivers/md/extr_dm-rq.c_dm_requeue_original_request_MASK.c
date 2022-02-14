
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct mapped_device {int dummy; } ;
struct dm_rq_target_io {scalar_t__ clone; TYPE_2__* ti; struct request* orig; struct mapped_device* md; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* release_clone_rq ) (scalar_t__,int *) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct request*,unsigned long) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct mapped_device*,struct request*) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_5(struct dm_rq_target_io *VAR_0, bool VAR_1)
{
 struct mapped_device *VAR_2 = VAR_0->md;
 struct request *VAR_3 = VAR_0->orig;
 unsigned long VAR_4 = VAR_1 ? 100 : 0;

 FUNC_3(VAR_2, VAR_3);
 if (VAR_0->clone) {
  FUNC_0(VAR_0->clone);
  VAR_0->ti->type->release_clone_rq(VAR_0->clone, ((void*)0));
 }

 FUNC_1(VAR_3, VAR_4);
 FUNC_2(VAR_2);
}
