
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* addr; char* vma; } ;
struct TYPE_8__ {TYPE_3__ ptr; int type; } ;
struct TYPE_5__ {struct dm_buffer* context; int fn; } ;
struct dm_io_request {int bi_op; TYPE_4__ mem; int client; TYPE_1__ notify; int bi_op_flags; } ;
struct dm_io_region {unsigned int count; int sector; int bdev; } ;
struct dm_buffer {scalar_t__ data_mode; int (* end_io ) (struct dm_buffer*,int ) ;scalar_t__ data; TYPE_2__* c; } ;
typedef int sector_t ;
struct TYPE_6__ {int bdev; int dm_io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dm_buffer*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct dm_buffer *VAR_4, int VAR_5, sector_t VAR_6,
       unsigned VAR_7, unsigned VAR_8)
{
 int VAR_9;
 struct dm_io_request VAR_10 = {
  .bi_op = VAR_5,
  .bi_op_flags = 0,
  .notify.fn = VAR_3,
  .notify.context = VAR_4,
  .client = VAR_4->c->dm_io,
 };
 struct dm_io_region VAR_11 = {
  .bdev = VAR_4->c->bdev,
  .sector = VAR_6,
  .count = VAR_7,
 };

 if (VAR_4->data_mode != VAR_0) {
  VAR_10.mem.type = VAR_1;
  VAR_10.mem.ptr.addr = (char *)VAR_4->data + VAR_8;
 } else {
  VAR_10.mem.type = VAR_2;
  VAR_10.mem.ptr.vma = (char *)VAR_4->data + VAR_8;
 }

 VAR_9 = FUNC_0(&VAR_10, 1, &VAR_11, ((void*)0));
 if (FUNC_3(VAR_9))
  VAR_4->end_io(VAR_4, FUNC_1(VAR_9));
}
