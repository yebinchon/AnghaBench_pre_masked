
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* context; int (* fn ) (unsigned long,void*) ;} ;
struct TYPE_5__ {int * pl; } ;
struct TYPE_6__ {unsigned int offset; TYPE_1__ ptr; int type; } ;
struct dm_io_request {int client; TYPE_3__ notify; TYPE_2__ mem; scalar_t__ bi_op_flags; int bi_op; } ;
struct dm_io_region {unsigned int sector; unsigned int count; int bdev; } ;
struct dm_integrity_c {int sectors_per_block; unsigned int journal_section_sectors; TYPE_4__* dev; int io; int * journal; } ;
typedef unsigned int sector_t ;
typedef int (* io_notify_fn ) (unsigned long,void*) ;
struct TYPE_8__ {int bdev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct dm_integrity_c*) ;
 int FUNC_3 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dm_integrity_c *VAR_6, unsigned VAR_7, unsigned VAR_8,
         unsigned VAR_9, sector_t VAR_10, io_notify_fn VAR_11, void *VAR_12)
{
 struct dm_io_request VAR_13;
 struct dm_io_region VAR_14;
 int VAR_15;
 unsigned VAR_16, VAR_17, VAR_18;

 FUNC_0((VAR_10 | VAR_9 | VAR_8) & (unsigned)(VAR_6->sectors_per_block - 1));

 if (FUNC_4(FUNC_2(VAR_6))) {
  VAR_11(-1UL, VAR_12);
  return;
 }

 VAR_16 = VAR_7 * VAR_6->journal_section_sectors + VAR_1 + VAR_8;

 VAR_17 = VAR_16 >> (VAR_2 - VAR_5);
 VAR_18 = (VAR_16 << VAR_5) & (VAR_3 - 1);

 VAR_13.bi_op = VAR_4;
 VAR_13.bi_op_flags = 0;
 VAR_13.mem.type = VAR_0;
 VAR_13.mem.ptr.pl = &VAR_6->journal[VAR_17];
 VAR_13.mem.offset = VAR_18;
 VAR_13.notify.fn = VAR_11;
 VAR_13.notify.context = VAR_12;
 VAR_13.client = VAR_6->io;
 VAR_14.bdev = VAR_6->dev->bdev;
 VAR_14.sector = VAR_10;
 VAR_14.count = VAR_9;

 VAR_15 = FUNC_3(&VAR_13, 1, &VAR_14, ((void*)0));
 if (FUNC_4(VAR_15)) {
  FUNC_1(1, "asynchronous dm_io failed: %d", VAR_15);
  VAR_11(-1UL, VAR_12);
 }
}
