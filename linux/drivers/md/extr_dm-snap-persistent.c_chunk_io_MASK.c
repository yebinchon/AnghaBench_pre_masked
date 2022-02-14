
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pstore {int metadata_wq; int io_client; TYPE_1__* store; } ;
struct mdata_req {int result; int work; struct dm_io_request* io_req; struct dm_io_region* where; } ;
struct TYPE_9__ {int * fn; } ;
struct TYPE_7__ {void* vma; } ;
struct TYPE_8__ {TYPE_2__ ptr; int type; } ;
struct dm_io_request {int bi_op; int bi_op_flags; TYPE_4__ notify; int client; TYPE_3__ mem; } ;
struct dm_io_region {int sector; int count; int bdev; } ;
typedef int chunk_t ;
struct TYPE_10__ {int bdev; } ;
struct TYPE_6__ {int chunk_size; int snap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_io_request*,int,struct dm_io_region*,int *) ;
 TYPE_5__* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct pstore *VAR_2, void *VAR_3, chunk_t VAR_4, int VAR_5,
      int VAR_6, int VAR_7)
{
 struct dm_io_region VAR_8 = {
  .bdev = FUNC_3(VAR_2->store->snap)->bdev,
  .sector = VAR_2->store->chunk_size * VAR_4,
  .count = VAR_2->store->chunk_size,
 };
 struct dm_io_request VAR_9 = {
  .bi_op = VAR_5,
  .bi_op_flags = VAR_6,
  .mem.type = VAR_0,
  .mem.ptr.vma = VAR_3,
  .client = VAR_2->io_client,
  .notify.fn = ((void*)0),
 };
 struct mdata_req VAR_10;

 if (!VAR_7)
  return FUNC_2(&VAR_9, 1, &VAR_8, ((void*)0));

 VAR_10.where = &VAR_8;
 VAR_10.io_req = &VAR_9;





 FUNC_0(&VAR_10.work, VAR_1);
 FUNC_5(VAR_2->metadata_wq, &VAR_10.work);
 FUNC_4(VAR_2->metadata_wq);
 FUNC_1(&VAR_10.work);

 return VAR_10.result;
}
