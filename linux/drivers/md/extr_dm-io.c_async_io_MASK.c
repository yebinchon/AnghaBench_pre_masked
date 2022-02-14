
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int vma_invalidate_size; int vma_invalidate_address; void* context; int (* callback ) (int,void*) ;struct dm_io_client* client; int count; scalar_t__ error_bits; } ;
struct dpages {int vma_invalidate_size; int vma_invalidate_address; } ;
struct dm_io_region {int dummy; } ;
struct dm_io_client {int pool; } ;
typedef int (* io_notify_fn ) (int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int,unsigned int,struct dm_io_region*,struct dpages*,struct io*,int ) ;
 struct io* FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dm_io_client *VAR_2, unsigned int VAR_3,
      struct dm_io_region *VAR_4, int VAR_5, int VAR_6,
      struct dpages *VAR_7, io_notify_fn VAR_8, void *VAR_9)
{
 struct io *VAR_10;

 if (VAR_3 > 1 && !FUNC_4(VAR_5)) {
  FUNC_0(1);
  VAR_8(1, VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(&VAR_2->pool, VAR_1);
 VAR_10->error_bits = 0;
 FUNC_1(&VAR_10->count, 1);
 VAR_10->client = VAR_2;
 VAR_10->callback = VAR_8;
 VAR_10->context = VAR_9;

 VAR_10->vma_invalidate_address = VAR_7->vma_invalidate_address;
 VAR_10->vma_invalidate_size = VAR_7->vma_invalidate_size;

 FUNC_2(VAR_5, VAR_6, VAR_3, VAR_4, VAR_7, VAR_10, 0);
 return 0;
}
