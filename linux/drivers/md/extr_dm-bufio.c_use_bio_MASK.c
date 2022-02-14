
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_buffer {scalar_t__ data; TYPE_2__* c; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {struct dm_buffer* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_4__ {scalar_t__ block_size; scalar_t__ sectors_per_block_bits; int bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*,int ,unsigned int,scalar_t__) ;
 int VAR_6 ;
 struct bio* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (struct bio*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct dm_buffer*,int,int ,unsigned int,unsigned int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(struct dm_buffer *VAR_7, int VAR_8, sector_t VAR_9,
      unsigned VAR_10, unsigned VAR_11)
{
 struct bio *VAR_12;
 char *VAR_13;
 unsigned VAR_14, VAR_15;

 VAR_14 = VAR_7->c->block_size >> VAR_1;
 if (FUNC_8(VAR_7->c->sectors_per_block_bits < VAR_1 - VAR_3))
  VAR_14 += 2;

 VAR_12 = FUNC_1(VAR_0 | VAR_4 | VAR_5, VAR_14);
 if (!VAR_12) {
dmio:
  FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  return;
 }

 VAR_12->bi_iter.bi_sector = VAR_9;
 FUNC_3(VAR_12, VAR_7->c->bdev);
 FUNC_4(VAR_12, VAR_8, 0);
 VAR_12->bi_end_io = VAR_6;
 VAR_12->bi_private = VAR_7;

 VAR_13 = (char *)VAR_7->data + VAR_11;
 VAR_15 = VAR_10 << VAR_3;

 do {
  unsigned VAR_16 = FUNC_5((unsigned)(VAR_2 - FUNC_6(VAR_13)), VAR_15);
  if (!FUNC_0(VAR_12, FUNC_10(VAR_13), VAR_16,
      FUNC_6(VAR_13))) {
   FUNC_2(VAR_12);
   goto dmio;
  }

  VAR_15 -= VAR_16;
  VAR_13 += VAR_16;
 } while (VAR_15 > 0);

 FUNC_7(VAR_12);
}
