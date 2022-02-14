
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * fn; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_7__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {int bi_op; int bi_op_flags; int client; TYPE_3__ notify; TYPE_2__ mem; } ;
struct dm_io_region {int count; int sector; int bdev; } ;
struct dm_integrity_c {int start; TYPE_5__* dev; TYPE_4__* meta_dev; int io; int sb; } ;
struct TYPE_10__ {int bdev; } ;
struct TYPE_9__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 int FUNC_1 (struct dm_integrity_c*) ;

__attribute__((used)) static int FUNC_2(struct dm_integrity_c *VAR_3, int VAR_4, int VAR_5)
{
 struct dm_io_request VAR_6;
 struct dm_io_region VAR_7;

 VAR_6.bi_op = VAR_4;
 VAR_6.bi_op_flags = VAR_5;
 VAR_6.mem.type = VAR_0;
 VAR_6.mem.ptr.addr = VAR_3->sb;
 VAR_6.notify.fn = ((void*)0);
 VAR_6.client = VAR_3->io;
 VAR_7.bdev = VAR_3->meta_dev ? VAR_3->meta_dev->bdev : VAR_3->dev->bdev;
 VAR_7.sector = VAR_3->start;
 VAR_7.count = VAR_2;

 if (VAR_4 == VAR_1)
  FUNC_1(VAR_3);

 return FUNC_0(&VAR_6, 1, &VAR_7, ((void*)0));
}
