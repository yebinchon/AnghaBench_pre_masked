
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct journal_completion {int dummy; } ;
struct TYPE_8__ {int (* fn ) (unsigned long,struct journal_completion*) ;struct journal_completion* context; } ;
struct TYPE_6__ {int * pl; } ;
struct TYPE_7__ {unsigned int offset; TYPE_1__ ptr; int type; } ;
struct dm_io_request {int bi_op; int bi_op_flags; int client; TYPE_3__ notify; TYPE_2__ mem; } ;
struct dm_io_region {unsigned int count; scalar_t__ sector; int bdev; } ;
struct dm_integrity_c {scalar_t__ start; TYPE_5__* dev; TYPE_4__* meta_dev; int io; int * journal; int * journal_io; } ;
struct TYPE_10__ {int bdev; } ;
struct TYPE_9__ {int bdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (unsigned long,struct journal_completion*) ;
 int FUNC_2 (struct dm_integrity_c*) ;
 int FUNC_3 (struct dm_integrity_c*,char*,int) ;
 int FUNC_4 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct dm_integrity_c *VAR_6, int VAR_7, int VAR_8,
          unsigned VAR_9, unsigned VAR_10, struct journal_completion *VAR_11)
{
 struct dm_io_request VAR_12;
 struct dm_io_region VAR_13;
 unsigned VAR_14, VAR_15;
 int VAR_16;

 if (FUNC_6(FUNC_2(VAR_6))) {
  if (VAR_11)
   FUNC_1(-1UL, VAR_11);
  return;
 }

 VAR_14 = VAR_9 >> (VAR_1 - VAR_5);
 VAR_15 = (VAR_9 << VAR_5) & (VAR_2 - 1);

 VAR_12.bi_op = VAR_7;
 VAR_12.bi_op_flags = VAR_8;
 VAR_12.mem.type = VAR_0;
 if (VAR_6->journal_io)
  VAR_12.mem.ptr.pl = &VAR_6->journal_io[VAR_14];
 else
  VAR_12.mem.ptr.pl = &VAR_6->journal[VAR_14];
 VAR_12.mem.offset = VAR_15;
 if (FUNC_5(VAR_11 != ((void*)0))) {
  VAR_12.notify.fn = FUNC_1;
  VAR_12.notify.context = VAR_11;
 } else {
  VAR_12.notify.fn = ((void*)0);
 }
 VAR_12.client = VAR_6->io;
 VAR_13.bdev = VAR_6->meta_dev ? VAR_6->meta_dev->bdev : VAR_6->dev->bdev;
 VAR_13.sector = VAR_6->start + VAR_4 + VAR_9;
 VAR_13.count = VAR_10;

 VAR_16 = FUNC_4(&VAR_12, 1, &VAR_13, ((void*)0));
 if (FUNC_6(VAR_16)) {
  FUNC_3(VAR_6, VAR_7 == VAR_3 ? "reading journal" : "writing journal", VAR_16);
  if (VAR_11) {
   FUNC_0(1, "asynchronous dm_io failed: %d", VAR_16);
   FUNC_1(-1UL, VAR_11);
  }
 }
}
