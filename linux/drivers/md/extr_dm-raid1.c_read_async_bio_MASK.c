
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mirror {TYPE_4__* ms; } ;
struct TYPE_7__ {struct bio* context; int fn; } ;
struct TYPE_5__ {struct bio* bio; } ;
struct TYPE_6__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {int client; TYPE_3__ notify; TYPE_2__ mem; int bi_op_flags; int bi_op; } ;
struct dm_io_region {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_8__ {int io_client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bio*,struct mirror*) ;
 int FUNC_2 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 int FUNC_3 (struct dm_io_region*,struct mirror*,struct bio*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct mirror *VAR_3, struct bio *VAR_4)
{
 struct dm_io_region VAR_5;
 struct dm_io_request VAR_6 = {
  .bi_op = VAR_1,
  .bi_op_flags = 0,
  .mem.type = VAR_0,
  .mem.ptr.bio = VAR_4,
  .notify.fn = VAR_2,
  .notify.context = VAR_4,
  .client = VAR_3->ms->io_client,
 };

 FUNC_3(&VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_4, VAR_3);
 FUNC_0(FUNC_2(&VAR_6, 1, &VAR_5, ((void*)0)));
}
