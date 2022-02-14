
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_writecache {int dm_io; } ;
struct TYPE_6__ {int * fn; } ;
struct TYPE_4__ {int * addr; } ;
struct TYPE_5__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {TYPE_3__ notify; int client; TYPE_2__ mem; int bi_op_flags; int bi_op; } ;
struct dm_io_region {scalar_t__ count; scalar_t__ sector; int bdev; } ;
struct dm_dev {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dm_writecache*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct dm_writecache *VAR_3, struct dm_dev *VAR_4)
{
 int VAR_5;
 struct dm_io_region VAR_6;
 struct dm_io_request VAR_7;

 VAR_6.bdev = VAR_4->bdev;
 VAR_6.sector = 0;
 VAR_6.count = 0;
 VAR_7.bi_op = VAR_1;
 VAR_7.bi_op_flags = VAR_2;
 VAR_7.mem.type = VAR_0;
 VAR_7.mem.ptr.addr = ((void*)0);
 VAR_7.client = VAR_3->dm_io;
 VAR_7.notify.fn = ((void*)0);

 VAR_5 = FUNC_0(&VAR_7, 1, &VAR_6, ((void*)0));
 if (FUNC_1(VAR_5))
  FUNC_2(VAR_3, VAR_5, "error flushing metadata: %d", VAR_5);
}
