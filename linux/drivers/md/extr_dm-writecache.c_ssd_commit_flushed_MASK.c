
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct io_notify {int c; int count; int member_2; int member_1; struct dm_writecache* member_0; } ;
struct dm_writecache {int dirty_bitmap_size; size_t metadata_sectors; int dirty_bitmap; TYPE_4__* ssd_dev; int dm_io; scalar_t__ memory_map; scalar_t__ start_sector; } ;
struct TYPE_7__ {struct io_notify* context; int (* fn ) (int ,struct io_notify*) ;} ;
struct TYPE_5__ {char* vma; } ;
struct TYPE_6__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {TYPE_3__ notify; int client; TYPE_2__ mem; int bi_op_flags; int bi_op; } ;
struct dm_io_region {size_t sector; size_t count; int bdev; } ;
typedef size_t sector_t ;
struct TYPE_8__ {int bdev; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 unsigned int FUNC_4 (int ,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dm_writecache*,TYPE_4__*) ;
 int FUNC_10 (int ,struct io_notify*) ;

__attribute__((used)) static void FUNC_11(struct dm_writecache *VAR_5)
{
 struct dm_io_region VAR_6;
 struct dm_io_request VAR_7;
 struct io_notify VAR_8 = {
  VAR_5,
  FUNC_1(VAR_8.c),
  FUNC_0(1),
 };
 unsigned VAR_9 = VAR_5->dirty_bitmap_size * 8;
 unsigned VAR_10 = 0;

 while (1) {
  unsigned VAR_11;
  VAR_10 = FUNC_4(VAR_5->dirty_bitmap, VAR_9, VAR_10);
  if (FUNC_7(VAR_10 == VAR_9))
   break;
  VAR_11 = FUNC_5(VAR_5->dirty_bitmap, VAR_9, VAR_10);

  VAR_6.bdev = VAR_5->ssd_dev->bdev;
  VAR_6.sector = (sector_t)VAR_10 * (VAR_0 >> VAR_4);
  VAR_6.count = (sector_t)(VAR_11 - VAR_10) * (VAR_0 >> VAR_4);

  if (FUNC_7(VAR_6.sector >= VAR_5->metadata_sectors))
   break;
  if (FUNC_7(VAR_6.sector + VAR_6.count > VAR_5->metadata_sectors))
   VAR_6.count = VAR_5->metadata_sectors - VAR_6.sector;

  VAR_6.sector += VAR_5->start_sector;
  FUNC_2(&VAR_8.count);
  VAR_7.bi_op = VAR_2;
  VAR_7.bi_op_flags = VAR_3;
  VAR_7.mem.type = VAR_1;
  VAR_7.mem.ptr.vma = (char *)VAR_5->memory_map + (size_t)VAR_10 * VAR_0;
  VAR_7.client = VAR_5->dm_io;
  VAR_7.notify.fn = FUNC_10;
  VAR_7.notify.context = &VAR_8;


         (void) FUNC_3(&VAR_7, 1, &VAR_6, ((void*)0));
  VAR_10 = VAR_11;
 }

 FUNC_10(0, &VAR_8);
 FUNC_8(&VAR_8.c);

 FUNC_9(VAR_5, VAR_5->ssd_dev);

 FUNC_6(VAR_5->dirty_bitmap, 0, VAR_5->dirty_bitmap_size);
}
