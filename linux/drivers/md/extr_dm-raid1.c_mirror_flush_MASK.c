
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; struct mirror* mirror; int io_client; } ;
struct mirror {TYPE_3__* dev; } ;
struct dm_target {struct mirror_set* private; } ;
struct TYPE_4__ {int * addr; } ;
struct TYPE_5__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {int bi_op_flags; int client; TYPE_2__ mem; int bi_op; } ;
struct dm_io_region {scalar_t__ count; scalar_t__ sector; int bdev; } ;
struct TYPE_6__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dm_io_request*,unsigned int,struct dm_io_region*,unsigned long*) ;
 int FUNC_1 (struct mirror*,int ) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_7)
{
 struct mirror_set *VAR_8 = VAR_7->private;
 unsigned long VAR_9;

 unsigned int VAR_10;
 struct dm_io_region VAR_11[VAR_3];
 struct mirror *VAR_12;
 struct dm_io_request VAR_13 = {
  .bi_op = VAR_4,
  .bi_op_flags = VAR_5 | VAR_6,
  .mem.type = VAR_0,
  .mem.ptr.addr = ((void*)0),
  .client = VAR_8->io_client,
 };

 for (VAR_10 = 0, VAR_12 = VAR_8->mirror; VAR_10 < VAR_8->nr_mirrors; VAR_10++, VAR_12++) {
  VAR_11[VAR_10].bdev = VAR_12->dev->bdev;
  VAR_11[VAR_10].sector = 0;
  VAR_11[VAR_10].count = 0;
 }

 VAR_9 = -1;
 FUNC_0(&VAR_13, VAR_8->nr_mirrors, VAR_11, &VAR_9);
 if (FUNC_3(VAR_9 != 0)) {
  for (VAR_10 = 0; VAR_10 < VAR_8->nr_mirrors; VAR_10++)
   if (FUNC_2(VAR_10, &VAR_9))
    FUNC_1(VAR_8->mirror + VAR_10,
         VAR_1);
  return -VAR_2;
 }

 return 0;
}
