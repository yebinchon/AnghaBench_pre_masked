
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; struct mirror* mirror; int io_client; } ;
struct mirror {int dummy; } ;
struct TYPE_5__ {int * addr; struct bio* bio; } ;
struct TYPE_6__ {TYPE_2__ ptr; int type; } ;
struct TYPE_4__ {struct bio* context; int fn; } ;
struct dm_io_request {int bi_op_flags; TYPE_3__ mem; scalar_t__ bi_op; int client; TYPE_1__ notify; } ;
struct dm_io_region {int dummy; } ;
struct bio {int bi_opf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct dm_io_request*,unsigned int,struct dm_io_region*,int *) ;
 int FUNC_4 (struct mirror_set*) ;
 int FUNC_5 (int ,struct mirror*,struct bio*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(struct mirror_set *VAR_8, struct bio *VAR_9)
{
 unsigned int VAR_10;
 struct dm_io_region VAR_11[VAR_2], *VAR_12 = VAR_11;
 struct mirror *VAR_13;
 struct dm_io_request VAR_14 = {
  .bi_op = VAR_5,
  .bi_op_flags = VAR_9->bi_opf & (VAR_3 | VAR_6),
  .mem.type = VAR_0,
  .mem.ptr.bio = VAR_9,
  .notify.fn = VAR_7,
  .notify.context = VAR_9,
  .client = VAR_8->io_client,
 };

 if (FUNC_1(VAR_9) == VAR_4) {
  VAR_14.bi_op = VAR_4;
  VAR_14.mem.type = VAR_1;
  VAR_14.mem.ptr.addr = ((void*)0);
 }

 for (VAR_10 = 0, VAR_13 = VAR_8->mirror; VAR_10 < VAR_8->nr_mirrors; VAR_10++, VAR_13++)
  FUNC_5(VAR_12++, VAR_13, VAR_9);





 FUNC_2(VAR_9, FUNC_4(VAR_8));

 FUNC_0(FUNC_3(&VAR_14, VAR_8->nr_mirrors, VAR_11, ((void*)0)));
}
