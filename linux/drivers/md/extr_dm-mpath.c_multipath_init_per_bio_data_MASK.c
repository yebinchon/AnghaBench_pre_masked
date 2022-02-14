
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_mpath_io {int * pgpath; int nr_bytes; } ;
struct dm_bio_details {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int FUNC_0 (struct dm_bio_details*,struct bio*) ;
 struct dm_bio_details* FUNC_1 (struct dm_mpath_io*) ;
 struct dm_mpath_io* FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0, struct dm_mpath_io **VAR_1)
{
 struct dm_mpath_io *VAR_2 = FUNC_2(VAR_0);
 struct dm_bio_details *VAR_3 = FUNC_1(VAR_2);

 VAR_2->nr_bytes = VAR_0->bi_iter.bi_size;
 VAR_2->pgpath = ((void*)0);
 *VAR_1 = VAR_2;

 FUNC_0(VAR_3, VAR_0);
}
