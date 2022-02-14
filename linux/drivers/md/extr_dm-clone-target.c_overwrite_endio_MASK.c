
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_region_hydration {int status; int overwrite_bio_end_io; } ;
struct bio {int bi_status; int bi_end_io; struct dm_clone_region_hydration* bi_private; } ;


 int FUNC_0 (struct dm_clone_region_hydration*) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 struct dm_clone_region_hydration *VAR_1 = VAR_0->bi_private;

 VAR_0->bi_end_io = VAR_1->overwrite_bio_end_io;
 VAR_1->status = VAR_0->bi_status;

 FUNC_0(VAR_1);
}
