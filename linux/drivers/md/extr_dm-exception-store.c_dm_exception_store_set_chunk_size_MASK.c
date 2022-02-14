
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_exception_store {unsigned int chunk_size; unsigned int chunk_mask; int chunk_shift; int snap; } ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;

int FUNC_5(struct dm_exception_store *VAR_3,
          unsigned VAR_4,
          char **VAR_5)
{

 if (!FUNC_4(VAR_4)) {
  *VAR_5 = "Chunk size is not a power of 2";
  return -VAR_0;
 }


 if (VAR_4 %
     (FUNC_1(FUNC_2(VAR_3->snap)->bdev) >> 9) ||
     VAR_4 %
     (FUNC_1(FUNC_3(VAR_3->snap)->bdev) >> 9)) {
  *VAR_5 = "Chunk size is not a multiple of device blocksize";
  return -VAR_0;
 }

 if (VAR_4 > VAR_1 >> VAR_2) {
  *VAR_5 = "Chunk size is too high";
  return -VAR_0;
 }

 VAR_3->chunk_size = VAR_4;
 VAR_3->chunk_mask = VAR_4 - 1;
 VAR_3->chunk_shift = FUNC_0(VAR_4);

 return 0;
}
