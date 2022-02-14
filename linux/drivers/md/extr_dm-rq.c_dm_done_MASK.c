
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {TYPE_3__* q; struct dm_rq_target_io* end_io_data; } ;
struct dm_rq_target_io {int md; int info; TYPE_4__* ti; } ;
typedef int (* dm_request_endio_fn ) (TYPE_4__*,struct request*,int ,int *) ;
typedef int blk_status_t ;
struct TYPE_8__ {TYPE_1__* type; } ;
struct TYPE_6__ {int max_write_zeroes_sectors; int max_write_same_sectors; int max_discard_sectors; } ;
struct TYPE_7__ {TYPE_2__ limits; } ;
struct TYPE_5__ {int (* rq_end_io ) (TYPE_4__*,struct request*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct request*,int ) ;
 int FUNC_6 (struct dm_rq_target_io*,int) ;
 scalar_t__ FUNC_7 (struct request*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_4, blk_status_t VAR_5, bool VAR_6)
{
 int VAR_7 = 130;
 struct dm_rq_target_io *VAR_8 = VAR_4->end_io_data;
 dm_request_endio_fn VAR_9 = ((void*)0);

 if (VAR_8->ti) {
  VAR_9 = VAR_8->ti->type->rq_end_io;

  if (VAR_6 && VAR_9)
   VAR_7 = VAR_9(VAR_8->ti, VAR_4, VAR_5, &VAR_8->info);
 }

 if (FUNC_8(VAR_5 == VAR_0)) {
  if (FUNC_7(VAR_4) == VAR_1 &&
      !VAR_4->q->limits.max_discard_sectors)
   FUNC_2(VAR_8->md);
  else if (FUNC_7(VAR_4) == VAR_2 &&
    !VAR_4->q->limits.max_write_same_sectors)
   FUNC_3(VAR_8->md);
  else if (FUNC_7(VAR_4) == VAR_3 &&
    !VAR_4->q->limits.max_write_zeroes_sectors)
   FUNC_4(VAR_8->md);
 }

 switch (VAR_7) {
 case 130:

  FUNC_5(VAR_4, VAR_5);
  break;
 case 129:

  return;
 case 128:

  FUNC_6(VAR_8, 0);
  break;
 case 131:

  FUNC_6(VAR_8, 1);
  break;
 default:
  FUNC_1("unimplemented target endio return value: %d", VAR_7);
  FUNC_0();
 }
}
