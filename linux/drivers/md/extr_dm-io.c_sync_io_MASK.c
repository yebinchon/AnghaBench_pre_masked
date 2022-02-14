
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_io {unsigned long error_bits; int wait; } ;
struct io {int vma_invalidate_size; int vma_invalidate_address; struct sync_io* context; int callback; struct dm_io_client* client; int count; scalar_t__ error_bits; } ;
struct dpages {int vma_invalidate_size; int vma_invalidate_address; } ;
struct dm_io_region {int dummy; } ;
struct dm_io_client {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int,unsigned int,struct dm_io_region*,struct dpages*,struct io*,int) ;
 int FUNC_3 (int *) ;
 struct io* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct dm_io_client *VAR_3, unsigned int VAR_4,
     struct dm_io_region *VAR_5, int VAR_6, int VAR_7,
     struct dpages *VAR_8, unsigned long *VAR_9)
{
 struct io *VAR_10;
 struct sync_io VAR_11;

 if (VAR_4 > 1 && !FUNC_5(VAR_6)) {
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_3(&VAR_11.wait);

 VAR_10 = FUNC_4(&VAR_3->pool, VAR_1);
 VAR_10->error_bits = 0;
 FUNC_1(&VAR_10->count, 1);
 VAR_10->client = VAR_3;
 VAR_10->callback = VAR_2;
 VAR_10->context = &VAR_11;

 VAR_10->vma_invalidate_address = VAR_8->vma_invalidate_address;
 VAR_10->vma_invalidate_size = VAR_8->vma_invalidate_size;

 FUNC_2(VAR_6, VAR_7, VAR_4, VAR_5, VAR_8, VAR_10, 1);

 FUNC_6(&VAR_11.wait);

 if (VAR_9)
  *VAR_9 = VAR_11.error_bits;

 return VAR_11.error_bits ? -VAR_0 : 0;
}
