
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity_io {int orig_bi_end_io; struct dm_verity* v; } ;
struct dm_verity {TYPE_1__* ti; } ;
struct bio {int bi_status; int bi_end_io; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int per_io_data_size; } ;


 int FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (struct dm_verity_io*,int ) ;
 int FUNC_2 (struct dm_verity_io*) ;

__attribute__((used)) static void FUNC_3(struct dm_verity_io *VAR_0, blk_status_t VAR_1)
{
 struct dm_verity *VAR_2 = VAR_0->v;
 struct bio *VAR_3 = FUNC_1(VAR_0, VAR_2->ti->per_io_data_size);

 VAR_3->bi_end_io = VAR_0->orig_bi_end_io;
 VAR_3->bi_status = VAR_1;

 FUNC_2(VAR_0);

 FUNC_0(VAR_3);
}
